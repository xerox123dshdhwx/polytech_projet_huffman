//
// Created by Etudi on 03/05/2022.
//
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "../header/fonction.h"


void insert(Dict* list,Dict* dict){
    size_t len = 255;
    for(int k = 0 ; k < len ; k++){
        if(list[k].val == 0 && list[k].key == 0){
            list[k].val = dict->val;
            list[k].key = dict->key;
            break;
        }
    }
}

void update(Dict* list, char key){
    for(int k = 0; k < 255; k++){
        if(list[k].key == key){
            list[k].val++;
        }
    }
};

bool isInList(Dict* list,char c){
    for(int k = 0; k < 255;k++){
        if(list[k].key == c){
            return true;
        }
    }
    return false;
};

void printLDico(Dict* list){
    for(int k = 0 ; k < 255 ; k++){
        if(list[k].val !=0){
            printf("{%c: %d}, ", list[k].key,list[k].val);
        }
    }
    printf("\n");
};

Dict* getDicFromFile(FILE* fp){
    int caractereActuel = 0;
    Dict* list = calloc(255, sizeof(Dict));
    if(fp != NULL){
        do{
            caractereActuel = fgetc(fp); // On lit le caractère
            if(!isInList(list,(char)caractereActuel) && (char)caractereActuel != EOF){
                Dict dict_local = {(char)caractereActuel,1};
                insert(list,&dict_local);
            }else{
                update(list,(char) caractereActuel);
            }
        } while (caractereActuel != EOF);
        fclose(fp);
        printLDico(list);
    }else{
        printf("Impossible d'ouvrir le fichier");
    }
    return list;
};

void bubleSortAscii(Dict* list){
    for(int j = 0; j < 255;j++) {
        for (int k = 0; k < 255 - 1; k++) {
            if (list[k].val < list[k + 1].val) {
                Dict sto = list[k];
                list[k] = list[k + 1];
                list[k + 1] = sto;
            }
        }
    }
    for(int j = 0; j < 255;j++) {
        for (int k = 0; k < 255 - 1; k++) {
            if (list[k].val == list[k + 1].val && list[k].key > list[k+1].key) {
                    Dict sto = list[k];
                    list[k] = list[k + 1];
                    list[k + 1] = sto;
            }
        }
    }
    printLDico(list);
}






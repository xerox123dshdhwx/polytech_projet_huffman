#include <stdio.h>
#include <stdlib.h>
#include "./header/fonction.h"


int main() {
    FILE * fp = NULL;
    fp = fopen("../textesimple.txt","r+");
    int caractereActuel = 0;
    Dict* list = calloc(255, sizeof(Dict));



    //printf("%d",isInList(list,'p'));

    //printf("%d",isInList(list,0));
    //printf("%d",isInList(list,3));


    if(fp != NULL){
        do
        {
            caractereActuel = fgetc(fp); // On lit le caractère
            if(!isInList(list,(char)caractereActuel) && (char)caractereActuel != '\0'){
                Dict dict_local = {(char)caractereActuel,1};
                insert(list,&dict_local);
            }else if((char)caractereActuel != '\0'){
                update(list,(char) caractereActuel);
            };
            //printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF);
        fclose(fp);
        for(int k = 0 ; k < 255 ; k++){
            if(list[k].val !=0){
                printf("{%c %d}, ", list[k].key,list[k].val);
            }
        }
    }else{
        printf("Impossible d'ouvrir le fichier");
    }
    return 0;
}

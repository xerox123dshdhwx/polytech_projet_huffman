//
// Created by Etudi on 03/05/2022.
//
#include <stddef.h>
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





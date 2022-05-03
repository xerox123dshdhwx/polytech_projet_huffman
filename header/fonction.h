//
// Created by Etudi on 03/05/2022.
//
#ifndef FONCTION_H
#define FONCTION_H

#include <stdbool.h>
#include <stdio.h>

typedef struct Dict{
    char key;
    int val;
}Dict;

bool isInList(Dict*,char);

void insert(Dict*,Dict*);

void update(Dict*,char);

Dict* getDicFromFile(FILE* fp);

void printLDico(Dict*);

void bubleSortAscii(Dict*);



#endif //FONCTION_H

#include <stdio.h>
#include <stdlib.h>
#include "./header/fonction.h"


int main() {
    FILE * fp = fopen("../donnees/textesimple.txt","r+");
    Dict* list = getDicFromFile(fp);
    printf("///////////////////\n");
    bubleSortAscii(list);

    return 0;
}

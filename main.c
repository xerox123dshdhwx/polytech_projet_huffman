#include <stdio.h>
#include <stdlib.h>
#include "./header/fonction.h"

int main() {
    FILE * fp = NULL;
    fp = fopen("../textesimple.txt","r+");
    int caractereActuel = 0;
    if(fp != NULL){
        do
        {
            caractereActuel = fgetc(fp); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF);
        fclose(fp);
    }else{
        printf("Impossible d'ouvrir le fichier grosse buffoonery");
    }
    return 0;
}

#include "stdio.h"
#include "stdlib.h"

int main(void){

    // ----------------- ALOCAÇÃO DINAMICA DE MEMORIA COM MALLOC ------------------
    /*
    int *x;

    x = malloc(sizeof(int));

    if(x){
        printf("Memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
    */
    //_____________________________________________________________________________



    // ----------------- ALOCAÇÃO DINAMICA DE MEMORIA COM CALLOC ------------------
    
    char *x;

    x = calloc(1, sizeof(char));

    if(x){
        printf("Memoria alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'C';
        printf("x: %c\n", *x);
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
    
    //_____________________________________________________________________________
    
    return 0;
}
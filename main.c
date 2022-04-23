#include "stdio.h"
#include "stdlib.h"
#include <time.h>

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
    /*
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
    */
    //_____________________________________________________________________________



    // ----------------- AUMENTAR TAMANHO DE UM VETOR COM REALLOC ------------------
    /*
    int i, tam, r, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));
     
    vet = malloc(tam * sizeof(char));

    if(vet){
        printf("Memoria alocada com sucesso!\n");
        for(i = 0; i < tam; i++){
            *(vet + i) = rand() % 100 + 1;
        }
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        printf("\nVetor realocado:\n");
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
    */
    //_____________________________________________________________________________



    //-------------------------------- FUNÇÃO FREE --------------------------------
    /*
    int i, tam, r, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));
     
    vet = malloc(tam * sizeof(char));

    if(vet){
        printf("Memoria alocada com sucesso!\n");
        for(i = 0; i < tam; i++){
            *(vet + i) = rand() % 100 + 1;
        }
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        printf("\nVetor realocado:\n");
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }

    free(vet);

    */
    //_____________________________________________________________________________




    //------------------------ PREENCHER MATRIZ DINAMICAMENTE ----------------------
    int **mat, i, j;

    mat = malloc(4 * sizeof(int));

    for(i = 0; i < 4; i++){
        mat[i] = malloc(3 * sizeof(int));
    }

    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //_____________________________________________________________________________

    
    return 0;
}
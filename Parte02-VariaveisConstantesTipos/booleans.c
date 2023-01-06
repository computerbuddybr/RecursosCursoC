#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void main(){
    bool verdadeiro = true;
    bool falso = false;

    char nome[] = "Adriana";
    char nome2[] = "Adriana";

    printf("Verdadeiro: %d\n", verdadeiro);
    printf("Falso: %d\n", falso);

    if(verdadeiro){
        printf("Oi\n");
    }

    if(0){
        printf("Zero\n");
    }
    if(-20){
        printf("Menos vinte\n");
    }
    if(!strcmp(nome, nome2)){
        printf("São iguais!");
    }

    printf("Verdeiro + verdadeiro = %d\n", (true + true));


}
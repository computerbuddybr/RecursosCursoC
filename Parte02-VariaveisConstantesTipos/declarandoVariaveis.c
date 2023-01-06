#include <stdio.h>


void main(){
 //Declaração  
    int numero1, numero2;
    int valor;//declaração
    valor = 2; //inicialização
    int numeroJaDeclarado = 2;
    printf("Antes: %d\n",numeroJaDeclarado);
    numeroJaDeclarado = 4.50;
    printf("Depois: %d\n",numeroJaDeclarado);

    //Case sensitive
    char minhavar[9] = "minhavar"; 
    char MinhaVar[9] = "MinhaVar";
    printf(minhavar);
    printf("\n");
    printf(MinhaVar);
    printf("\n");
    //Tentar atribuir outro tipo a uma variável vai causar erro
    //numeroJaDeclarado = "Isto vai causar um erro";
}
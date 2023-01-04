#include <stdio.h>
//Protótipo
void funcao2();

//Implementação das minhas funções
void funcao1(){
    funcao2();
}


void main(){
    funcao1();

}
//Implementação bem no final
void funcao2(){
    printf("A função que eu declarei depois de usar!");
}
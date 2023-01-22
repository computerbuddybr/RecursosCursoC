#include <stdio.h>

typedef struct Pessoa{
 char nome[20];
 int idade;

} PESSOA;

void main(){

    PESSOA adriana = {"Adriana", 20};
    PESSOA *meuPonteiro = &adriana;

    printf("Meu nome é %s e minha idade é %d.\n", adriana.nome, adriana.idade);
    //Quando você está acessando as propriedades de um struct usando um ponteiro você usa a sintaxe ->
    printf("Meu nome é %s e minha idade é %d.\n", meuPonteiro->nome, meuPonteiro->idade);

}
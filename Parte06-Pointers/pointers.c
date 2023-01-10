#include <stdio.h>


void main(){

    //Minha variável
    int idade = 28;
    printf("O endereço de memória desta variável é: %p\n", &idade);

    int *meuPonteiro = &idade;
    printf("O endereço de memória desta variável é: %p\n", meuPonteiro);
    printf("Acessando o valor que está no endereço de memória %p: %d\n", meuPonteiro, *meuPonteiro);

   //Array
   int meuArray[5] = {1,2,3,4,5};

   //Posso usar o ponteiro para 
   printf("*****\nArrays\n*****\n");
   //Imprimindo o ponteiro inicial
   printf("Ponteiro inicial do array: %p\n", meuArray);
    //Agora vamos supor que eu forneça a outro ponteiro
    int *segundoElemento = meuArray + 1;
    printf("Usando o novo ponteiro para ver o endereço de memória do segundo elemento: %p\n", segundoElemento);
    printf("Usando o novo ponteiro para acessar o segundo elemento: %d\n", *segundoElemento);

    for(int i = 0; i < 5; i++){
        printf("Usando o a variável array como ponteiro para acessar os elemntos: %d\n", *(meuArray + i));
    }
     for(int i = 0; i < 5; i++){
        printf("Usando variável array como ponteiro para acessar os enderços de memória dos: %p\n", (meuArray + i));
    }
    


   


}
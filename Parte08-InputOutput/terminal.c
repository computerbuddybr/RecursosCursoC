#include <stdio.h>


void main(){
    int age;
    char name[20];

   /*
   printf("Digite seu nome: ");
   //No scanf, o primeiro argumento é um string com o tipo de dado esperado e o segundo é o endereço da variável onde será guardado o dado. Isso porque o scanf espera um ponteiro
    scanf("%s", name);

    printf("Digite sua idade: ");
    scanf("%d", &age);

    printf("Seu nome é %s e sua idade é %d\n", name, age);
*/ 
    int numbers[4];
    //printf("Insira 4 números:");
    //scanf("%d", numbers);
    for(int i = 0; i < 4; i++){
        printf("Insira um número:");
        scanf("%d", numbers + i);
    }

    for(int i = 0; i < 4; i++){
        printf("%d\n", numbers[i]);
    }


}
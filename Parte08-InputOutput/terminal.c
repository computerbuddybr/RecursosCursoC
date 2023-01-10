#include <stdio.h>


void main(){
    int age;
    char name[20];


   printf("Digite seu nome: ");
   //No scanf, o primeiro argumento é um string com o tipo de dado esperado e o segundo é o endereço da variável onde será guardado o dado. Isso porque o scanf espera um ponteiro
    scanf("%s", name);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d", &age);

    printf("Digite seu nome e idade: ");
    scanf("%s%d", name, &age);
    fflush(stdin);
    printf("Seu nome é %s e sua idade é %d\n", name, age);

    int numbers[4];
    // printf("Insira 4 números:");
    // scanf("%d", numbers);
    // scanf("%d%d%d%d", numbers);
    //scanf("%d%d%d%d", numbers, (numbers + 1), (numbers + 2), (numbers + 3));
    //Posso fazer um loop pra pessoa colocar em uma linha diferente
    for(int i = 0; i < 4; i++){
        printf("Insira um número:");
        scanf("%d", numbers + i);
    }
     for(int i = 0; i < 4; i++){
        printf("%d\n", numbers[i]);
    }
    //Ou posso fazer uma vez só já avisando o scanf que ele vai receber mais de um dado separado por espaços
    printf("Insira um número:");
    scanf("%d%d%d%d", &numbers[0],&numbers[1],&numbers[2], &numbers[3]);
     for(int i = 0; i < 4; i++){
        printf("%d\n", numbers[i]);
    }

   


}
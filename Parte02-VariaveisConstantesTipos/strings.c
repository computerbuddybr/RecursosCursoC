#include <stdio.h>
#include <string.h>


void main(){
    char meuCaractere = 'A'; //Um caractere, e ocupa 1 byte
    char nome[8] = "Adriana"; //Um string. Coloco sempre um a mais para o caractere que finaliza o String 
    printf("Meu caractere: %c\n", meuCaractere);
    printf(nome);
    printf("\n");
    printf("Meu string %s\n", nome);

    //Posso inicializar strings de 3 maneiras diferentes
    char string1[] = "Sem declarar o tamanho nos colchetes mas inicializando";
    char string2[10]; //Simplesmente declarando mas sem inicializar com valores. Então preciso colocar o tamanho
    char string3[51] = "Declarando o tamanho nos colchetes e inicializando";

    

    //Formatando meu printf
    char sobrenome[9] = "Cerdeira";
    printf("Olá, sou a %s %s\n", nome, sobrenome);


    
        char minhaCopia[8]; 
        strcpy(minhaCopia, nome); //copia um string em outro string, primeiro argumento string de destino, segundo argumento string a ser copiado
        printf("Minha cópia: %s\n", minhaCopia);

        char saudacao[35] = "Olá, ";
        strcat(saudacao, "sou a ");
        strcat(saudacao, nome); //concatena strings a um string. Primeiro argumento o string que vai receber as concatenações, e segundo o string a concatenar
        strcat(saudacao, " ");
        strcat(saudacao, sobrenome);
        strcat(saudacao, "!");
        printf("Minha concatenação: %s\n", saudacao);


        //Compara dois strings. Retorna o valor 0 se os dois strings são iguais
        char aderbaldo[10] = "Aderbaldo";
        char adriana[8] = "Adriana";
     
        if(strcmp(nome,aderbaldo) == 0){
            printf("%s e %s são iguais\n", nome, aderbaldo);
        } else{
            printf("%s e %s são diferentes\n", nome, aderbaldo);
        }

        if(strcmp(nome,adriana) == 0){
            printf("%s e %s são iguais\n", nome, adriana);
        } else{
            printf("%s e %s são diferentes\n", nome, adriana);
        }
        
        
        


        //Comparando os primeiro caractere de dois strings. Retorna 0 se for verdadeiro. Primeiro e segundo parametros os strings a serem comparados e terceiro parametro o número de caracteres a serem comparados
        if(strncmp(nome, aderbaldo,2) == 0){
            printf("%s e %s começam com a mesma letra\n", nome,  aderbaldo);
        } else{
            printf("%s e %s começam com letras diferentes\n", nome,  aderbaldo);
        }
        int comprimento = strlen(nome); //calcula o número de letras do string
        printf("%s tem %d letras", nome, comprimento);

 
}
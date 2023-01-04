#include <stdio.h>


void main(){

    //Declaração  
    int numero1, numero2;
    int numeroJaDeclarado = 2;

    //Case sensitive
    char minhavar[9] = "minhavar"; 
    char MinhaVar[9] = "MinhaVar";
    printf(minhavar);
    printf(MinhaVar);

    //Tentar atribuir outro tipo à uma variável vai causar erro
    //numeroJaDeclarado = "Isto vai causar um erro";

    //Tipos de números
    char umByte = 127; //Apesar de ser mais comunmente usado para guardar caracteres, pode guardar números inteiros entre -128  e 127 pois tem 1 byte
    short inteiroMenor = 32768; //pelo menos 2 bytes
    int inteiro = -32767; //pelo menos 2 bytes
    long inteiroMaior = 2147483647;//pelo menos 4 bytes

    //Sem valores negativos
    unsigned char charPositivo = 255; //de 0 a pelo menos 255
    unsigned short shortPositivo = 65535; //de 0 a pelo menos 65,535
    unsigned int intPositivo = 65535; //de 0 a pelo menos 65,535    
    unsigned long longPositivo = 4294967295; //de 0 a pelo menos 4,294,967,295

    //Vendo o overflow
    printf("%d", shortPositivo);
    shortPositivo++;
    printf("%d", shortPositivo);

    //Decimais
    float decimal;
    double decimalMairo;
    long double decimalMaiorAinda;  

    

    //Conversão de tipos
    //Explicita
    int a = 5;
    int b = 2;
    //Aqui você está transformando o a e o b em float para o código não quebrar
    float soma = (float) a/b;
    printf("Meu float %f", soma);

    //Implicita
    //O próprio C percebe que tem que converter e o faz, cuidado, as vezes dá erro e é mais seguro fazer a conversão Explicita
    //Aqui o próprio C está transformando o a e o b em float para o código não quebrar
    float soma2 =  a/b;
    printf("Meu float %f", soma);
    //Aqui o próprio C está arredondando o valor e descartando o que ele considera superfluo
    int arredondado = 9.99;
    printf("Arredondou: %d", arredondado);

}
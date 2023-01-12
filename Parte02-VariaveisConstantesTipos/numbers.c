#include <stdio.h>

void main(){   

    //Tipos de números
    char umByte = 127; //Apesar de ser mais comunmente usado para guardar caracteres, pode guardar números inteiros entre -128  e 127 pois tem 1 byte
    // umByte = 'd';
    // printf("%d", umByte);
    short inteiroMenor = 32768; //pelo menos 2 bytes
    int inteiro = -32767; //pelo menos 2 bytes
    long inteiroMaior = 2147483647;//pelo menos 4 bytes

    // //Sem valores negativos
    unsigned char charPositivo = 255; //de 0 a pelo menos 255
    unsigned short shortPositivo = 65535; //de 0 a pelo menos 65,535
    unsigned int intPositivo = 65535; //de 0 a pelo menos 65,535    
    unsigned long longPositivo = 4294967295; //de 0 a pelo menos 4,294,967,295

    //Vendo o overflow
    printf("%d\n", shortPositivo);
    //shortPositivo = 65538;
    shortPositivo++;    
    printf("Overflow unsigned short: %d\n", shortPositivo);
    umByte++;
    umByte = 132; 
    printf("Overflow char: %d\n", umByte);

    // //Decimais
    float decimal;
    double decimalMaior;
    long double decimalMaiorAinda; 


    
    
    //Conversão de tipos
    //Explicita
    int a = 5;
    int b = 2;
    //Aqui você está transformando o a e o b em float para o código não quebrar e a divisão acontecer
    float divisao =  (float) a/b;
    printf("Meu float %f\n", divisao);

    float soma = (float) a + b;
    printf("Meu float %f\n", soma);

    //Implicita
    //O próprio C percebe que tem que converter e o faz, cuidado, as vezes dá erro e é mais seguro fazer a conversão Explicita
    //Aqui o próprio C está transformando em float para o código não quebrar
    float soma2 = a + b;
    printf("Meu float %f\n", soma2);
    // //Aqui o próprio C está arredondando o valor e descartando o que ele considera superfluo
    int arredondado = 9.99;
    printf("Arredondou: %d\n", arredondado);

}
#include <stdio.h>




void main(){

    
    printf("*****\nContando com o for:\n*****\n");
    for(int i = 0; i < 5; i++){
        
        printf("%d\n", i);        
        
    }
    //printf("Fora do loop %d", i);

    int j = 0;
    printf("*****\nContando com o for e iniciando fora:\n*****\n");
    for(; j < 5; ){
        printf("%d\n", j);
        j++;
        
    }
    printf("Fora do loop %d\n", j);


    printf("*****\nContando com o while:\n*****\n");
    int a = 0;
    while(a < 5){
        printf("%d\n", a);
        a++;        
    }

    printf("*****\nA diferença com o do/while:\n*****\n");
    int b = 0;
    do{
        printf("Rodou mesmo sendo falsa!\n");
    }while(b != 0);

    //Diferenças entre break e continue
    //Break quebra do bloco em que está
    printf("*****\nBreak:\n*****\n");
    for(int d = 0; d < 3; d++){
        //Ele sempre vai rodar este loop
        printf("**********\n");
        printf("Este é o loop de fora na volta %d\n", d);
        for(int e = 0; e < 3; e++){
            printf("Este é o loop de dentro na volta %d\n", e);
            if(e % 2 != 0){
                //Quando não for par vai entrar, rodar este printf e sair
                printf("Agora ele vai sair do loop interno mas não do externo\n");
                break;
                printf("Agora ele vai sair do loop interno mas não do externo\n");
            }
            //Ele só vai chegar neste print se não entrar no if
            printf("Como era par não saiu do interno\n");

        }       

    }
    //Continue quebra a iteração do bloco em que está mas continua o loop
    printf("*****\nContinue:\n*****\n");
    for(int f = 0; f < 3; f++){
        
        printf("**********\n");
        printf("Este é o loop de fora na volta %d\n", f);
        for(int g = 0; g < 3; g++){
            printf("Este é o loop de dentro na volta %d\n", g);
            if(g % 2 != 0){
                //Quando não for par vai entrar, rodar este printf e sair do bloco mas vai continuar o loop
                printf("Agora ele vai sair do loop interno mas não do externo\n");
                continue;
            }
            //Ele só vai chegar neste print se não entrar no if
            printf("Como era par não saiu do interno\n");

        }        

    }



}
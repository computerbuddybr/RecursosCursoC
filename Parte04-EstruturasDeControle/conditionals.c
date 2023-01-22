#include <stdio.h>


void main(){
    int a = 2;
    int b = 4;
    long two = 2;
    
    if(a == b){
        printf("a é b sao iguais\n");
    } else if(a < b){
        printf("a maior que b\n");
    } else {
        printf("a menor que b\n");
    }

    switch(a){
        case 0:
            printf("a = 0\n");
            break;
        case 1:
            printf("a = 1\n");
            break;
        case '2':
            printf("a era o char 2?\n");
            break;
        case 2:
            printf("a = 2\n");
            break;
        default:
            printf("Não achamos o valor de a\n");
    }

    switch(two){
        case 0:
            printf("two = 0\n");
            break;
        case 1:
            printf("two = 1\n");
            break;
        case 2:
            printf("two = 2\n");
            break;
        default:
            printf("Não achamos o valor de a\n");
    }

    //Sem break
    switch(1){
        case 0:
            printf("Este não vai rodar\n");
            break;
        case 1:
            printf("Este é o primeiro que vai rodar...\n");
        case 2:
            printf("Dai vamos continuar aqui...\n");
        case 3:
            printf("E aqui...\n"); 
        case 4:        
            printf("E aqui...\n"); 
            break;   
        default:
            printf("Mas não aqui\n");
    }

    

}
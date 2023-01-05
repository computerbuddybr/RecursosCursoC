#include <stdio.h>
//Vou deixar um exemplo aqui de acessando um array e passando do número de elementos declarados com ponteiros pra vc testar e ver que é possível, mas vc nunca deve fazer isso.

void main(){
    int meuArray[10];

    for(int i = 0; i < 10; i++){
        *(meuArray + i) = i;
    }
    *(meuArray + 10) = 10; 

    for(int i = 0; i < 11; i++){
        printf("%d\t", *(meuArray + i));
    }


}
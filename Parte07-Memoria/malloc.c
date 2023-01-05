#include <stdio.h>
#include <stdlib.h>


void main(){
    //Crio o ponteiro
   int *ponteiro;
   //Número de elementos
   int elementos = 10;

   //Calculo o quanto de memória vou precisar para cada eelemento do meu array
   int bytes = sizeof(int);
   
   //Aloco a memória para o meu ponteiro
   ponteiro = (int *) malloc(elementos * bytes);

   for(int i =0; i < elementos; i++){
    printf("%d\t", ponteiro[i]);
   }
   printf("\n");

   for(int i =0; i < elementos; i++){
        ponteiro[i] = i;
   }

   for(int i =0; i < elementos; i++){
        printf("%d\t", ponteiro[i]);
   }

}
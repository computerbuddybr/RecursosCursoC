#include <stdio.h>
/**
 * Verificando a precisão da minha máqina
*/

void main(){
  printf("Tamanho char: %lu bytes\n", sizeof(char));
  printf("Tamanho int: %lu bytes\n", sizeof(int));
  printf("Tamanho short: %lu bytes\n", sizeof(short));
  printf("Tamanho long: %lu bytes\n", sizeof(long));
  printf("Tamanho float: %lu bytes\n", sizeof(float));
  printf("Tamanho double: %lu bytes\n", 
    sizeof(double));
  printf("Tamanho long double: %lu bytes\n", 
    sizeof(long double));
}
#include <stdio.h>
/**
 * Devo declarar o tipo do retorno e o tipo de cada um dos parâmetros
*/
int minhaFuncao(int a, int b){
    return a + b;
}
void main(){
    int a = 2;
    int b = 3;
    
    //O printf imprime sempre um string, então devo usar a formatação de Strings para fornecer um número usando placeholders
    printf("O resultado de %d + %d = %d\n", a, b, minhaFuncao(a,b));
    printf("nova linha");
}
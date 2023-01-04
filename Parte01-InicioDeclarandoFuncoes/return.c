#include <stdio.h>
/**
 * Devo declarar o tipo do retorno e o tipo de cada um dos parâmetros
*/
int minhaFuncao(int a, int b){
    return a + b;
}
void main(){
    
    //O printf imprime sempre um string, então devo usar a formatação de Strings para fornecer um número
    printf("%d", minhaFuncao(2,3));
}
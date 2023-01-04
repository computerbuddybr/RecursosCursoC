#include <stdio.h>
//Vou poder acessar de qualquer lugar do código
char variavelGlobal[12] = "Sou global\n";

void funcaoLocal(){
    //Só vou conseguir acessar de dentro da função
    char variavelLocal[12] = "Sou local\n";
    printf(variavelLocal);
    printf(variavelGlobal);
}

int incrementar(int a){
    a++;
    return a;
}

/**
 * Função que vai incrementar o valor na minha variável usando um ponteiro
*/
void dobrar(int *myNum){
    printf("Meu número inicialmente:%d\n", *myNum);
    *myNum *= 2;
}
void main(){
    
    printf(variavelGlobal);
    funcaoLocal();
    //printf(variavelLocal);
    int a = 2;
    int incremento = incrementar(a);
    printf("a: %d\n", a);
    printf(" Variável incremento: %d\n", incremento);
    //incrementar(&a);
    //printf("a: %d\n", a);
    int *ponteiroDea = &a;
    int teste = incrementar(*ponteiroDea);
    printf("a: %d\n", a);
    printf("teste: %d\n", teste);

    //Agora vamos incrementar o nosso
    dobrar(&a);
    printf("a incrementado: %d\n", a);

    //Decidindo qual variável alterar
    int b = 5;
    if(a > b){
        dobrar(&a);
    } else {
        dobrar(&b);
    }
    printf("a: %d e b: %d\n", a, b);

    //Passando o ponteiro pra função que espera o ponteiro
    dobrar(ponteiroDea);
    printf("a incrementado: %d\n", a);





}
#include <stdio.h>
#include <string.h>

int multiplicar(int a, int b){
    return a * b;
}
void main(){

    //Atribuição
    int a = 10;
    int b = 4;

    //Aritméticos
    
    printf("*****\nAritméticos\n*****\n");
    printf("Adição: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %f\n",  10 / 4);
    printf("Divisão: %f\n", 10.0 / 4.0);
    printf("Divisão: %f\n", (float) a / b);
    printf("Módulo: %d\n", a % b);

    //Incremento e decremento - antes incrementa ou decrementa antes de usar e depois depois de usar
    //O mesmo que fazer a = a +1;
    printf("*****\nIncremento\n*****\n");
    printf("Depois: %d\n", a++); //Vai imprimir 2 e depois aumentar pra 3
    printf("Antes: %d\n", ++a);//Vai aumentar pra 4 e depois imprimir
    printf("*****\nDecremento\n*****\n");
    //O mesmo que fazer a = a - 1;
    printf("Depois: %d\n", a--);//Vai imprimir 4 e depois diminuir pra 3
    printf("Antes: %d\n", --a);//Vai diminuir pra 2 e depois imprimir

    //Operadores unários - o sinal de menos inverte o sinal do argumento, de positivo pra negativo e vice-versa. O sinal de mais não tem efeito
    int c = -10;
    int d = 5;
    int resMenos, resMais;
     //O mesmo que resMenos = -1 * c;
    resMenos = -c;
     //O mesmo que resMenos = 1 * c;
    resMais = +c;
    printf("*****\nUnário\n*****\n");
    printf("*****\nCom números negativos\n*****\n");
   
    printf("Menos: %d\n", resMenos);
    printf("C: %d\n", c);
    //O mesmo que    
    printf("Mais: %d\n", resMais);
    printf("C: %d\n", c);
    resMenos = -d;
    resMais = +d;
    printf("*****\nCom números positivos\n*****\n");
    printf("Menos: %d\n", resMenos);
    printf("D: %d\n", d);   
    printf("Mais: %d\n", resMais);
    printf("D: %d\n", d);

    //Comparação
    //Retornam verdadeiro (1) ou falso (0)
    printf("*****\nComparação\n*****\n");
    printf("Igualdade: %d\n", a == b);    
    printf("Igualdade: %d\n", 2 == '2');
    printf("O que é o 2: %d\n", '2');
    printf("Igualdade: %d\n", 2 == 2.0);
    //printf("Igualdade: %d\n", 2 == "2");
    printf("Desigualdade: %d\n", a != b);
    printf("Maior que: %d\n", a > b);
    printf("Menor que: %d\n", a < b);
    printf("Maior ou igual que: %d\n", a >= b);
    printf("Menor ou igual que: %d\n", a <= b);


    //Lógicos. 
    //Retornam verdadeiro (1) ou falso (0)
    int zero = 0;
    printf("*****\nLógicos\n*****\n");
    printf("Não: %d\n", !zero);
    printf("E: %d\n", a != b && a < b);
    printf("Ou: %d\n", a > b || d < c);

    //Atribuição combinada/composta
    //Vai executar a operação com a variável que está a esquerda do sinal de atribuição e o valor a direita e atribuir o resultado a variável a esquerda
    int atribuicaoCombinada = 2;
    printf("*****\nAtribuição Combinada\n*****\n");
    atribuicaoCombinada += a;
    //Igual à atribuicaoCombinada = atribuicaoCombinada  + a
    printf("+=: %d\n", atribuicaoCombinada);
    atribuicaoCombinada -= a;
    //Igual à atribuicaoCombinada = atribuicaoCombinada  - a
    printf("-=: %d\n", atribuicaoCombinada);
    atribuicaoCombinada /= 2;
    //Igual à atribuicaoCombinada = atribuicaoCombinada  / a
    printf("/=: %d\n", atribuicaoCombinada);
    atribuicaoCombinada *= a;
    //Igual à atribuicaoCombinada = atribuicaoCombinada  * a
    printf("*=: %d\n", atribuicaoCombinada);
    atribuicaoCombinada %= a;
    //Igual à atribuicaoCombinada = atribuicaoCombinada  % a
    printf("%%=: %d\n", atribuicaoCombinada);

    //Ternário
    printf("*****\nTernario\n*****\n");
    printf("%s\n", a < b ? "a menor que b" : "a nao é menor que b");
    int resultado = a < b ? a : b;
    printf("Qual era o menor? %d\n", resultado);
    char meuRes[20];
    strcpy(meuRes, a < b ? "a menor que b" : "a nao é menor que b");
    printf(meuRes);
    printf("\n");
   

    //Sizeof - serve para ver o tamanho do dado em bytes. Sabemos que um caractere tem 1 byte, vamos testar.
    char caractere = 'a';
    printf("*****\nSizeof\n*****\n");
    printf("%d\n",sizeof(caractere));

    //Precedência de operadores
    printf("*****\nPrecedência de Operdadores\n*****\n");
    printf("%d\n", a + b/2);
    printf("%d\n",(a + b)/2);

    int multiplicacao = multiplicar(2,10)/multiplicar(2,2);
    printf("Resultado: %d\n", multiplicacao);


    
 


    

}
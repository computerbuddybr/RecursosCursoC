/**
 * Função que já adiciona uma quebra de linha ao printf de um string
 * @param string - valor a ser impresso
 * @param description - alguma descrição que quero para.  anteceder
*/
void printString(char string[], char description[]){
    printf("%s", description)
    printf(string);
    printf("\n");

}
/**
 * Função que já adiciona uma quebra de linha ao printf de um número
 * @param number - valor a ser impresso
 * @param description - alguma descrição que quero para.  anteceder
*/
void printInt(int number, char description[]){
    printf("%s", description)
    printf("%d", number);
    printf("\n");


}
/**
 * Função que já adiciona uma quebra de linha ao printf de um float
 * @param number - valor a ser impresso
 * @param description - alguma descrição que quero para.
*/
void printFloat(float number, char description[]){
    printf("%s", description)
    printf("%f", number);
    printf("\n");

}

/**
 * Função que já adiciona uestilização no título
*/
void printTitle(char title[]){
    printf("*****\n");
    printf(title);
    printf("\n");
    printf("*****\n");

}

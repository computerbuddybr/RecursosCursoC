#include <stdio.h>


void main(){
      //Crio um ponteiro do tipo file que vai guardar a função do meu arquivo
      FILE *arquivo;
      //Crio as variáveis onde vou guardar o que ler do meu arquivo
      char nome[15];
      int ano;
      float gastos;

      //Uso a função fopen que retorna um ponteiro para o stream do arquivo
      arquivo = fopen("cliente.txt", "r");
      if(arquivo){
        while(!feof(arquivo)){
            fscanf(arquivo, "%s%d%f", nome, &ano, &gastos);
            printf("Cliente: %s | Desde: %d | Gastos: R$%.2f\n*****\n", nome, ano, gastos);
        }
        
      } else {
        printf("O arquivo não existe\n");
      }

      fclose(arquivo);
}
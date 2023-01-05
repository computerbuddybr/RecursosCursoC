#include <stdio.h>


void main(){
     //Crio um ponteiro do tipo file que vai guardar a função do meu arquivo
      FILE *arquivo;
      //Crio as variáveis onde vou guardar o que vou escrever no meu arquivo
      char nome[15];
      int ano;
      float gastos;

      //Vou pedir do meu usuário os dados
      printf("Por favor insira o nome, ano que começou a ser cliente e gastos separado por espaço.");
      scanf("%s%d%f", nome, ano, gastos);    
      printf("Cliente: %s | Desde: %d | Gastos: R$%.2f\n*****\n", nome, ano, gastos);        

      //Uso a função fopen que retorna um ponteiro para o stream do arquivo
      arquivo = fopen("cliente.txt", "a");
      printf("Ponter:%p\n", arquivo);

      if(arquivo){
            printf("Escreveu");        
            fprintf(arquivo, "%s\t%d\t%f\n", nome, ano, gastos);
 
      } else {
        printf("O arquivo não existe\n");
      }

      fclose(arquivo);

}
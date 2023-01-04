#include <stdio.h>
#include <string.h>

typedef struct Pessoa{
 
    char nome[30];
    int idade;

} PESSOA;

struct Cliente{
    PESSOA pessoa;
    char cpf[14]; 

};


void funcao(struct Cliente cliente){
    //Este é outro modo de já inicializar uma variável. Repare que aqui eu não uso o typedef então a palavra depois da chave é considerada uma variável sendo inicializada e não o nome de um tipo que está sendo definido.
    struct Produto{
        char nome[20];
        float preco;

    } produto;

    strcpy(produto.nome, "Caneta");
    produto.preco = 10.15;
    struct Pedido{
        struct Cliente cliente;
        struct Produto produto;
    };
    struct Pedido pedido = { cliente, produto};

    printf("Cliente: %s comprou uma %s por R$%.2f",pedido.cliente.pessoa.nome, pedido.produto.nome, pedido.produto.preco);
    
}

void main(){

    
    struct Cliente cliente;
   
    strcpy(cliente.pessoa.nome, "Adriana Cerdeira");
    
    cliente.pessoa.idade = 28;
    
    strcpy(cliente.cpf,"222.333.444-45");
    
    printf("Cliente: %s\nIdade: %d, CPF: %s\n",cliente.pessoa.nome,cliente.pessoa.idade, cliente.cpf);
    funcao(cliente);

}
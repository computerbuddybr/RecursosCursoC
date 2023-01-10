#include <stdio.h>

typedef struct Produto{
    char nome[20];
    float preco;
} PRODUTO;

typedef struct Pedido{
    PRODUTO itens[3];

} PEDIDO;

PEDIDO criarPedido(){
    
    PRODUTO caneta = { "Caneta", 5.5};
    PRODUTO lapis = { "Lápis", 2.5};
    PRODUTO borracha = { "Borracha", 1.5};
    PEDIDO pedido = {{caneta, lapis, borracha}};
    return pedido;
}
void main(){
    PEDIDO pedido = criarPedido();
    float total = 0;
    for(int i = 0; i < 3; i++){
        total += pedido.itens[i].preco;
        printf("Item: %s | Valor: R$%.2f\n",pedido.itens[i].nome, pedido.itens[i].preco );
        

    }
    printf("\n-----\n");
    printf("Total: R$%.2f\n", total);

}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char letra;
    struct no *proximo;
} No;
typedef struct pilha{
    No *topo;
} Pilha;

void push(Pilha *p, char valor){
    No *novo = malloc(sizeof(No)); //guardando o espaço para novo nó
    if(novo == NULL){
        printf("Erro ao alocar memória\n");
        return;
    }
    novo->letra = valor;
    novo->proximo = p->topo;
    p->topo = novo;
}
void pop(Pilha *p) {
    if (p->topo == NULL) {
        printf("Pilha vazia\n");
        return;
    }
    No *remover = p->topo;
    p->topo = remover->proximo;
    free(remover);
    
}

int main(){
    Pilha p;
    p.topo = NULL;
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    for(int i = 0; i < strlen(palavra); i++){
        push(&p, palavra[i]);
    }
    printf("Palavra invertida: ");
    while(p.topo){
        printf("%c", p.topo->letra);
        pop(&p);
    }
    printf("\n");
    return 0;

}
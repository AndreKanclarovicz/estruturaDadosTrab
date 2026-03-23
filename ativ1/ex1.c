#include<stdio.h>
int main(){
    char p1[30], p2[30], p3[30];
    printf("Escreva 3 palavras: ");
    scanf("%s %s %s", p1, p2, p3);

    printf("Ordem inversa: \n %s \n %s \n %s",p3,p2,p1);
}
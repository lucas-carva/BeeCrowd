#include <stdio.h>
 
int main() {
 
    int idade, soma = 0;
    int cont = 0;
    do{
        scanf("%d", &idade);
        if (idade<0) break;
         soma+=idade;
        cont++;
    }while(1);
    
    printf("%.2lf\n", soma/(cont*1.0));
 
    return 0;
}
#include <stdio.h>
 
int main() {

    int qtd, codigo;
    
    scanf("%d%d", &codigo, &qtd);
    
    switch (codigo){
        case 1: printf("Total: R$ %.2lf\n", 4.0*qtd); break;
        case 2: printf("Total: R$ %.2lf\n", 4.5*qtd); break;
        case 3: printf("Total: R$ %.2lf\n", 5.0*qtd); break;
        case 4: printf("Total: R$ %.2lf\n", 2.0*qtd); break;
        case 5: printf("Total: R$ %.2lf\n", 1.5*qtd); break;
    }
 
    return 0;
}
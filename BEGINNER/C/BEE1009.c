#include <stdio.h>
 
int main() {
 
    double salario, vendas;
    char nome[10];
    
    scanf("%s%lf%lf", nome, &salario, &vendas);
    salario += vendas*0.15;
    printf("TOTAL = R$ %.2lf\n", salario);
 
    return 0;
}
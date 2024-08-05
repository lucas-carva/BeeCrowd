#include <stdio.h>
 
int main() {
 
    double valor;
    int n, m;

    scanf("%lf", &valor);
    
    n = valor*100;
    n = n/100;
    valor = valor - n;
    m = valor * 100;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n/100);
    n = n%100;
    printf("%d nota(s) de R$ 50.00\n", n/50);
    n = n%50;
    printf("%d nota(s) de R$ 20.00\n", n/20);
    n = n%20;
    printf("%d nota(s) de R$ 10.00\n", n/10);
    n = n%10;
    printf("%d nota(s) de R$ 5.00\n", n/5);
    n = n%5;
    printf("%d nota(s) de R$ 2.00\n", n/2);
    n = n%2;
    
    if (n>0) m = m + 100;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m/100);
    m = m%100;
    printf("%d moeda(s) de R$ 0.50\n", m/50);
    m = m%50;
    printf("%d moeda(s) de R$ 0.25\n", m/25);
    m = m%25;
    printf("%d moeda(s) de R$ 0.10\n", m/10);
    m = m%10;
    printf("%d moeda(s) de R$ 0.05\n", m/5);
    m = m%5;
    printf("%d moeda(s) de R$ 0.01\n", m);
    
    return 0;
}
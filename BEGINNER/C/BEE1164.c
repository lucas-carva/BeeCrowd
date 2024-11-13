#include <stdio.h>
 
int main() {
 
    int n;
    int numero;
    int soma=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &numero);
        for(int j=1; j<numero; j++){
            if(numero%j==0) soma+=j;
        }
        if(numero==soma)printf("%d eh perfeito\n", numero);
        else printf("%d nao eh perfeito\n", numero);
        soma = 0;
    }
 
    return 0;
}
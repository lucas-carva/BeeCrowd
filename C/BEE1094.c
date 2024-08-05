#include <stdio.h>
 
int main() {
 
    int n, c=0, r=0, s=0, qtd=0, total=0;
    char animal;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %c", &qtd, &animal);
        if(animal=='C') c+=qtd;
        if(animal=='R') r+=qtd;
        if(animal=='S') s+=qtd;
        total +=qtd;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", (1.0*c/total)*100);
    printf("Percentual de ratos: %.2lf %%\n", (1.0*r/total)*100);
    printf("Percentual de sapos: %.2lf %%\n", (1.0*s/total)*100);
 
    return 0;
}
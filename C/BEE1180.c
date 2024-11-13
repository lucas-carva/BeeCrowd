#include <stdio.h>
 
int main() {
 
    int N;
    int menor;
    int posicao;
    
    scanf("%d", &N);
    
    int x[N];
    
    for(int i=0; i<N; i++){
        scanf("%d", &x[i]);
        
        if (i==0) {
            menor = x[i];
            posicao = i;
        }
        
        if(x[i]<menor) {
            menor = x[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
 
    return 0;
}
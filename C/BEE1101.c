#include <stdio.h>
 
int main() {
 
    int x[10000], y[10000], soma[10000];
    int aux;
    
    for(int i=0;;i++){
    
        scanf("%d%d", &x[i], &y[i]);
        
        if(x[i]<=0 || y[i] <=0) break;
        
        if(x[i]>y[i]){
            aux =x[i];
            x[i] = y[i];
            y[i] = aux;
        }
        for(int j=x[i]; j<=y[i];j++){
            printf("%d ", j);
            soma[i] +=j;
        }
        printf("Sum=%d\n", soma[i]);
        
    }
 
    return 0;
}
#include <stdio.h>
 
int main() {
 
    int T;
    int N;
    
    long long int x[61];
    
    x[0] = 0;
    x[1] = 1;
    
    scanf("%d", &T);
    
    for(int k=0; k<T; k++){
        
        scanf("%d", &N);
            
        for(int i=2;i <=N; i++){
            x[i] = x[i-2]+x[i-1];
        }
        
        printf("Fib(%d) = %lld\n", N, x[N]);
    }
 
    return 0;
}


// 0 1 1 2 3

//valores fixos de x[0] valendo 0 e x[1] valendo 1
//x[(i-2) + (i-1)]
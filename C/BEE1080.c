#include <stdio.h>
 
int main() {
 
    int x[100], maior = 0, pos;
    
    for(int i=1;i<=100;i++){
        scanf("%d", &x[i]);
        if(x[i] > maior){
            maior = x[i];
            pos = i;
        } 
    }
    printf("%d\n%d\n", maior, pos);
    
 
    return 0;
}
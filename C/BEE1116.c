#include <stdio.h>

int main() {
 
    int n, x, y;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        if(y==0)printf("divisao impossivel\n");
        else{
            printf("%.1f\n", (x*1.0)/y);
        }
        
    }
    
    return 0;
}
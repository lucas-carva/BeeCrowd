#include <stdio.h>
 
int main() {
    
    int n;
    do{
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            printf("%d", i);
            if(i!=n) printf(" ");
            if(i==n) printf("\n");
        }
        
    }while(n!=0);
 
    return 0;
}
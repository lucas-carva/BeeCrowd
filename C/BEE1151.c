#include <stdio.h>
 
int main() {
 
    int a=0;
    int b=1;
    int n;
    
    scanf("%d", &n);
    
    int lim = (n/2)+(n%2);
    
    for(int i=0; i<lim; i++){
        
        if(n%2==1 && i==lim-1){
            printf("%d", a);
            break;
        }
        
        printf("%d %d", a, b);
        a+=b;
        b+=a;
        
        if (i!=lim-1) printf(" ");
    }
    printf("\n");
 
    return 0;
}
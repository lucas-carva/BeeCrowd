#include <stdio.h>
 
int main() {
 
    double x;
    double n[100];
    
    scanf("%lf", &x);
    n[0]= x;
    
    for(int i=0; i<100; i++){
        
        if(i==0) printf("N[%d] = %.4lf\n", i, n[i]);
        else{
            n[i] = (n[i-1]/2);
            printf("N[%d] = %.4lf\n", i, n[i]);
        }
        
    }
 
    return 0;
}

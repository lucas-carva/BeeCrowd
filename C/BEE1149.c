#include <stdio.h>
 
int main() {
 
    int a, n, output=0;
    
    scanf ("%d", &a);
    
    while(n<=0) scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        output+=a+i;
    }
    
    printf("%d\n", output);
    
 
    return 0;
}
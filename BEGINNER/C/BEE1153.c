#include <stdio.h>
 
int main() {
 
    int n;
    int produto = 1;
    scanf("%d", &n);
    
    for(int i=n; i>0; i--){
        produto *= i;
    }
    
    printf("%d\n", produto);
 
    return 0;
}
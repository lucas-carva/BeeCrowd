#include <stdio.h>
 
int main() {
 
    int n, cont=0;
    scanf("%d", &n);
    
    for(int i=0; i<20; i++){
        if(n%2==1) {
            printf("%d\n", n);
            cont++;
        }
        if(cont==6) break;
        n++;
    }
 
    return 0;
}
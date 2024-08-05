#include <stdio.h>
 
int main() {
 
    int x, y, aux;
    
    scanf("%d%d", &x, &y);
    
    if(x>y){
        aux = y;
        y = x;
        x = aux;
    }
    
    for(x+1;x<y;x++){
        if(x%5==2 || x%5==3) printf("%d\n", x);
    }
    return 0;
}
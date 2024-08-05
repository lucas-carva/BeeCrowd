#include <stdio.h>
 
int main() {
 
    int x, y, aux, soma;
    scanf("%d%d", &x, &y);
    
    if(x>y){
        aux = x;
        x = y;
        y = aux;
    }
 
    for(int i=x;i<y; i++){
        if(i%2==1 || i%2==-1 && i>x) soma +=i;
    }
    
    printf("%d\n", soma);
 
    return 0;
}
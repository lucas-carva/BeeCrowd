#include <stdio.h>
 
int main() {
 
    int x, z;
    int cont=0;
    int soma=0;
    scanf("%d", &x);

    do{
        scanf("%d", &z);
    }while(x>=z);
    
    for(int i=0; soma<z; i++){
        soma+=x+i;
        cont++;
        
    }
   
    printf("%d\n", cont);
    
    return 0;
}
#include <stdio.h>
 
int main() {
    
    int n;
    int soma=0;
    int cont=0;
    for(int i=0; ;i++){
        scanf("%d", &n);
        if(n==0) break;
        
            do{
                if(n%2==0) {
                    soma+=n;
                    cont++;
                }
                n++;
            }while(cont!=5);
        
        printf("%d\n", soma);
        cont =0;
        soma =0;
        }
 
    return 0;
}
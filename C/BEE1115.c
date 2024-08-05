#include <stdio.h>
 
int main() {
 
    int a, b;
    
    while(1){
        scanf("%d%d", &a, &b);
        if(a==0 || b==0) break;
        if(a>0){
            if(b>0) printf("primeiro\n");
            else printf("quarto\n");
        }
         if(a<0){
            if(b>0) printf("segundo\n");
            else printf("terceiro\n");
        }
    }
 
    return 0;
}
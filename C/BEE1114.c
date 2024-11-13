#include <stdio.h>
 
int main() {
 
    int s;
    
    while(1){
         scanf("%d", &s);
         if(s==2002) break;
         else printf("Senha Invalida\n");
    }
    
    printf("Acesso Permitido\n");
    
    return 0;
}
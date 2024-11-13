#include <stdio.h>
 
int main() {
 
    //128 ate 255 -> branco
    //ate 127 -> preto
    //invalido -> *
    
    //se recebe 0 acaba
    
    int n;
    int cont=0;
    int nota[4];
    scanf("%d", &n);
    
    while(n!=0){
        for(int i=0; i<n; i++){
            scanf("%d", &nota[i]);
            if(nota[i]<=127){
                int resp = i;
                cont++;
            }
           // switch(resp){}
            
        }
        
    }
 
    return 0;
}
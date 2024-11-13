
#include <stdio.h>
 
int main() {
 
    double nota, media=0;
    int input, cont=0;
    
    for(int i=0; ;i++){
        
        scanf("%lf", &nota);
        
        if(nota<0 || nota>10) printf("nota invalida\n");

        else{
           media+= nota;
           cont++;
        }
        
        if (cont==2){
            
            media/=2;
            printf("media = %.2lf\n", media);
            
            while(1){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &input);
                if(input==1 || input==2) break;
            }
            
            if (input==2) break;
            else { 
            media=0; 
            cont=0;
            }
        }
    }
   
    return 0;
}

//vetores par e impar

#include <stdio.h>
 
int main() {
    
    int x;
    int par[5];
    int impar[5];
    int i_par=0, i_impar=0; //indice vetor par e impar
    
    for(int i=0; i<15; i++){ //RECEBE 15 NUMEROS
        
        scanf("%d", &x);
        
            if(x%2==0){ //em caso de x for par
                par[i_par] = x; //armazena x no vetor par
                i_par++; //o vetor segue para a proxima casa
                if(i_par==5){ //caso encher o vetor par
                    for(int i=0; i<5; i++){
                        printf("par[%d] = %d\n", i, par[i]); //libera vetor par cheio
                    }
                    i_par=0;
                }
            }
            else{ //caso x nao for par (impar)
                impar[i_impar] = x;
                i_impar++;
                if(i_impar==5){ //(caso encher o vetor)
                    for(int i=0; i<5; i++){
                        printf("impar[%d] = %d\n", i, impar[i]); //libera vetor impar cheio
                    }
                    i_impar=0;
                }
            }
            
        }
        
        for(int i=0; i<i_impar; i++){ //valor de i_impar sempre sera 1 acima do vetor atual, devido a logica do if/else acima
            printf("impar[%d] = %d\n", i, impar[i]);
        }
       
        for(int i=0; i<i_par; i++){
             printf("par[%d] = %d\n", i, par[i]);
        }
         //imprime restante dos vetores
        
    
    return 0;
}
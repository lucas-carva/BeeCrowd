#include <stdio.h>
 
int main() {
 
    int M[100][100], n, x;
    int linha, coluna, inicio, fim;
    
    while(1){
        scanf("%d", &n);
        
        inicio = 0;
        fim = n;
        x = 1;
        
        if(n == 0)
            return 0;
        
        while(1){
            
            for(linha = inicio; linha < fim; linha++)
                for(coluna = inicio; coluna < fim; coluna++)
                    M[linha][coluna] = x;
            
            if(fim == 0)
                break;
                
            inicio++;
            fim--;
            x++;
        }
         
         
       for(linha = 0; linha < n; linha++){
           for(coluna = 0; coluna < n; coluna++){
                if(coluna == 0)
                    printf("%3hd", M[linha][coluna]);
                else
                    printf(" %3hd", M[linha][coluna]);
           }
           
           printf("\n");
        }
        
        printf("\n");
    }
 
    return 0;
}
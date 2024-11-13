#include <stdio.h>
 
int main() {
 
    double M[12][12];
    double soma = 0;
    char operacao;
    
    scanf(" %c", &operacao);
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    if(operacao == 'S'){
        for(int i =0; i<11; i++){
            for(int j=0; j<11-i; j++){
             soma+= M[i][j];   
            }
        }
        printf("%.1lf\n", soma);
    }
    
    else{
        if(operacao =='M'){
         for(int i =0; i<11; i++){
            for(int j=0; j<11-i; j++){
             soma+= M[i][j];   
            }
        }
            printf("%.1lf\n", soma/66);
        }
        
    }
    

    return 0;
}
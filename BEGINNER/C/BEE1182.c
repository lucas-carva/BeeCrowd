#include <stdio.h>
 
int main() {
 
    double M[12][12];
    double soma = 0;
    int C;
    char operacao;
    
    scanf("%d", &C);
    scanf(" %c", &operacao);
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    if(operacao == 'S'){
        for(int i =0; i<12; i++){
            soma+= M[i][C];
        }
        printf("%.1lf\n", soma);
    }
    
    else{
        if(operacao =='M'){
            for(int i=0; i<12; i++){
                soma+=M[i][C];
            }
            printf("%.1lf\n", soma/12);
        }
        
    }
    

    return 0;
}
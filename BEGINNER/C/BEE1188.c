#include <stdio.h>
 
int main() {
 
    double M[12][12], soma= 0;
    char operacao;
    int cont = 0;
    int k = 0; // controle da diminuicao progressiva do for
    
    scanf("%c", &operacao);
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int i=11; i>6; i--){
        for(int j=1+k; j<11-k; j++){
            soma+= M[i][j];
            cont++;
        }
        k++;
    }
    
    if(operacao == 'S')
        printf("%.1lf\n", soma);
    else 
        printf("%.1lf\n", soma/cont);
 
    return 0;
}
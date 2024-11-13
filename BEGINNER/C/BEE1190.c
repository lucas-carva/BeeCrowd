#include <stdio.h>
 
int main() {
 
    char o;
    double soma = 0;
    double M[12][12];
    int cont = 0, aux =0;
    
    scanf("%c", &o);
    
    for(int i = 0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int j=11; j>6; j--){
        for(int i=1+aux; i<11-aux; i++){
            soma+=M[i][j];
            cont++;
        }
        aux++;
    }
    
    if(o == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf/n", soma/cont);
    }
    
    
 
    return 0;
}
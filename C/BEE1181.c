#include <stdio.h>
 
int main() {
 
    float M[12][12];
    char operation;
    int L;
    float soma =0;
    
    scanf("%d", &L);
    scanf(" %c", &operation);
    
    for(int j=0; j<12; j++){
        for(int i=0; i<12; i++){
            scanf("%f", &M[j][i]);
        }
    }
    
    if(operation=='S'){
        for(int i=0; i<12; i++){
            soma += M[L][i];
        } 
        printf("%.1f\n", soma);
    }
    else{
        if(operation=='M'){
            for(int i=0; i<12; i++){
                soma += M[L][i];
            } 
            printf("%.1f\n", soma/12);
        }
    }
    
    
    return 0;
}
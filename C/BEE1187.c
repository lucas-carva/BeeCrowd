#include <stdio.h>
 
int main() {
 
    double M[12][12];
    char operation;
    double soma =0;
    int cont= 0;
    
    scanf("%c", &operation);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int i=0; i<5; i++){
        for(int j=1+i; j<11-i; j++){
            soma += M[i][j];
            cont++;
        }
    }
    
    if(operation == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/cont);
    
 
    return 0;
}
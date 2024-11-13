#include <stdio.h>
 
int main() {
 
    double M[12][12];
    double soma =0;
    int cont = 0;
    char o;
    
    scanf("%c", &o);
    
    for(int i=0; i<12; i++){
        for(int j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int j=0; j<5; j++){
        for(int i=1+j; i<11-j ;i++){
            soma+= M[i][j];
            cont++;
        }
    }
    
    if(o == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/cont);
    }
    
    return 0;
}
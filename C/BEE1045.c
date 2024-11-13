#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, aux;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if (b>a){
        aux = a;
        a = b;
        b = aux;
    }
    if (c>a){
        aux = a;
        a = c;
        c = aux;
    }
    if (c>b){
        aux = b;
        b = c;
        c = aux;
    }
    
    if ((a > 0 && b > 0 && c > 0) && 
    ((a + b) > c && (a + c) > b && (b + c) > a)){
        
        if (pow(a,2)==pow(b,2) + pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        } 
        else if (pow(a,2) > pow(b,2) + pow(c,2)){
             printf("TRIANGULO OBTUSANGULO\n");
        }
        else printf("TRIANGULO ACUTANGULO\n");
        
        if(a==b && b==c) printf("TRIANGULO EQUILATERO\n");
        else if(a==b || b==c || c==a) printf("TRIANGULO ISOSCELES\n"); 
        
     }
    else{
        printf("NAO FORMA TRIANGULO\n");
    }
 
    return 0;
} 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, b, c;
    double delta, x1, x2;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = pow(b, 2) - 4 * a * c;
    
        if (a==0 || delta < 0){
           printf("Impossivel calcular\n"); 
        } 
        
        else{
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            
            printf("%.5lf\n%.5lf\n", x1, x2);
        }
        
	return 0;
}
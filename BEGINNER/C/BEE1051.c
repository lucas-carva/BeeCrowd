#include <stdio.h>
 
int main() {
 
    double sal, imp, resto;
    
    scanf("%lf", &sal);
    
    if (sal<=2000) printf("Isento\n");
    else{ 
        if (sal<=3000){
            imp = (sal-2000)*0.08;
            printf("R$ %.2lf\n", imp);
        }
        else if (sal<=4500){
            resto = sal-3000;
            imp = resto*0.18 + 1000*0.08;
            printf("R$ %.2lf\n", imp);
        }
        else {
            resto = sal-4500;
            imp = 1000*0.08 + 1500*0.18 + resto*0.28;
            printf("R$ %.2lf\n", imp);
        }
    }
 
    return 0;
}
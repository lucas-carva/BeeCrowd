#include <stdio.h>
 
int main() {
 
    double salario, n_salario;
    
    scanf("%lf", &salario);
    if (salario<=400){
        n_salario = salario + (salario*0.15);
        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", n_salario-salario);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario<=800){
        n_salario = salario + (salario*0.12);
        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", n_salario - salario);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario<=1200){
        n_salario = salario + (salario*0.10);
        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", n_salario-salario);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario<=2000){
        n_salario = salario + (salario*0.07);
        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", n_salario-salario);
        printf("Em percentual: 7 %%\n");
    }
    else{
        n_salario = salario + (salario*0.04);
        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", n_salario-salario);
        printf("Em percentual: 4 %%\n");
    }
    
    return 0;
}
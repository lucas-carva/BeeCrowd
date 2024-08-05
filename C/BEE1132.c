#include <stdio.h>

int main() {

    int menor, maior, aux;
    int soma = 0;
    scanf("%d%d", &menor, &maior);

    if(menor>maior){
        aux=maior;
        maior =menor;
        menor = aux;
    }

    for(;menor<=maior;menor++){
        if(menor%13 == 0){
        }
        else soma+=menor;
    }

    printf("%d\n", soma);
    return 0;
}

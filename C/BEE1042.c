#include <stdio.h>
 
int main() {
 
    int a, b, c, aux, a1, b1, c1;
    
    scanf("%d%d%d", &a, &b, &c);
    a1 = a;
    b1 = b;
    c1 = c;
    
    if (b>c){
        aux = c;
        c = b;
        b = aux;
    }
    if (a>c){
        aux = c;
        c = a;
        a = aux;
    }
    if (a>b){
        aux = b;
        b = a;
        a = aux;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, a1, b1, c1);
    return 0;
}
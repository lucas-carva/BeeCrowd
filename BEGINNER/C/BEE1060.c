#include <stdio.h>
 
int main() {
 
    double v[6];
    int cont;
    for(int i=0;i<6;i++){
        scanf("%lf", &v[i]);
        if (v[i]>0) cont++;
    }
    printf("%d valores positivos\n", cont);
 
    return 0;
}
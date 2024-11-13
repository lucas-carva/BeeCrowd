#include <stdio.h>
 
int main() {
 
    double v[6], media;
    int cont;
    for(int i=0;i<6;i++){
        scanf("%lf", &v[i]);
        if (v[i]>0){ 
            cont++;
            media += v[i];
        }
    }
    media /= cont;
    
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", media);
 
    return 0;
}
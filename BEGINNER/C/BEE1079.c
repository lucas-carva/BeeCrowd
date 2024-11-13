#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    
    double x1[n], x2[n], x3[n], media[n];
    
    for(int i=0; i<n; i++){
        scanf("%lf%lf%lf", &x1[i], &x2[i], &x3[i]);
        media[i] = (x1[i]*2 + x2[i]*3 + x3[i]*5)/10;
        printf("%.1lf\n", media[i]);
    }
 
    return 0;
}
#include <stdio.h>

int main() {

    int n, x[10000], y[10000], soma[10000];
    int aux;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d%d", &x[i], &y[i]);
        if(x[i]>y[i]){
            aux =x[i];
            x[i] = y[i];
            y[i] = aux;
        }
        for(int j=x[i]+1; j<y[i]; j++){
            if (j%2==1 || j%2==-1) soma[i]+=j;
        }
        printf("%d\n", soma[i]);
    }

    return 0;
}

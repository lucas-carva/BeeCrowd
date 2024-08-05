#include <stdio.h>
 
int main() {
 
    int x, y, m;
    int xi[m], yi[m];

    while(scanf("%d%d%d",&x, &y, &m) != EOF){
        for (int i=1; i<=m; i++){
            scanf("%d%d", &xi[i], &yi[i]);
            if(xi[i] > x || yi[i] >y) printf("Nao\n");
            else printf("Sim\n");
        }
    }
    return 0;
}
#include <stdio.h>

int main() {

    int n, x[10000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
        if(x[i]==0) printf("NULL\n");
        else{
            if(x[i]%2==0)printf("EVEN ");
            else printf("ODD ");
            if(x[i]>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
    }

    return 0;
}

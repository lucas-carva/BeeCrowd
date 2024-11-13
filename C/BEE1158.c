
#include <stdio.h>
 
int main() {
    
    int n, x, y;
    int impares=0;
    int cont = 0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        
        for(int j=0; ;j++){
            if(x%2==1 || x%2==-1){
                impares +=x;
                cont++;
            }
            x++;
            if(cont==y) break;
        }
        
        printf("%d\n", impares);
        impares = 0;
        cont =0;
        
    }
    
    return 0;
}
#include <stdio.h>
 
int main() {
 
    int n;
    int tentativas;
    int divisivel = 0;
    
    scanf("%d", &tentativas);
    
    for(int i=0; i<tentativas; i++){
        
        scanf("%d", &n);
        
            for(int j=1; j<n+1; j++){
                if(n%j==0) divisivel++;
            }
        
        if(divisivel==2 || n==1) printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n", n);
        
        divisivel = 0;
        
    }
 
    return 0;
}
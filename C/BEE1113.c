#include <stdio.h>
 
int main() {
    
    int x, y;
    do{ 
        scanf("%d%d", &x, &y);
        if(y>x)printf("Crescente\n");
        else if(x>y)printf("Decrescente\n");
        
    }while (x-y!=0);
 
    return 0;
}
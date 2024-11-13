//tem como resolver sem ifs

#include <stdio.h>
 
int main() {
 
    int T;
    int N[1000];
    int x=0;
    
    scanf("%d", &T);
    
    for(int i=0; i<1000; i++){
        
        printf("N[%d] = %d\n", i, x);
        
        if(x<T) x++;
        if(x==T) x=0;
    }
 
    return 0;
}
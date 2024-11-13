#include <stdio.h>
 
int main() {
 
    int x, y;
    int n = 1;
    
    scanf("%d%d", &x, &y);
    
    while(n<=y){
        for(int i=0;i<x; i++){
            printf("%d", n);
            if(i!=x-1)printf(" ");
            n++;
        }
        printf("\n");
    }
 
    return 0;
}
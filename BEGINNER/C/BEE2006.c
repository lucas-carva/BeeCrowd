#include <stdio.h>

int main(){
    
    int a, i, v[5], x = 0;
    scanf("%d", &a);
    
    for(i = 0; i < 5; i++){
        scanf("%d", &v[i]);
        if(v[i] == a) x++;
    }
    
    printf("%d\n", x);
    
}
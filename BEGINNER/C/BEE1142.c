#include <stdio.h>
 
int main() {
 
    int n;
    int output=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            output++;
            printf("%d ", output);
        }
        printf("PUM\n");
        output++;
    }
 
    return 0;
}
#include <stdio.h>

int main() {

    int a, b;
    a= 1;
    b = 7;
    for(int j=0; ;j++){
        for (int i=0; i<3 ;i++){
            printf("I=%d J=%d\n",a, b);
            b--;
        }
        a+=2;
        b+=5;
        if(a>9) break;
    }

    return 0;
}

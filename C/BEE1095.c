#include <stdio.h>

int main() {

    int a, b;
    a =1;
    b=60;
    for (int i=0; ;i++){
        printf("I=%d J=%d\n",a, b);
        a +=3;
        b -=5;
        if(b<0)break;
    }

    return 0;
}

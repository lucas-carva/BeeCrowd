#include <stdio.h>
 
int main() {
 
    int xi = 0, d = 0, yi =0, cont=0;
    
    while(xi<2){
        
            if(d>8){
                d = 0;
                xi++;
                yi++;
            }
            for(int j=1; j<4;j++){
                if (d==0) printf("I=%d J=%d\n", xi, j + yi);
                else  printf("I=%d.%d J=%d.%d\n", xi, d, j + yi, d);
            }
        
        d+=2;
    }
 
    return 0;
}
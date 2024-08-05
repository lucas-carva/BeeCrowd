#include <stdio.h>
#include <math.h>
 
int main() {
 
    int T;
    int pa, pb;//population a and b
    double ca, cb; //population growth a and b
    int anos = 0;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &ca, &cb);
        
        while(pa<=pb){
            pa+=(int)(pa*(ca/100));
            pb+=(int)(pb*(cb/100));
            anos++;
            
            //printf("Ano %d -> pop. de %d pessoas\n", anos, pa);
        }
        
        if(anos>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
        anos = 0;
    }
 
    return 0;
}
#include <stdio.h>
 
int main() {
 
   double nota, media=0;
   int cont = 0;     
   
   for(int i=0; ; i++){
       scanf("%lf", &nota);
       if(nota<0 || nota>10) printf("nota invalida\n");
       else{
           media +=nota;
           cont++;
       }
       if(cont==2){
           printf("media = %.2lf\n", media/2);
           break;
       }
   }
 
    return 0;
}
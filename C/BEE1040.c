#include <stdio.h>
 
int main() {
 
   double n1, n2, n3, n4, media, ne;
   
   scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
   
   media = (n1*2+n2*3+n3*4+n4)/10;
   
   if(media >=7){
       printf("Media: %.1lf\n", media);
       printf("Aluno aprovado.\n");
   }
   else if (media>=5.0 && media <7){
       printf("Media: %.1lf\n", media);
       printf("Aluno em exame.\n");
       scanf("%lf", &ne);
       printf("Nota do exame: %.1lf\n", ne);
       ne = (media+ne)/2;
           if(ne>=5){
               printf("Aluno aprovado.\n");
               printf("Media final: %.1lf\n", ne);
           }
           else{
               printf("Aluno reprovado.\n");
               printf("Media final: %.1lf\n", ne);
           }
   }
   else {
       printf("Media: %.1lf\n", media);
       printf("Aluno reprovado.\n");
         
     }   
    return 0;
}
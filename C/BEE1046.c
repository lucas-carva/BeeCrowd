#include <stdio.h>
 
int main() {
 
   int h1, h2, horas;
   
   scanf("%d%d", &h1, &h2);
   
   if (h1==h2){
        horas = 24; 
   } 
   else if (h1<h2){
        horas = h2 - h1;
   }
   else{
        horas = (24-h1) + h2;
   }
   
   printf("O JOGO DUROU %d HORA(S)\n", horas);
 
    return 0;
}
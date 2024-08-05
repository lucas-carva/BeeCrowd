#include <stdio.h>
 
int main() {
 
  double soma = 1;
  double x=3;
  double y=2;
  
  while(x<40){
      soma+= x/y;
      x+=2;
      y*=2;
  }
  
  printf("%.2lf\n", soma); 
  return 0;
}
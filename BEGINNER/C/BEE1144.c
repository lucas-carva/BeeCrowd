#include <stdio.h>

int main() {
 
   int n;
   int output=1;
   
   scanf("%d", &n);
   
   for(int i=0; i<n; i++){
       printf("%d %d %d\n",output, output*output, output*output*output);
       printf("%d %d %d\n",output, (output*output)+1, (output*output*output)+1);
       output++;
   }
    return 0;
}
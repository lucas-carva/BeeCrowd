#include <stdio.h>
#include <math.h>

int main() {

    double a=0, b;

    for(int j=0; ;j++){
        b=1+a;

        for(int i=0; i<3; i++){
            if((a - (int)a) == 0.0) printf("I=%d J=%d\n", (int)a, (int)b);
            else printf("I=%.1lf J=%.1lf\n", a, b);
            b +=1;

            /*if(b == 5)printf("%.20lf\n", a); //TESTANDO VALORES DE A
            if(b == 4.2)printf("%.20lf\n", a); //DEVIDO A SOMA IMPRECISA, NA 
            if(b == 4.4)printf("%.20lf\n", a); // DECIMA REPETICAO O A NAO
            if(b == 4.6)printf("%.20lf\n", a); //VALIA 2.0, MAS SIM
            if(b == 4.8)printf("%.20lf\n", a);*/ //1.999999
        }

        a+= 0.2;
        if(a>=2)break;
    }


    return 0;
}

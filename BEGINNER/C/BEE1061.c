   #include <stdio.h>

int main() {
    int dia[2], hora[2], min[2], sec[2];
    int W, X, Y, Z;
    
    for(int i = 0; i < 2; i++) {
        scanf(" Dia %d", &dia[i]);
        scanf("%d : %d : %d", &hora[i], &min[i], &sec[i]);
    }
    
    int total1 = (dia [0]*60*60*24+hora[0]*60*60+min[0]*60+sec[0]);
    int total2 = (dia [1]*60*60*24+hora[1]*60*60+min[1]*60+sec[1]);
    int d = total2 - total1;
    
    W=d/86400;
    d%=86400;
    X = d/3600;
    d%=3600;
    Y= d/60;
    d%=60;
    Z = d;
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", W, X, Y, Z); 
 
    return 0;
}
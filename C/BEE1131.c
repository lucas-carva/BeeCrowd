#include <stdio.h>
 
int main() {
 
    int golsg = 0, golsi=0, e=0, pj=0, decisao=0;
    int inter =0, gremio=0;
    
    do{
        scanf("%d%d", &golsi, &golsg);
        pj++;
        if(golsi>golsg) inter++;
        else if(golsg>golsi) gremio++;
        else e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &decisao);
    }while(decisao==1);
    
    printf("%d grenais\n", pj);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gremio, e);
    
    if(inter>gremio) printf("Inter venceu mais\n");
    else if(gremio>inter) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
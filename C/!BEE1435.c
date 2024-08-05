#include <stdio.h>

int main() {
    int M[100][100];
    int n;
    int x;
    int cont;

    scanf("%d", &n);
    while (n != 0) {
        int mediana = n / 2;
        cont = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == 1 || j ==1 || j == n) {
                    x = 1;
                } else if (i <= mediana + 1) {
                    x = i;
                } else if (i > (mediana + 1)) {
                    if(j==1) {
                        cont++;
                    }
                    x = i - cont;
                }

                M[i][j] = x;

                printf("%d", M[i][j]);
                if (j != n) printf(" ");
            }
            printf("\n");
        }

        scanf("%d", &n);
    }
    return 0;
}

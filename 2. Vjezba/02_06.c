#include<stdio.h>

int funkcija_nacrtaj (m,n,i,j)
{
    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){
           printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int m, n, i, j;
    printf("Upisite m i n: \n");
    scanf("%d %d", &m, &n);
    funkcija_nacrtaj(m,n,i,j);

    return 0;
}

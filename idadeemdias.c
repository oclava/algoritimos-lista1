#include <stdio.h>

int main (){
    int N, meses, anos, dias;
    scanf("%d", &N);

    if (N>=365)
    {
        anos = N/365;
        N = N%365;
    }
    if (N>=30)
    {
        meses = N/30;
        N = N%30;
    }
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", N);
    return 0;
}
#include <stdio.h>

int main (){
    int N, horas = 0, minutos = 0, segundos = 0;
    scanf("%d", &N);
    
    if (N>=3600)
    {
        horas = N/3600;
        N = N%3600;
    }
    if (N>=60)
    {
        minutos = N/60;
        N = N%60;
    }
    printf("%d:%d:%d\n", horas, minutos, N);
    
    return 0;
}
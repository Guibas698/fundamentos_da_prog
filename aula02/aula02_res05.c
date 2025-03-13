#include <stdio.h>

int main(){
    int segundos;
    scanf("%d", &segundos);
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = (segundos % 3600) % 60;
    printf("%d:%d:%d\n", horas, minutos, seg);
    


    return 0;
}
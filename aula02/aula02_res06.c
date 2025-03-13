#include <stdio.h>

int main(){
    int celcius;
    scanf("%d", &celcius);
    double fahrenheit = celcius * 1.8 + 32;
    printf("%.6lf\n", fahrenheit);


    return 0;
}
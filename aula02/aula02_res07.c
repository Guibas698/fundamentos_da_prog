#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float semiP = (a + b + c) / 2;
    float area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
    printf("%.2f\n", area);



    return 0;
}
#include <stdio.h>

int main() {
    int q1, q2, q3;
    float v1, v2, v3;
    float dinheiro;

    
    scanf("%d", &q1);
    scanf("%d", &q2);
    scanf("%d", &q3);
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    scanf("%f", &dinheiro);

    
    float total = q1 * v1 + q2 * v2 + q3 * v3;
    float troco = dinheiro - total;

    
    printf("%.2f\n", troco);

    return 0;
}

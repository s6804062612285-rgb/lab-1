#include <stdio.h>

int main() {
    float p1, p2, p3, total;

    scanf("%f", &p1);
    total = p1 * 0.95;
    printf("%.2f\n", total);

    scanf("%f", &p2);
    total = (p1 + p2) * 0.85;
    printf("%.2f\n", total);

    scanf("%f", &p3);
    total = (p1 + p2 + p3) * 0.70;
    printf("%.2f\n", total);

    return 0;
}
#include <stdio.h>

int main() {
    float p1, p2, p3, price, final_total;

    scanf("%f", &p1);
    price = p1 * 0.95;
    final_total = price * 1.07;
    printf("%.2f\n", final_total);

    scanf("%f", &p2);
    price = (p1 + p2) * 0.85;
    final_total = price * 1.07;
    printf("%.2f\n", final_total);

    scanf("%f", &p3);
    price = (p1 + p2 + p3) * 0.70;
    final_total = price * 1.07;
    printf("%.2f\n", final_total);

    return 0;
}
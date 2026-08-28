/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main(void)
{
    double cost, selling;

    if (scanf("%lf %lf", &cost, &selling) != 2 || cost <= 0.0 || selling < 0.0) {
        return 1;
    }
    if (selling > cost) {
        printf("Profit %.2f%%\n", (selling - cost) * 100.0 / cost);
    } else if (selling < cost) {
        printf("Loss %.2f%%\n", (cost - selling) * 100.0 / cost);
    } else {
        puts("No Profit No Loss");
    }
    return 0;
}

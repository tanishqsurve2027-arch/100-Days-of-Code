/* Write a program to calculate library fine based on late days as follows: First 5 days late: ₹2/day; Next 5 days late: ₹4/day; Next 20 days late: ₹6/day; More than 30 days: Membership Cancelled. */
#include <stdio.h>

int main(void)
{
    int late_days, fine;

    if (scanf("%d", &late_days) != 1 || late_days < 0) {
        return 1;
    }
    if (late_days > 30) {
        puts("Membership Cancelled");
    } else {
        fine = late_days <= 5 ? late_days * 2 : 10;
        if (late_days > 5) {
            fine += (late_days - 5 < 5 ? late_days - 5 : 5) * 4;
        }
        if (late_days > 10) {
            fine += (late_days - 10) * 6;
        }
        printf("Fine Rs. %d\n", fine);
    }
    return 0;
}

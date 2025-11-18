#include <stdio.h>
int main() {
    int years;
    double months, weeks, days, hours, minutes, seconds;

    printf("Enter your age in years: ");
    scanf("%d", &years);

    months = years * 12;
    weeks = years * 52;
    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf("\nYour Age Breakdown:\n");
    printf("Years   : %d\n", years);
    printf("Months  : %.0f\n", months);
    printf("Weeks   : %.0f\n", weeks);
    printf("Days    : %.0f\n", days);
    printf("Hours   : %.0f\n", hours);
    printf("Minutes : %.0f\n", minutes);
    printf("Seconds : %.0f\n", seconds);

    return 0;
}


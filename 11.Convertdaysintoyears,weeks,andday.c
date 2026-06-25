// Convert days into years, weeks, and days
#include <stdio.h>

int main() {
    int days, years, weeks, rem_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    rem_days = days % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", rem_days);

    return 0;
}

/*output
Enter number of days: 400
Years = 1
Weeks = 5
Days = 0*/

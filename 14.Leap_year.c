//Leap_year
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);

    return 0;
}
/*output
Enter a year: 2015
2015 is not a Leap Year*/
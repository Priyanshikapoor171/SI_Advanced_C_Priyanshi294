//Remove_all_characters_in_a_string_except_alphabets
#include <stdio.h>
int main()
{
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("String after removing non-alphabet characters: %s", result);
    return 0;
}
/*output
Enter a string: priya_nshi07-04-2006
String after removing non-alphabet characters: priyanshi*/

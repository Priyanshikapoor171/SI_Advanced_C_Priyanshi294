//Find_the_frequency_of_characters_in_a_string.
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        if(str[i] == '*')
            continue;
for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '*';
            }
        }
        if(str[i] != '\n')
            printf("%c = %d\n", str[i], count);
    }
   return 0;
}
/*output
Enter a string: hello1223
h = 1
e = 1
l = 2
o = 1
1 = 1
2 = 2
3 = 1*/
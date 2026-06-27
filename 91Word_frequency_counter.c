//Word_frequency_counter
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[20][20];
    int count[20] = {0};
    int i, j, n = 0;
    printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
    char *token = strtok(str, " ");
    while(token != NULL)
    {
        strcpy(word[n], token);
        count[n] = 1;
        for(i = 0; i < n; i++)
        {
            if(strcmp(word[i], token) == 0)
            {
                count[i]++;
                count[n] = 0;
                break;
            }
        }
        if(count[n] != 0)
            n++;
        token = strtok(NULL, " ");
    }
    for(i = 0; i < n; i++)
    {
        printf("%s -> %d\n", word[i], count[i]);
    }
    return 0;
}

/*OUTPUT
Enter a sentence: HEY, MY NAME IS PRIYANSHI KAPOOR
HEY, -> 1
MY -> 1
NAME -> 1
IS -> 1
PRIYANSHI -> 1
KAPOOR
 -> 1*/
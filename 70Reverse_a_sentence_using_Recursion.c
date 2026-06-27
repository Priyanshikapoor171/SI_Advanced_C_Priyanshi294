// Reverse_a_sentence_using_Recursion
#include <stdio.h>
void reverse()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        reverse();      // Recursive call
        printf("%c", ch);
    }
}
int main()
{
    printf("Enter a sentence: ");
    reverse();
    return 0;
}

/*output
Enter a sentence: priyanshi kapoor
roopak ihsnayirp*/
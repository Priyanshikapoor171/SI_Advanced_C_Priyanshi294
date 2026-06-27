//The_celebrity_problem
#include <stdio.h>
int main()
{
    int n, a[10][10];
    int i, j, celeb = -1;
    printf("Enter number of people: ");
    scanf("%d", &n);
    printf("Enter relationship matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        int knows = 0;
        int known = 0;
        for(j = 0; j < n; j++)
        {
            if(a[i][j] == 1)
                knows++;
            if(a[j][i] == 1)
                known++;
        }

        if(knows == 0 && known == n - 1)
        {
            celeb = i;
            break;
        }
    }
    if(celeb == -1)
        printf("No Celebrity");
    else
        printf("Celebrity is Person %d", celeb);
    return 0;
}

/*output
Enter number of people: 4
Enter relationship matrix:
0 1 1 0
0 0 1 0
0 0 0 0
0 1 1 0
Celebrity is Person 2*/
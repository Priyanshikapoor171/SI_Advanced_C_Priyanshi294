// SEARCH IN SORTED ARRAY
#include <stdio.h>
int main()
{
    int a[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 int target = 5;
    int i = 0, j = 2;
while(i < 3 && j >= 0) {
        if(a[i][j] == target)
        {
            printf("Found at (%d,%d)", i, j);
            return 0;
        }
        else if(a[i][j] > target)
            j--;
        else
            i++;
    }

    printf("Not Found");

    return 0;
}


/*OUTPUT
Found at (1,1)*/


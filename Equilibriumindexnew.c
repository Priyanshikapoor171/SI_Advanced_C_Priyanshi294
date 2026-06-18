
//EQUILIBRIUM INDEX
#include <stdio.h>
int main()
{
    int arr[] = {4,5,6,7,15,0};
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }
        for(int j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }
        if(leftSum == rightSum)
        {
            printf("Equilibrium Index = %d", i);
            return 0;
        }
    }

    printf("No Equilibrium Index Found");

    return 0;
}

/*OUTPUT
Equilibrium Index = 3*/

//Trapping_rainwater_problem
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of buildings: ");
    scanf("%d", &n);
    int height[n];
    int leftMax[n];
    int rightMax[n];
    printf("Enter heights:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &height[i]);
    leftMax[0] = height[0];
    for(i = 1; i < n; i++)
    {
        if(height[i] > leftMax[i - 1])
            leftMax[i] = height[i];
        else
            leftMax[i] = leftMax[i - 1];
    }
    rightMax[n - 1] = height[n - 1];
    for(i = n - 2; i >= 0; i--)
    {
        if(height[i] > rightMax[i + 1])
            rightMax[i] = height[i];
        else
            rightMax[i] = rightMax[i + 1];
    }
    int water = 0;
    for(i = 0; i < n; i++)
    {
        if(leftMax[i] < rightMax[i])
            water += leftMax[i] - height[i];
        else
            water += rightMax[i] - height[i];
    }
    printf("Total Trapped Water = %d", water);
    return 0;
}


/*output
Enter number of buildings: 5
Enter heights:
3 0 2 0 4
Total Trapped Water = 7*/

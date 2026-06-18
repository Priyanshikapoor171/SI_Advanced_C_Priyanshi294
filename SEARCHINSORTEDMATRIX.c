// SEARCH IN SORTED MATRIX
  #include <stdio.h>

int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int target = 39;
    int row = 0;
    int col = 3;

    while (row < 4 && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            printf("Element found at (%d, %d)", row, col);
            return 0;
        }
        else if (matrix[row][col] > target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    printf("Element not found");

    return 0;
}


/*OUTPUT
Element found at (3, 2)*/


// ROW WITH MAXIMUM 1s
  #include <stdio.h>

int main()
{
    int mat[4][5] = {
        {0, 0, 1, 1, 1},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1}
    };

    int rows = 4, cols = 5;
    int maxRow = 0;
    int maxOnes = 0;

    for(int i = 0; i < rows; i++)
    {
        int count = 0;

        for(int j = 0; j < cols; j++)
        {
            if(mat[i][j] == 1)
                count++;
        }

        if(count > maxOnes)
        {
            maxOnes = count;
            maxRow = i;
        }
    }

    printf("Row with maximum 1s = %d\n", maxRow + 1);
    printf("Total 1s = %d\n", maxOnes);

    return 0;
}

OUTPUT
/*Row with maximum 1s = 4
Total 1s = 5*/

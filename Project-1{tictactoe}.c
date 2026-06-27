//ROLLNO-2502901520294 
 // Project-1{tictactoe}
#include <stdio.h>
char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};
void displayBoard()
{
    int i, j;
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);
            if(j < 2)
                printf("|");
        }
        if(i < 2)
            printf("\n-----------\n");
    }
    printf("\n");
}
int checkWinner()
{
    int i;
    for(i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;
    }
    for(i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;
    }
    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;
    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}
int main()
{
    int choice, row, col, turn;
    char mark;
    for(turn = 0; turn < 9; turn++)
    {
        displayBoard();
        if(turn % 2 == 0)
        {
            printf("\nPlayer X, enter position (1-9): ");
            scanf("%d", &choice);
            mark = 'X';
        }
        else
        {
            printf("\nPlayer O, enter position (1-9): ");
            scanf("%d",&choice);
            mark = 'O';
        }
        row = (choice - 1) / 3;
        col = (choice - 1) % 3;
        if(board[row][col] != 'X' &&
           board[row][col] != 'O')
        {
            board[row][col] = mark;
        }
        else
        {
            printf("Position already taken!\n");
            turn--;
            continue;
        }
        if(checkWinner())
        {
            displayBoard();
            printf("\nPlayer %c Wins!\n", mark);
            return 0;
        }
    }
    displayBoard();
    printf("\nMatch Draw!\n");
    return 0;
}

/*output
1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

Player X, enter position (1-9): 9

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | X 

Player O, enter position (1-9): 5

 1 | 2 | 3 
-----------
 4 | O | 6 
-----------
 7 | 8 | X 

Player X, enter position (1-9): 1

 X | 2 | 3 
-----------
 4 | O | 6 
-----------
 7 | 8 | X 

Player O, enter position (1-9): 
4

 X | 2 | 3 
-----------
 O | O | 6 
-----------
 7 | 8 | X 

Player X, enter position (1-9): 6

 X | 2 | 3 
-----------
 O | O | X 
-----------
 7 | 8 | X 

Player O, enter position (1-9): 
3

 X | 2 | O 
-----------
 O | O | X 
-----------
 7 | 8 | X 

Player X, enter position (1-9): 7

 X | 2 | O 
-----------
 O | O | X 
-----------
 X | 8 | X 

Player O, enter position (1-9): 2

 X | O | O 
-----------
 O | O | X 
-----------
 X | 8 | X 

Player X, enter position (1-9): 8

 X | O | O 
-----------
 O | O | X 
-----------
 X | X | X 

Player X Wins!*/


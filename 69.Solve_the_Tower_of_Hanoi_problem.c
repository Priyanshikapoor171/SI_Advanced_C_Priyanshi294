// Solve_the_Tower_of_Hanoi_problem
#include <stdio.h>
void tower(int n, char source, char helper, char destination)
{
    if(n == 1)
    {
        printf("Move Disk 1 from %c to %c\n", source, destination);
        return;
    }
    tower(n-1, source, destination, helper);
    printf("Move Disk %d from %c to %c\n", n, source, destination);
    tower(n-1, helper, source, destination);
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
/*output
Enter number of disks: 3
Move Disk 1 from A to C
Move Disk 2 from A to B
Move Disk 1 from C to B
Move Disk 3 from A to C
Move Disk 1 from B to A
Move Disk 2 from B to C
Move Disk 1 from A to C*/

// WAP TO REVERSESE A GIVE NUMBER 
#include <stdio.h>

int main() {
    int a=23456788,temp,rem,rev=0;
    for(temp=a;temp!=0;temp=temp/10)
{
    rem=temp%10;
    rev=rev*10+rem;
    printf("The reverse of the no is %d",rev);
}
    return 0;
}
 output 
The reverse of the no is 88765432
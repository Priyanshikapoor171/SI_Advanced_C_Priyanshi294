// palindrome
#include <stdio.h>

int main() {
    int a=121,temp,rem,rev=0;
    for(temp=a;temp!=0;temp=temp/10)
{
    rem=temp%10;
    rev=rev*10+rem;
}
    if(rev==a)
    {
        printf("the no %d is palindrome",a);
    }

    return 0;
} 
  
output the no 121 is palindrome

 
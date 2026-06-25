// armstrong
#include <stdio.h>
#include<math.h>

int main() {
    int n=153,count=0,rem,i, power,sum;
    
    for(int temp=n;temp>0;temp=temp/10)
{
    count++;
}
    printf("\n%d",count);

for (int temp1=n;temp1>0;temp1=temp1/10)
{
    power=1;
    rem=temp1%10;
    for(i=1;i<=count;i++)
    {
    power*=rem;
    }
    sum=sum+power;
    
} 
  if(sum==n)
  {
      printf("number %d is an amstrong no",n);
  }
return 0;
}





output
3number 153 is an amstrong no
//fibonacci series 
#include <stdio.h>

int main()
{
  int num1=0,num2=1, num3;
  for (int i =2;i<61;i++)
  {
      num3=num1+num2;
     
      num1=num2;
      num2=num3;
      if(i==60)
      printf("\n%d",num3);
  }

    return 0;
}
/*output
1820529360*/
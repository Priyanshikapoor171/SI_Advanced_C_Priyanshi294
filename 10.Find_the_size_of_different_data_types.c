// Find_the_size_of_different_data_types_(int,char,float,double)_using_size_of
#include <stdio.h>
int main(){
printf("Size of int = %d bytes\n", (int)sizeof(int));
printf("Size of char = %d bytes\n", (int)sizeof(char));
printf("Size of float = %d bytes\n", (int)sizeof(float));
printf("Size of double = %d bytes\n", (int)sizeof(double));
return 0;
}

/*output
Size of int = 4 bytes
Size of char = 1 bytes
Size of float = 4 bytes
Size of double = 8 bytes*/
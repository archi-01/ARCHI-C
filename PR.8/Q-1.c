#include <stdio.h>
#include <string.h>
 
int main()
{
  char Str[100];
  int *ptr;
  int len;
 
  printf("Please Enter any String :");
  gets (Str);
 
  len = strlen(Str);
  ptr=&len;
  printf("Length = %d\n", *ptr);
 

}



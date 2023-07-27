# include <stdio.h>
 

void reverse(char *str)
{
  if (*str)
  {
    reverse(str + 1);
    printf("%c", *str);
  }
}
 
// Driver code
int main()
{
  char a[] = "good or bad";
  reverse(a);
  return 0;
}
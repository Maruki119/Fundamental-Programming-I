#include <stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  switch (a){
  case'G':
    printf("C");
    break;
  case'C':
    printf("G");
    break;
  case'A':
    printf("U");
    break;
  case'T':
    printf("A");
    break;
  }
  return 0;
}

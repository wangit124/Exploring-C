#include <stdio.h>

int main ()
{
  int n=0;
  printf("Enter an integer: ");
  scanf("%d",&n);
  int digits=1;
  if (n<0) {
    n=n*(-1);
  }
  while (n%10!=n) {
    printf("Digits (%d): %d\n",digits,n%10);
    n/=10;
    digits++;
  }
  if (n%10==n) {
    printf("Digits (%d): %d\n",digits,n);
  }
  return 0;
}

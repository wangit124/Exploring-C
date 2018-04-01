#include <stdio.h>

int main()
{
  int inputOne, inputTwo, inputThree=0;
  printf("Enter integers a, b, c: ");
  scanf("%d %d %d",&inputOne,&inputTwo,&inputThree);
  printf("       !a || !b++ && c: ");
  
  if ((!inputOne)!=0||(!inputTwo)!=0)
  { 
    if (inputThree!=0)
    {
      printf("True\n");
    }
    else 
    {
      printf("False\n");
    }
  }
  else 
  {
    printf("False\n");
  }
  inputTwo++;
  printf("(a-1 || b/2) && (c*=2): ");
  inputThree*=2;
  if ((inputOne-1!=0||inputTwo/2!=0))
  {  
     if (inputThree!=0)
     {
        printf("True\n");
     }
     else 
     { 
        printf("False\n");
     }
  }
  else 
  {
     printf("False\n");
  }
  inputTwo--;
  inputThree+=2;
  printf("(a-- || --b) && (c+=2): ");
  if (inputOne!=0||inputTwo!=0) 
  {
    if (inputThree!=0)
    {
      printf("True\n");
    }
    else 
    {
      printf("False\n");
    }
  }
  else
  {
    printf("False\n");
  }
  inputOne--;
  inputThree--;
  printf("      a || !(b && --c): ");
  if (inputOne!=0)
  {  
    printf("True\n");
  }
  else
  {
    if (inputTwo!=0&&inputThree!=0) 
    {
      printf("False\n");
    }
    else 
    {
      printf("True\n");
    }
  }
}
















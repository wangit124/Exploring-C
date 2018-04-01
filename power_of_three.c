#include <stdio.h>
#define BASE 3

int main() 
{
   int num,count=0;

   printf("Enter a positive integer: ");
   scanf("%d",&num);
   
   if (num<=0) 
   {
      printf("Error: invalid integer entered!\n");
      return 0;
   }
   if (num%BASE==1)
   {
      printf("%d is a power of %d, exponent = 0\n",num,BASE);
      return 0;
   } 
   if (num%BASE!=0) 
   {
      printf("%d is not a power of %d!\n",num,BASE);
      return 0;
   }
   int temp=num;
   while (temp>BASE) 
   {
      temp/=BASE;
      count++;
      if (temp%BASE!=0)
      {
         printf("%d is not a power of %d!\n",num,BASE);
         return 0;
      }
   }
   if (count==1||count==0||temp==3)
   {  
      count++;
      printf("%d is a power of %d, exponent = %d\n",num,BASE,count);
      return 0;
   }
   else {
      printf("%d is a power of %d, exponent = %d\n",num,BASE,count);
      return 0;
   }  
   return 0;
}

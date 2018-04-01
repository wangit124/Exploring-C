#include <stdio.h>

int main()
{
   int number, sum, choice, total_numbers;
   
   printf("Welcome to the integer sum program!\n\n");
   
   choice = 0; total_numbers = 0; sum = 0;
   while (choice!=3)
   {
      printf("So far, you have entered %d numbers. You may:\n",total_numbers);
      printf("1. Enter a new integer\n");
      printf("2. Display the current sum\n");
      printf("3. Exit\n");
      printf("Please enter your choice: ");
      scanf("%d",&choice);
      if (choice==1) 
      {
          printf("Enter the new integer: ");
          scanf("%d",&number);
          sum+=number;
          total_numbers++;
      }
      if (choice==2) 
      {
          printf("The current sum is: %d\n",sum);
      }
   }
   return 0;
} 
          

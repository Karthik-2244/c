/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i , n , j;
    printf("enter a number :");
    scanf("%d" , &n);
    for(j=1;j<=n;j++)
    {
      for(i=1;i<=j;i++) 
    {
        printf("*");
    }
    printf("\n");
    }
}
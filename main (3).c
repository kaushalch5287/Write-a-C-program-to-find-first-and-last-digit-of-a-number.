/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int n, firstdigit,lastdigit;
 printf("Enter any number: ");
 scanf("%d", &n);
lastdigit=n%10;
while(n>=10)
{
n=n/10;
}
firstdigit = n ;
 printf("First Digit = %d and Last digit = %d",firstdigit, lastdigit);
 return 0;
}
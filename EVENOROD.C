
#include<stdio.h>
#inlcude<conio.h>
void main(){
int num;
printf("Enter the number:");
scanf("%d", &num);
if(num%2==0)
{
printf("it is even number");
}
else
{
printf("it is odd number");
}
getch();
}
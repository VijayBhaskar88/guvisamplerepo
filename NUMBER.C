#include<stdio.h>
#include<conio.h>
void main(){
int i;
clrscr();
printf("Enter the number:");
scanf("%d", &i);
if(i>0){
printf("It is postive number");
}
else if(i<0){
printf("It is negative number");
}
else
{
printf("It is zero");
}
getch();
}
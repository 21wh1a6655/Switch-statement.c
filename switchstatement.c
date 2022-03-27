#include<stdio.h>
int main()
{
int n;
printf("enter n: ");
scanf("%d",&n);
switch(n)
{
case 1:
printf("pizza, Rs 239");
break;
case 2:
printf("burger, Rs 129");
break;
case 3:
printf("pasta,Rs 179");
break;
case 4:
printf("freench fries, Rs 99");
break;
default:
printf("sandwich ,Rs 149");
}
}

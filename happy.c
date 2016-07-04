#include<stdio.h>
void main()
{
int sum,n,a;
scanf("%d",&n);
do{
sum=0;
while(n>0)
{
a=n%10;
n=n/10;
sum=sum+(a*a);
}
n=sum;
}
while(!(n<=0&&n>=9));
if(n==1)
printf("Happy number");
else
printf("Not a happy number");
getch();
}

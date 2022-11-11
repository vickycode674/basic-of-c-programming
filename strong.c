//A strong number is a number in which the sum of the factorial of the digits is equal to the number itself.
//strong number

#include <stdio.h>

int main()
{
int num,temp,fact=1,sum=0,remain,i;

printf("enter a number:");
scanf("%d",&num);

temp=num;

while(temp!=0)
{
remain=temp%10;

for(i=2;i<=remain;i++) //i=2 will be very much crucial because already so that factorial =1
{
fact=fact*i;
}
sum=sum+fact;
fact=1;

temp=temp/10;
}
printf("%d\n",sum);
 
if(sum==num)
{
printf("its an strong number ra mowa");
}

else
printf("NOT AN STRONG NUMBER RA");

    return 0;
}
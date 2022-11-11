#include <stdio.h>
#include <math.h>
int main()
{
//creation of amstrong number
int n,f,k,i=0,remain;
int sum=0;
scanf("%d",&n); //enter the follwoing number
k=n;
while(k!=0)
   {
     i++;
    k=k/10;
   }
f=n;
while(f!=0)
  {
   remain=f%10;
   sum=sum+pow(remain,i);
    f=f/10;
  } 
if(sum==n)
printf("amstr");

else
printf("none");
return 0;
}
//prime numbers between 1 to n number
#include<stdio.h>
int main()
{  
int i,j,n,flag=0;
    
printf("enter the value of n ");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
  for(j=0;j<=n;j++)
  {  
    if(i%j==0)
    {
       flag=flag+1;  
    }
    
 if(flag==2)
 printf("%d is prime",i);

 else
 printf("%d is not a prime number",i);

  }
}

}
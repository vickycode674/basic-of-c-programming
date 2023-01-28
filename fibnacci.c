#include <stdio.h>

void fib(); //two or more datatypes not possible in declaration ig

int main()
{
int a=0,b=1,c,n;
printf("enter the no of required fib series");
scanf("%d",&n);

printf("%d %d ",a,b);
fib(a,b,n-2);
return 0;
}

void fib(int a,int b,int n)
{int c;

if(n>0)//loop lapeta
{
c=a+b;
a=b;
b=c;

printf("%d ",c); //just single number enough bhai
fib(a,b,n-1);
}
}
/*
void fib(int a,int b,int n)
{int c;

if(n>0)//loop lapeta
{
c=a+b;
a=b;
b=a;

printf("%d %d",a,b);
return fib(a,b,n-1);
}

}*/
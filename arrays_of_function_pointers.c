#include <stdio.h>
int add(int,int);
int sub(int,int);

int main()
{
int x,y,r1,r2;
printf("enter x and y");
scanf("%d %d",&x,&y);

int (*ptr[2])(int a,int b);
ptr[0]=add;
ptr[1]=sub;

r1=(*ptr[0])(int a,int b);

printf("result of addition is %d",r1);

r2=(*ptr[1])(a,b);

printf("result of subtraction is:%d",r2);
return 0;

}

int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}

int sub(int a,int b)
{
int sub;
sub=a-b;
return sub;
}
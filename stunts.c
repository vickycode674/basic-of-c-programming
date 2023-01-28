#include<stdio.h>
#include<string.h>

/*using normal function method coorect only but
void recur();

int main()
{
int i,n=5;
for(i=0;i<n;i++)
recur();
return 0;
}

void recur()
{
printf("HELLO\n");
}*/

void printrecur(int);

int main()
{
int a=5;
printrecur(a);
return 0;
}

void printrecur(int a)
{
if(a==0)
{
return; //unless this conditons happend it will be infnite loop so be aware that at 0 it should exit loop bc
}
printf("hello\n");
printrecur(a-1);
}
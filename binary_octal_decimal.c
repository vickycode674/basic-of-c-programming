#include<stdio.h>
#include<math.h>

int convertbintodec(int a);

int main()
{
int a;
printf("enter the required binary to convert:");
scanf("%d",&a);

printf("%d",convertbintodec(a));

return 0;
}

int convertbintodec(int binary)
{
int decimal=0,i=0,oct=0;
while(binary!=0)
{
decimal+=(binary%10)*(pow(2,i)); //logic for converting the binary to decimal
i++;
binary=binary/10;
}

i=1;
while(decimal!=0)
{
oct+=(decimal%8)*(i); //logic for converting the dec to octal
i*=10;
decimal/=8;
}
return oct;
}
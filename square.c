#include<stdio.h>
#include<math.h>

int square(int a);

int main()
{
int a,b;
/*printf("enter the required number you want to square=");
scanf("%d",&a);*/
a=4;
//b=pow(a,2);
printf("square of number=%f",pow(a,2)); //while using pow inside be aware that we have to convert to double 
return 0;
}

int square(int a)
{
return a*a;
}


/*prining hello world 5 times*/ //using recurssion

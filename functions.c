 /*FUNCTIONS are used to make programme easier it breaks breaks into several parts and organize differently*/

#include <stdio.h>
int add(int,int);          //# declaring function

int main()
{
int a,b,sum=0;

printf("enter the value of a and b");      //this all scenes occure between main()
scanf("%d %d",&a,&b);

sum=add(a,b);            //actual parameter /argument
                         // #2 calling the function and giving signals to beagan
printf("%d",sum);
}


int add(int x,int y)     //formal parameter
{                     //#3 function defintion the logic build here and send back /return to dum 
 int res;
 res=x+y;
 return res;
} 
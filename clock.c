// DIGITAL CLOCK
#include <stdio.h>
#include <Stdlib.h>          //used for exit type functions
#include <windows.h>        //used for getting sleep() like functions
int main()
{
int h,m,s;
int d=1000; //used for sleep variable to slow down the output

printf("enter time:");

scanf("%d %d %d",&h,&m,&s);

if(h>24 || m>60 || s>60)  //final conditiona nd values for time
{
    printf("error");
    exit(0);
}
while(1) //f it condtion  true 
{
 s++;
 
 if(s>59)
  {
     m++;
     s=0;
  }               //main logic for (seconds,minutes,hours)

if(m>59)
{
  h++; //after hour increases automatically min will be
  m=0;
}
if(h>24)    //24 hours format
{
  h=0;
}
printf("clock: \n");
printf("%02d:%d:%d",h,m,s);       //02 is for secondnary digits
printf("\ndecember 2 , thursday");

Sleep(d);                           //slow down the out put by 1000 times
 
system("cls");      //refresh or clear screen for every second as it moves
}


}
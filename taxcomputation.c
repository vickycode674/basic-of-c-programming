#include<stdio.h>

/**tax computation***/
int taxinfo(int amount,int tax)
{
if(amount<100000)
{
tax=0;
printf("the tax to be paid for income of %d is=%d",amount,tax);
}

else if(amount<200000)
{
tax=(amount*10)/100;  //10% of the amount 
printf("the tax to be paid for income of %d is=%d",amount,tax);
}

else
{
tax=(amount*20)/100;
printf("the tax to be paid for income of %d is=%d",amount,tax);
}
return amount;

}

int main()
{
int amount,tax;

printf("enter the income=");
scanf("%d",&amount);

taxinfo(amount,tax); //functions bhai jan 
return 0;
}
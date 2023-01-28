//printing two fucntions at once
/*
#include<stdio.h>

void func();
void printbye();

int main()
{
func();
printbye();
return 0;
}

void func()
{
printf("hello mowa etla unanv");
}

void printbye()
{
printf("\ngood bye mowa");
}
*/

//Using if conditon for functions 

#include<stdio.h>

void wishinlang(char);

int main()
{
char ch;
printf("enter f for french and i for india\n");
scanf("%c",&ch);
wishinlang(ch);
return 0;
}

void wishinlang(char ch)
{
if(ch=='f')
printf("Bonjour madamey");

else if(ch=='i')
{
printf("namaste babu");
}
else
{
printf("please enter again");
}
}

/* PROPERTIES 
THE OCURRED VALUE IN PARAMETERS DO NOT CHANGE THE VALUE IN MAIN FUCNTION AS THEY REMAINTED INDEPENDENT
eg if the value in parameters is 118 and in argument value is 100 it will be printing 100 because main func value 
remains constant throught out irespective of formal parameters*/
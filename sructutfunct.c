#include <stdio.h>

struct student
{ int id;
  int marks;
};

int main()
{
struct student s1;

printf("enter id=");
scanf("%d",&s1.id);

printf("\n enter marks=");
scanf("%d",&s1.marks);

display(s1.id,s1.marks);
}

display(int a,int b)
{
printf("id=%d \n",a);
printf("marks=%d",b);
return ;
}
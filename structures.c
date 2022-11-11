//structures with help of arrays

/*arrays help the code to be easy able to ener large data easily*/
#include <stdio.h>

struct student
{ int id;
  char name[20];
  int marks;
};

int main()
{int i;
 struct student std[10];
  
 printf("enter student details:\n");
 for(i=1;i<=3;i++)
  {
  printf("student %d name=",i);
  scanf("%s",std[i].name);

  printf("student %d id=",i);
  scanf("%d",&std[i].id);

  printf("studnt %d marks/100=",i);
  scanf("%d",&std[i].marks);                  //here student[i] i is vip because it give us updation values
} 

for(i=1;i<=3;i++)
{
 printf("student name=%s \t",std[i].name);
 printf("student id=%d \t",std[i].id);
 printf("student marks=%d \t",std[i].marks);
}


 return 0;
}
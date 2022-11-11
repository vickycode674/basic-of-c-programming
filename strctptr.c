//MARKS CALCULATOR AND PERCENTAGE CALCULATOR
#include <stdio.h>

int main()
{ 
   int a,i,total=0;
  char name[20];
  float percent;
  int subj[i];
  
  printf("ENTER NAME OF STUDENT=");
  scanf("%s",name);
  
  printf("enter roll number of student =");
  scanf("%d",&a);
 
  
 for(i=1;i<6;i++)
 {
    printf("enter the marks of subject %d=",i);
    scanf("%d",&subj[i]);

total= subj[i]+total; 

}

printf("total marks=%d \n",total);


percent=((total*100)/500);

printf("perecentage of above marks=%f",percent);

if(percent>=90)
{
printf("your having first class passing");
}
else{
    printf("you better study hard broweey");
}

}

# include<stdio.h>
int main(void)
{
    float marks[5],total=0.0f,percentage;
    int i,failed=0;
    printf("enter  marks in five subjects (each out of 100):\n");
    for(i=0;i<5;i++)
{
    printf("subjects%d:",i+1);
    scanf("%f",&marks[i]);
    total=total+marks[i];
    if(marks[i]<35)
    failed=1;
}
percentage=total/5.0f;
printf("total=%.2f/5000\n",total);
printf("percentage=%.2f%\n",percentage);
if(failed==1)
   printf("Result=fail\n");
else if("Percentage>=75");
   printf("Result=distinction\n");
 else if(Percentage>=60) 
  printf("Result=first class\n");
 else if("percentage>=50");
   printf("Result=second class\n");
 else 
   printf("Result=pass class\n");
return 0;
}

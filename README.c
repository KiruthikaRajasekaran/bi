# bi
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num[0];
int m,i,j;
printf("\n enter the array size");
scanf("%d",&m);
printf("enter the number\n");
scanf("%d",&num);
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(num[i] < num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("in decending order\n");
for(i=0;i<n;++i);
{
printf("%d\n",num[i]);
}
getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the number");
	scanf("%d",&n);
	printf("list of element");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	 for(j=i+1;j<n;j++)
   printf("sorted list \n");
  {
	 printf("%d\n",a[i]);
	}
	printf("minimum number is:");
	printf("%d\n",a[0]);
	return 0;
  getch();
  }

  

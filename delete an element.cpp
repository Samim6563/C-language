//insert a element
#include<stdio.h>
int main()
{
	int array[100],i,n,pos;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
    }
    printf("Enter the location where you want delete the element\n");
    scanf("%d",&pos);
    if (pos>=n+1)
	{
		printf("Delettion is not posible");
	}
	else

	for(i=pos-1;i<n-1;i++)
{
	array[i]=array[i+1];
}
printf("Resultant array is\n");
for (i=0;i<n-1;i++)
printf("%d\n",array[i]);
return 0;
}

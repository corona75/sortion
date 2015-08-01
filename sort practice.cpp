#include<stdio.h>

void bubble_sort(int arr[],int size);
void insertion_sort(int arr[],int size);

void main() 
{
	int arr[] = { 3, 53, 34, 75, 85, 23, 2, 1 };
	int size=sizeof(arr)/sizeof(int);
	/*bubble_sort(arr,size);*/
	insertion_sort(arr,size);
}

void bubble_sort(int arr[],int size)
{
	int i,j,temp,k;

	
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(k=0;k<size;k++)
		printf("%3d",arr[k]);









}

void insertion_sort(int arr[],int size)
{
	int i,j,temp,k;
	for(i=1;i<size;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

for(k=0;k<size;k++)
printf("%3d",arr[k]);
			


}
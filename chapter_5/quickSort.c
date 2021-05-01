#include<stdio.h>
void swap(int* , int*);
void qsort(int*, int, int);
int partition(int* , int , int);
int main(void)
{
	int tab[7] = {10,80,30,90,40,50,70};
	int i;
	i = 0;
	qsort(tab,0,6);
	while(i < 7)
	{
		printf("%d--",tab[i]);
		i++;
	}
}
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*b = temp;
}
void qsort(int arr[], int low, int high)
{
	int p;
	if((high - low) > 0)
	{
		p = partition(arr,low,high);
		qsort(arr,low,p-1);
		qsort(arr,p+1,high);
	}
}
int	partition(int arr[],int low, int high)
{
	int i;
	int p;
	int firstHigh;

	p = high;
	firstHigh = low;
	for(i=low ; i < high ;i++)
	{
		if(arr[i] < arr[p])
		{
			swap(&arr[i],&arr[firstHigh]);
			firstHigh++;
		}
	}
	swap(&arr[p],&arr[firstHigh]);
	return(firstHigh);
}

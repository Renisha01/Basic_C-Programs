#include<stdio.h>

void shellSort(int array[], int size)
{
	for(int interval = size/2 ; interval > 0 ; interval /= 2)
	{
		for(int i=interval ; i<size; i++)
		{
			int temp = array[i];

			int j;
			for(j=i ; j>=interval && array[j-interval]>temp ; j -= interval)
			{
				array[j] = array[j-interval];
			}
			array[j] = temp;
		}
	}
}

void printArray(int array[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ", array[i]);
	}
}

void main()
{
	printf("Enter size of array : ");
	int size;
	scanf("%d", &size);
	int array[size];

	for(int i=0;i<size;i++)
	{
		printf("Enter %d element : " , (i+1));
		scanf("%d", &array[i]);
	}

	shellSort(array, size);
	printArray(array, size);
	return;
}
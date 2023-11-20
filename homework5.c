// Hello dear TA and welcome back to our C homeworks
// Today we will do inverse learning aka teaching our teachers
// I hope you enjoy the code, before looking through it, though, 
// make sure everything is sorted.. Wait, your numbers aren't sorted
// that's okay... This code will help

#include <stdio.h>
#define MAX_SIZE 256 //To ensure implementation only, I chose a maximum size 
		     //since we are focused on ability rather than performance
void swap(int *xp, int *yp) 
{
	//This is a simple swap function that changes the original values
	//using pointer variables
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[MAX_SIZE];
	int n = sizeof(arr)/sizeof(arr[0]);
	int x,s;
        printf("Enter the size of your array: max is 256\n--->");
	scanf("%d", &s);
	if(s >= 1 && s <= MAX_SIZE)// Here we check if our input is inputable :)
	{
	for(int i = 0; i < s; i++){//Basic input loop
	     scanf("%d", &x);
	     arr[i] = x;
	}
	selectionSort(arr, s);//Calling...
	printf("Sorted array: \n");
	printArray(arr, s);//Stil calling...
	return 0;
	}
	else{
	printf("Invalid size!");
	exit(-1);//In future versions, we could use the exit value to tell the user
		 //what was the reason
		 //
	}
}


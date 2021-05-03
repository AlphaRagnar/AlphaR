#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int arr[5],i,sum=0,sq=0,sum_sq=0;
	
	// For entering the elements
	for(i=0; i<5; i++) {
		printf(" Enter your elements[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	//For printing the elements
	printf("\n Print the elements: \n");
	for(i=0; i<5; i++) {
		printf(" %d\n",arr[i]);
	}
	//For printing the sum of array 
	for(i=0; i<5; i++) {
		sum+=arr[i];
	}
	printf("\n Sum of the array is: %d\n",sum);
	
	//For printing the square of array elememts
	printf("\n Square of the elements: \n");
	for(i=0; i<5; i++) {
		sq = arr[i] * arr[i];
		printf(" %d\n",sq);
	} 
	//For printing the sum of the squares of array elements
	for(i=0; i<5; i++) {
		sum_sq+=sq;
	}
	printf("\n Sum of the squares of elements is: %d",sum_sq);
	
return 0;
}

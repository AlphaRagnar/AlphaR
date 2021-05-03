#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int arr[5],i,sum=0,cube=0,sum_cube=0;
	
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
	
	//For printing the cubes of array elememts
	printf("\n Cubes of the elements: \n");
	for(i=0; i<5; i++) {
		cube = arr[i] * arr[i] * arr[i];
		printf(" %d\n",cube);
	} 
	//For printing the sum of the cubes of array elements
	for(i=0; i<5; i++) {
		sum_cube+=cube;
	}
	printf("\n Sum of the cubes of elements is: %d",sum_cube);
	
return 0;
}

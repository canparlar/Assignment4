/* Can Parlar - Scans the number of integers in the array. Scans the array and prints out the numbers as the sum of the numbers before that one. */

#include <stdio.h>

int main () {
int elements;
int index;
int number;
int sum = 0;
printf("Enter the number of integers in your array:");
scanf("%d", &elements);
int arr [elements];
int arro [elements];
	for (index = 0; index < elements; index++) {
		scanf("%d", &number);
		arr [index] = number;
		sum = number + sum;
		arro [index] = sum;
	}
	
	for (index = 0; index < elements; index++) {
		printf("\n%d\n", arro[index]);
	}




	return 0;
}

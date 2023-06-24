/*52. Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3*/

#include <stdio.h>
int main() {
	int e, i, sval, position;

	printf("\nInput the length of the array: ");
	scanf("%d", &e);

	int v[e];
    printf("\nInput the array elements:\n ");
	for(i = 0; i < e; i++) {
			scanf("%d", &v[i]);
	}
	sval = v[0];
	position = 0;
	for(i = 0; i < e; i++) {
		if(sval > v[i]) {
			sval = v[i];
			position = i;
		}
	}
	
	printf("Smallest Value: %d\n", sval);
	printf("Position of the element: %d\n", position);
	return 0;
}
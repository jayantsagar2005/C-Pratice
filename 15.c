/*15. Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803*/

#include<stdio.h>

int main(){

    int x1,x2,y1,y2;
    float distance;

    printf("Enter the distance x1 : ");
    scanf("%d",&x1);

    printf("Enter the distance x2 : ");
    scanf("%d",&x2);

    printf("Enter the distance y1 : ");
    scanf("%d",&y1);

    printf("Enter the distance y2 : ");
    scanf("%d",&y2);

    distance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    printf("The distance of between two points %f", sqrt(distance));

    return 0;
}

/*14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000*/

#include<stdio.h>
int main()

{
    int distance,fuel_spent,average;

    printf("enter the distance in km : ");
    scanf("%d",&distance);

    printf("enter the total fuel spent in litre :");
    scanf("%d",&fuel_spent);

    average = distance/fuel_spent;

    printf("The average consumption (km/lt) is %d ",average);
    
    return 0;
}
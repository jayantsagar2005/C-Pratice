/*11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444*/

#include<stdio.h>
int main()
{
    int item1_no,item1_weight,item2_no,item2_weight;
    int totalweight_item1,totalweight_item2,totalnumber_both;
    float result;

    printf("Enter the Number of item1 :");
    scanf("%d", &item1_no);
    printf("Enter the Weight of item1 :");
    scanf("%d", &item1_weight);

    printf("Enter the Number of item2 :");
    scanf("%d", &item2_no);
    printf("Enter the Weight of item2 :");
    scanf("%d", &item2_weight);

    totalweight_item1 = item1_no * item1_weight;
    totalweight_item2 = item2_no * item2_weight;
    totalnumber_both = item1_no + item2_no;

    result = (totalweight_item1 + totalweight_item2)/totalnumber_both;

    printf("The total weight of Item1 : %d\n",totalweight_item1);
    
    printf("The total weight of Item2 : %d\n",totalweight_item2);

    printf("The total number of Item1 and Item2 : %d\n",totalnumber_both);
    
    printf("The average value is %6f\n ", result);

    return 0;
}
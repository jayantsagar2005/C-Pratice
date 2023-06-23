/*16. Write a C program to read an amount (integer value) and break the amount into the smallest possible 
number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00*/

#include<stdio.h>
int main()
{
    int amount,note_100,note_50,note_20,note_10,note_5,note_2,note_1;
    printf("Input the Amount : ");
    scanf("%d",&amount);

    note_100 = amount/100;
    note_50 = (amount - (note_100*100))/50;
    note_20 = (amount - (note_100*100) - (note_50*50))/20;
    note_10 = (amount - (note_100*100) - (note_50*50) - (note_20*20))/10;
    note_5 = (amount - (note_100*100) - (note_50*50) - (note_20*20) - (note_10*10))/5;
    note_2 = (amount - (note_100*100) - (note_50*50) - (note_20*20) - (note_10*10) - (note_5*5))/2;
    note_1 = (amount - (note_100*100) - (note_50*50) - (note_20*20) - (note_10*10) - (note_5*5) - (note_2*2))/1;
    
    printf("%d Notes of 100\n",note_100);
    printf("%d Notes of 50\n",note_50);
    printf("%d Notes of 20\n",note_20);
    printf("%d Notes of 10\n",note_10);
    printf("%d Notes of 5\n",note_5);
    printf("%d Notes of 2\n",note_2);
    printf("%d Notes of 1\n",note_1);

    
    return 0;
}
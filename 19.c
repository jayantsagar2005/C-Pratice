/*19. Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r 
and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
Test Data :
Input the second integer: 35 q
Input the third integer: 15 r
Input the fourth integer: 46 s
Expected Output:
Wrong values*/

// q>r, s>p, r+s>p+q

#include<stdio.h>
int main()
{
    int p,q,r,s;

    printf("Enter the First integers : ");
    scanf("%d",&p);

    printf("Enter the Second integers : ");
    scanf("%d",&q);

    printf("Enter the Third integers : ");
    scanf("%d",&r);

    printf("Enter the Fourth integers : ");
    scanf("%d",&s);

    if (q>r && s>p && (r+s)>(p+q) && q>0 && r>0 && s>0 && p%2==0)
    {
        printf("Correct Values");
    }

    else{
        printf("Wrong Values");
    }
    
    return 0;
}
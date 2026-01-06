//WAWR [ With Argument With Return ]

#include<stdio.h> 
int add(int,int); // int add(int a,int b);
int a,b,c;
void main()
{
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c = add(a,b);
    printf("\nAddition is: %d",c);
}
int add(int x,int y) //function definition
{
    int z;
    z=x+y;
    return z; // return (x+y);
}
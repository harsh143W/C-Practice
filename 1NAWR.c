//NAWR[No Argument, With Return]

#include<stdio.h> 
int add();
int a,b,c;
void main()
{
    c=add();
    printf("\nAddition is: %d",c);
}
int add()
{
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    return(a+b);
}
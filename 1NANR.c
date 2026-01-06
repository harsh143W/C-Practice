//NANR [No Argument, No Return]
#include<stdio.h>
void add();
int a,b;
void main()
{
    add();
}
void add()
{
    printf("Enter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    printf("\n Addition is: %d",a+b);
}


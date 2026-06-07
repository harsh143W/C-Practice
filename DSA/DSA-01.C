//Ask user for 5 number and print them
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int marks[5];

	clrscr();

	printf("Enter five numbers :");

	for(i=0; i<5; i++){
		scanf("%d",&marks[i]);
	}

	//Print the number
	printf("Numbers:");
	for(i=0; i<5; i++){
		printf("\n%d",marks[i]);
	}

	getch();

}
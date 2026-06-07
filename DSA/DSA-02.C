//Find the largest number from an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int marks[5];// ={1,2,3,4,5};
	int count = marks[0];

	clrscr();

	//for ask
	printf("Enter five marks Number:");

	for(i=0; i<5; i++){
		scanf("%d",&marks[i]);
	}


	for(i=0; i<5; i++){
		if(marks[i] > count){
			count = marks[i];
		}
	}
	printf("largest = %d",count);

	getch();
}
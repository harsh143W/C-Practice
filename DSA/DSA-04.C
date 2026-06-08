//Print odd number by asking user
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int marks[5];


	clrscr();

	for(i = 0; i < 5; i++){
		printf("Number %d::",i+1);
		scanf("%d",&marks[i]);
	}

	for(i = 0; i < 5; i++){
		if(marks[i] % 2 != 0){
			printf("\n%d",marks[i]);
		}
	}


	getch();

}
//Ask user the number and then print only even number of them
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[6];
	int i;

	clrscr();

	printf("Enter six Number here-->");

	for(i=0; i<6; i++){
		printf("\nNumber %d::",i+1);
		scanf("%d",&marks[i]);
	}

	//print even number

       for(i=0; i<6; i++){
		if(marks[i] % 2 == 0){
			printf("\n%d",marks[i]);
		}
	}

	getch();

}
#include<stdio.h> 
int main() 
{
	int index,i;


	printf("Enter index value of array:-");
	scanf("%d",&index);

	int arr[index];

	printf("Enter element you want to add:-\n");
	for(i=0; i<index; i++){
	scanf("%d",&arr[i]);
}

	//int length = sizeof(arr) / sizeof(arr[0]);

	int min = arr[0];

	for( i =1; i<index; i++){
	if(arr[i] < min ){
	min = arr[i];
}
}
	printf("Smallest element: %d\n",min);
	return 0;
}

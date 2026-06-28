#include<stdio.h> 
int main() 
{
	int i,n;
	printf("For view table enter number:-");
	scanf("%d",&n);

	//For loop for print
	for(i=1; i<=10; i++){
	printf("%d * %d = %d\n",n,i,n*i);
}
	return 0;
}

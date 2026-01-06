//WANR[ With Argument No Return]

#include<stdio.h> 
void add(int,int);  //function declaration 
// add(int a,int b); 
int a,b; 
void main() 
{ 
 printf("Enter a:"); 
 scanf("%d",&a); 
 printf("Enter b:"); 
 scanf("%d",&b); 
 add(a,b); 
} 
void add(int x,int y) 
{ 
 printf("\nAddition is:%d",x+y); 
}
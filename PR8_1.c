/*
Q1) Write a program to find out length of string using pointer.
Output:
Enter your Desired String: kunal

The Length Of The Above String is : 5
*/
#include<stdio.h>
#include<string.h>
void main(){
	int i,n;
	char a[50];
	int *ptr;
	printf("Enter any string : ");
	gets(a);
	ptr=&a;
	ptr=strlen(a);
	printf("The Length of String is : %d ",ptr);
}

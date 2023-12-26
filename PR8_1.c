/*
Q1) Write a program to find out length of string using pointer.
Output:
Enter your Desired String: kunal

The Length Of The Above String is : 5
*/
#include<stdio.h>
void main(){
	char alpha[100];
	printf("Enter your Desired String: ");
	gets(alpha);
	char *ptr=alpha;
	int len=0;
	while(*ptr != NULL){
		len++;
		ptr++;
	}
	printf("\nThe Length Of The Above String is : %d",len);
}

/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using 
Pointer with UDF.
Output:

*/
#include<stdio.h>
int Cube(int x,int y,int *p){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			*(p+i*y+j)=*(p+i*y+j)**(p+i*y+j)**(p+i*y+j);
		}
	}
}
void main(){
	int r,c;
	printf("Enter Size for Row of Array: ");
	scanf("%d",&r);
	printf("Enter Size for Column of Array");
	scanf("%d",&c);
	int i,j,a[r][c];
	int *ptr[r][c];
	printf("\nEnter the Values for Array A: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			ptr[i][j]=&a[i][j];
		}
	}
	printf("\nThe Original Array : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	Cube(r,c,(int*)a); 
	printf("\nThe Cube of Array is : \n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

}

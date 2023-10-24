#include<stdio.h>
int main()

{
	int n;
	printf("Enter any decimal no" );
	scanf("%d", &n);
	binary(n);
	
}
int binary(int n){
	
	if(n<=1)
	printf("%d ", n);
	else {
		binary(n/2);
		printf("%d ", n%2);
	}
}

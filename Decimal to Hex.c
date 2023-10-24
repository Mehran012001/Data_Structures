#include<stdio.h>

int main()
{
	int n;
	printf("Enter any decimal no: ");
	scanf("%d", &n);
	hex(n);
}
int hex(int n){
	if(n<10)
	printf("%d", n);
	else if(n==10)
	printf("A");
	else if(n==11)
	printf("B");
	else if(n==12)
	printf("C");
	else if(n==13)
	printf("D");
	else if(n==14)
	printf("E");
	else if(n==15)
	printf("F");
	else {
		int r=n%16;
        hex(n/16);
        if(r<10)
	printf("%d", r);
	else if(r==10)
	printf("A");
	else if(r==11)
	printf("B");
	else if(r==12)
	printf("C");
	else if(r==13)
	printf("D");
	else if(r==14)
	printf("E");
	else if(r==15)
	printf("F");
        
    
 	;
 }
}

#include<stdio.h>
int sum(int n);
int main(){
	int num;
	printf("Enter a positive number\n");
	scanf("%d",&num);
	printf("sum=%d",sum(num));
	return 0;
}

int sum(int n){
	if(n!=0)
	{
		return n+sum(n-1);
	}
	else{
		return n;
	}
}

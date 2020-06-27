#include<stdio.h>

//Write C code for a program that calculates the sum of natural numbers until the number that is entered by user. 
//Calculation must be by using recursive function.  

int item_sum(int n){
	
	if(n<0){
		return 0;
	}
	
	return(n+item_sum(n-1));
	
}
int main(){
	
	int a;
	printf("Please enter an integer.\nEntered number:");
	scanf("%d",&a);
	
	int result=item_sum(a);
	printf("Sum of numbers until the entered number:%d",result);
	
	return 0;
}


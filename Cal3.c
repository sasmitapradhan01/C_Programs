#include <stdio.h>
#include <stdlib.h>

int main(){
	float num = 0;
	printf("Please enter a number: ");
	scanf("%f",&num);
	float num2=0;
	printf("Please enter a second number: ");
	scanf("%f",&num2);
	printf("%.2f",num+num2);
	return 0;
}

#include<stdio.h>
int main(){
	float F, C;
	printf("Enter the Fahrenheit: ");
	scanf("%f", &F);
	C=(F-32)*5/9;
	printf("Fahrenheit to Celsius %f \n", C);
	return 0;
}

#include<stdio.h>
int main(){
	int s;
	float da, hr, tot;
	printf("Enter the Values: ");
	scanf("%d", &s);
	da=s*40/100;
	hr=s*20/100;
	tot=da+hr+s;
	printf("The Gross Salary is: %f", tot);
	return 0;
}

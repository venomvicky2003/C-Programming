#include<stdio.h>
int main(){
	float km, m, ft, inch, cm;
	printf("Enter the Kilometer: ");
	scanf("%f", &km);
	m=km*1000;
	ft=km/0.0003048;
	inch=km/0.0000254;
	cm=km*100000;
	printf("%f km in meter %f \n", km,m);
	printf("%f km in feet %f \n", km,ft);
	printf("%f km in inch %f \n", km,inch);
	printf("%f km in centimeter %f \n", km,cm);
	return 0;
}

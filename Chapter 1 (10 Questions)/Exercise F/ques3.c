#include<stdio.h>
int main(){
	float eng, math, sci, soc, lang, avg, per;
	printf("English Mark: ");
	scanf("%f", &eng);
	printf("Math Mark: ");
	scanf("%f", &math);
	printf("Science Mark: ");
	scanf("%f", &sci);
	printf("Social Mark: ");
	scanf("%f", &soc);
	printf("Language Mark: ");
	scanf("%f", &lang);
	avg=eng+math+sci+soc+lang;
	per=avg/500 *100;
	printf("The average of a student %f and percentage of the student is %f ", avg, per);
}


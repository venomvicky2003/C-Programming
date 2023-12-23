#include<stdio.h>
int main(){
	int l[9],b[9],i;
	printf("Enter the Length: ");
	scanf("%d", &l[0]);
	printf("Enter the Breadth: ");
	scanf("%d", &b[0]);
for(i=1;i<9;i++){
		if(l[i-1]>b[i-1])
		{
			l[i]=l[i-1]/2;
			b[i]=b[i-1];
		}
		else{
			b[i]=b[i-1]/2;
			l[i]=l[i-1];		
		}
		printf("The size of a%d is %d x %d \n", i,b[i],l[i]);
	}
}



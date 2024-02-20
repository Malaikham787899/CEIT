#include<stdio.h>
void main() {
	
int n1,n2,i,sum=0,j;
printf("Enter number1 : ");
scanf("%d",&n1);
printf("Enter number2 : ");
scanf("%d",&n2);

for(j=n1+2;j<=n2;j++){
	
	for(i=2;i<j;i++){
		if(j%i==0)
		break;
	}
	
	if(i==j){
		printf("%d \n",i);
		sum=sum+i;
	}
	
} printf("\nSum of all Prime Number is %d",sum);

}

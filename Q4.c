#include<stdio.h>
void primefactors(int num){
	
	int count;
	for(count=2;num>1;count++){
		while(num%count==0){
			printf("%d ",count);
			num=num/count;
		}
	}
	
}

int main(){
	
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	primefactors(num);
	
}

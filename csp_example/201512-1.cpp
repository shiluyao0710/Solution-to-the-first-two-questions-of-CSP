#include<stdio.h>

int main(){
	int n;
	int sum=0;
	scanf("%d",&n);
	while(n){
		sum += n%10;
		n /= 10;
	}
	printf("%d",sum);
	
	return 0;
}



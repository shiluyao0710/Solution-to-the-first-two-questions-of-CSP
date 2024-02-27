#include<stdio.h>

int main(){
	
	int i,j;
	int n,x;
	int sum=0;
	int min=111111;
	int price[31];
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++){
		scanf("%d",&price[i]);
	}
	for(i=1;i<(1<<n);i++){
		sum = 0;
		for(j=0;j<n;j++){
			if(i&(1<<j)){
				sum += price[j];
			}
		}
		if(sum >= x && sum < min){
			min = sum;
		}
	}
	
	printf("%d",min);

	return 0;
}

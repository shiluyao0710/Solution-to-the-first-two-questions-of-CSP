#include<stdio.h>

int main(){
	int i,n,k;
	int a[1001];
	int cnt,sum;
	cnt = sum =0;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum += a[i];
		if(sum >= k){
			cnt++;
			sum = 0;
		}
		if(i == n-1 && sum > 0){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

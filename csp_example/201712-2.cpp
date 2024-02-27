#include<stdio.h>

int main(){
	int num;
	int i,n,k;
	int a[1001];
	int cnt = 0;
	scanf("%d %d",&n,&k);
	num = n;
	for(i=1;i<=n;i++){
		a[i] = 1;
	}
	for(i=1;;i++){
		if(i%n == 1){
			i = 1;
		}
		if(a[i] == 1){
			cnt++;
			if(cnt % k == 0 || cnt%10 == k){
				a[i] = 0;
				num--;
				if(num == 1){
					break;
				}
			}
		}else{
			continue;
		}
	}
	for(i=1;i<=n;i++){
		if(a[i] == 1){
			printf("%d",i);
		}
	}
	
	return 0;
}

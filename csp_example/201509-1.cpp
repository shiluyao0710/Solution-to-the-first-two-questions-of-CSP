#include<stdio.h>

int main(){
	
	int i,n;
	int a[1001];
	int cnt=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i] != a[i+1]){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

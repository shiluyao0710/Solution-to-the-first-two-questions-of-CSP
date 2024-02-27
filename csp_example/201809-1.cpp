#include<stdio.h>

int main(){
	int i,n;
	int a[1001];
	int b[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0] = (a[0] + a[1]) /2;
	for(i=1;i<n-1;i++){
		b[i] = (a[i-1] + a[i+1] + a[i]) / 3;
		
	}
	b[n-1] = (a[n-1] + a[n-2]) /2;
	
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}

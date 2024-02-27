#include<stdio.h>

int main(){
	int i,j,n;
	int cnt=0;
	int a[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i] + a[j] == 0){
				cnt++;
				break;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

#include<stdio.h>

int main(){
	int i,j;
	int n,k;
	int x,y;
	int cnt=0;
	int a[100001];
	scanf("%d %d",&n,&k);
	for(i=0;i<100001;i++){
		a[i] = 0;
	}
	for(i=0;i<k;i++){
		scanf("%d %d",&x,&y);
		if(y == 0){
			a[x]=1;
			continue;
		}
		if(a[y] != 1){
			cnt++;
		}
		a[x] = 1;
	}
	printf("%d",cnt);
	
	return 0;
}

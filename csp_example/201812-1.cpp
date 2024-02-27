#include<stdio.h>

int main(){
	int i,n;
	int r,g,y;
	int k,t;
	int sum=0;
	scanf("%d %d %d",&r,&g,&y);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&k,&t);
		if(k == 0){
			sum += t;
		}
		if(k == 1){
			sum += t;
		}
		if(k == 2){
			sum += t;
			sum += r;
		}
		if(k == 3){
			continue;
		}
	}
	printf("%d",sum);
	
	return 0;
}

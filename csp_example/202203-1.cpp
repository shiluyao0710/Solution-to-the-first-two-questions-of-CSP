#include<stdio.h>

int x[100001],y[100001];

int fun(int i){
	int flag;
	flag=0;
	int j;
	for(j=i;j>=0;j--){
		if(i == j){
			continue;
		}
		if(y[i] == x[j]){
			flag = 1;
			break;
		}
	}
	return flag;
}


int main(){
	int i,j;
	int n,k;
	int cnt = 0;
	int flag = 0;
		
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<k;i++){
		if(y[i] == 0){
			flag = 1;
		}else{
			flag = fun(i);
		}
		if(flag == 0){
			cnt++;
		}else{
			flag = 0;
		}
	}
	printf("%d",cnt);
	return 0;
}

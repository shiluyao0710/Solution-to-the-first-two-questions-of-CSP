#include<stdio.h>

#define M 100001

int MAX(int a, int b){
	return a>b?a:b;
}


int main(){
	
	int i,n;
	int sum = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	int w[M],score[M];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&w[i],&score[i]);
		sum += w[i] * score[i];
	}
	printf("%d",MAX(0,sum));
	return 0;
}

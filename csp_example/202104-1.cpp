#include<stdio.h>

#define N 501
#define M 501
#define H 257
int A[N][M];
int h[H];

int  main(){
	int i,j;
	int n,m,L;
	scanf("%d %d %d",&n,&m,&L);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
			h[A[i][j]]++;
		}
	}
	for(i=0;i<L;i++){
		printf("%d ",h[i]);
	}
	
	
	return 0;
}

#include<stdio.h>
#include<math.h>
int F[10001];
int G[10001];
int A[10001];
int main(){
	int i,x;
	int n,N,r;
	int sum;
	scanf("%d %d",&n,&N);
	A[0] = 0;
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for(x=0;x<N;x++){
		for(i=0;i<n;i++){
			if(x >= A[i] && x < A[i+1]){
				F[x] = i;
				break;
			}else if(x>=A[i+1]){
				F[x] = i+1;
			}
		}
	}
	r = N/(n+1);
	for(x=0;x<N;x++){
		G[x] = x/r;
	}
	sum = 0;
	for(x=0;x<N;x++){
		sum += abs(G[x] - F[x]);
	}
	printf("%d",sum);
	
	return 0;
}

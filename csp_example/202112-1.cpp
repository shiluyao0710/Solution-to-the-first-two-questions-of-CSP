#include<stdio.h>

int A[201];
int F[10000001];
int n,N;

int search(int m){
	int i;
	A[0] = 0;
	for(i=0;i<=n;i++){
		if(i+1 > n){
			return i;
		}
		if(m == A[i]){
			return i;
		}else if(m>A[i] && m<A[i+1]){
			return i;
		}
	}
}


int main(){
	int i,j;

	int k = 1;
	int sum=0;

	scanf("%d %d",&n,&N);

	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		F[i] = search(i);
		sum += F[i];
	}

	printf("%d",sum);
	return 0;
}

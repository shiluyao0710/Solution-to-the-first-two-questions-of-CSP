#include<stdio.h>

int A[201];
int F[10000001];
int n,N;
int cnt=0;

int search(int m,int num){
	int i;
	A[0] = 0;
	for(i=num;i<=n;i++){
		if(i+1 > n){
			cnt = i;
			return i;
		}
		if(m == A[i]){
			cnt = i;
			return i;
		}else if(m>A[i] && m<A[i+1]){
			cnt = i;
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
		F[i] = search(i,cnt);
		sum += F[i];
	}

	printf("%d",sum);
	return 0;
}

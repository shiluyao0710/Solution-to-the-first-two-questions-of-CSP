#include<stdio.h>
#include<math.h>
int A[1000][1000];
int B[1000];
int main(){
	int i,j,N,M;
	int k;
	int sum = 0;
	int MAX = 0;
	int MaxI;
	scanf("%d %d",&N,&M);
	
	for(i=0;i<N;i++){
		for(j=0;j<M+1;j++){
			scanf("%d",&A[i][j]);
			sum += A[i][j];
			if(j>=1){
				B[i] += abs(A[i][j]);
			}
		//	printf("%d\n",abs(A[i][j]));
		}
	//	printf("%d\n",B[i]);
	}
	for(i=0;i<N;i++){
		if(B[i]>MAX){
			MAX = B[i];
			MaxI = i;
		}
	}
	printf("%d %d %d",sum,MaxI+1,B[MaxI]);
	
	
	return 0;
}

#include<stdio.h>

int main(){
	
	int i,n;
	int sumMax,sumMin=0;
	int A[101];
	int B[101];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&B[i]);
	}
	sumMax = sumMin = B[0];
	
	for(i=1;i<n;i++){
		A[i] = B[i];
		sumMax += A[i];
	}
	
	printf("%d\n",sumMax);
	
	for(i=1;i<n;i++){
		if(B[i] == B[i-1]){
			A[i] = 0;
		}else{
			A[i] = B[i];
		}
		sumMin += A[i];
	}
	
	printf("%d",sumMin);
	
	return 0;
}

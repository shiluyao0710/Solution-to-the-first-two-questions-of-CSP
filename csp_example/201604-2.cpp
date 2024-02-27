#include<stdio.h>

int A[20][20];
int B[20][20];
int C[20][20];
int D[20][20];

int main(){
	int i,j,n;
	int col;
	int flag = 0;
	int flag_n;
	for(i=1;i<=15;i++){
		for(j=1;j<=10;j++){
			scanf("%d",&A[i][j]);
			C[i][j] = A[i][j];
			D[i][j] = A[i][j];
		}
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			scanf("%d",&B[i][j]);
		}
	}
	scanf("%d",&col);
	n = 1;
	while(1){
		for(i=1;i<=15;i++){
			for(j=1;j<=10;j++){
				D[i][j] = A[i][j];
			}
		}
		for(i=1;i<=4;i++){
			for(j=1;j<=4;j++){
				D[i+n-1][j+col-1] += B[i][j];
				if(D[i+n-1][j+col-1] == 2){
					flag = 1;
				}
			}
			if(flag == 1){
				break;
			}
		}
		if(flag == 1){
			flag_n = n;
			break;
		}
		n++;
		if(n == 16){
			flag_n = n;
			break;
		}
	}
	n = flag_n - 1;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			C[i+n-1][j+col-1] += B[i][j];
		}
	}
	
	for(i=1;i<=15;i++){
		for(j=1;j<=10;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

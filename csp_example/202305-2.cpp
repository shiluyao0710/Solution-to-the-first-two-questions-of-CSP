#include <stdio.h>



int Q[110][110];
int K[110][110];
int V[110][110];	
int W[101];
int KTran[110][110];
int QKMutl[110][110];
int QKVMutl[110][110];


void Ktran(int K[][110],int r,int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			KTran[j][i] = K[i][j];
		}
	}
	
}

void MatrixMutl_1(int A[][110],int r1,int c1,int B[][110],int r2,int c2,int QKMutl[][110]){
	
	int i,j,k;
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			QKMutl[i][j] = 0;
		}
	}
	
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				QKMutl[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
}

void MatrixMutl_2(int A[][110],int r1,int c1,int B[][110],int r2,int c2,int QKMutl[][110]){
	
	int i,j,k;
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			QKVMutl[i][j] = 0;
		}
	}
	
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				QKVMutl[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
}

void DMatrix(int W[110],int QKMutl[][110],int n){
	int i,j,k;
	k=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				QKMutl[i][j] *= W[k];
		}
		k++;
	}
}


int main(){
	
	int i,j,k;
	int n,d;
	scanf("%d %d",&n,&d);
	
	for(i=0;i<n;i++){
		for(j=0;j<d;j++){
			scanf("%d",&Q[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<d;j++){
			scanf("%d",&K[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<d;j++){
			scanf("%d",&V[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&W[i]);
	}
	
	Ktran(K,n,d);
	
	for(i=0;i<d;i++){
		for(j=0;j<n;j++){
			printf("%d ",KTran[i][j]);
		}
		printf("\n");
	}
	
	MatrixMutl_1(Q,n,d,KTran,d,n,QKMutl);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",QKMutl[i][j]);
		}
		printf("\n");
	}
	
	DMatrix(W,QKMutl,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",QKMutl[i][j]);
		}
		printf("\n");
	}
	MatrixMutl_2(QKMutl,n,n,V,n,d,QKVMutl);
	for(i=0;i<n;i++){
		for(j=0;j<d;j++){
			printf("%d ",QKVMutl[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

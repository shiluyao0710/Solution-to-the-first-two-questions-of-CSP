#include<stdio.h>
	int a[1001][1001];
	int b[1001][1001];
int main(){
	int i,j,n,m;
	int temp;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for(i=0;i<m/2;i++){
		for(j=0;j<n;j++){
			temp = b[i][j];
			b[i][j] = b[m-i-1][j];
			b[m-i-1][j] = temp;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

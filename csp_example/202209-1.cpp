#include<stdio.h>

int a[21];
int b[21];
int c[21];
int MC[21];
int MCDiv[21];

int main(){
	
	int i,j;
	int n,m;

	int sumC = 1;
	int sum=0;
	c[0] = 1;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sumC *= a[i];
		c[i] = sumC;
		//printf("cccccc%d\n ",c[i]);
	}
	for(i=1;i<=n;i++){
		MC[i] = m % c[i];
	//	printf("MC%d\n ",MC[i]);
	}
	
	MCDiv[1] = MC[1];
	for(i=2;i<=n;i++){
		MCDiv[i] = MC[i]- MC[i-1];
	}
	
	for(i=1;i<=n;i++){
	//	printf("MCDiv%d\n ",MCDiv[i]);
	}
	
	for(i=1;i<=n;i++){
		b[i] = MCDiv[i] / c[i-1];
		printf("%d ",b[i]);
	}
	
	
	
	
	return 0;
}

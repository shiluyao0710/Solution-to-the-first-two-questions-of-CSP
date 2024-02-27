#include <stdio.h> 

int main()
{
	int m,n;
	int m1[101],m2[101];
	int n1[101],n2[101];
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d %d",&n1[i],&n2[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d %d",&m1[i],&m2[i]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			m1[i]+=n1[j];
			m2[i]+=n2[j];
		}
		printf("%d %d\n",m1[i],m2[i]);
	}
	
	return 0;	
}

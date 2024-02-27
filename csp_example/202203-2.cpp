#include<stdio.h>

int t[100001];
int c[100001];
int flag[100001];
int main(){
	int i,j;
	int n,m,k,q;
	int cnt=0;
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<n;i++){
		scanf("%d %d",&t[i],&c[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&q);
		cnt = 0;
		for(j=0;j<n;j++){
			if(t[j] >= q+k && t[j] <= q+k +c[j]-1){
				cnt++;
			}
		}
		flag[i] = cnt;
	}
	for(i=0;i<m;i++){
		printf("%d\n",flag[i]);
	}
	
	return 0;
}

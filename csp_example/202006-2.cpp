#include<stdio.h>

struct V{
	int ind;
	int val;
}v[10000001],u[10000001];


int main(){
	
	int n,a,b;
	int i,j;
	long long sum=0;
	scanf("%d %d %d",&n,&a,&b);
	for(i=1;i<=a;i++){
		scanf("%d %d",&v[i].ind,&v[i].val);
		
	}
	for(i=1;i<=b;i++){
		scanf("%d %d",&u[i].ind,&u[i].val);
	}
	i = j = 1;
	while(i<=a && j<=b){
		if(v[i].ind == u[j].ind){
			sum += v[i].val * u[j].val;
			i++;
			j++;
		}
		if(v[i].ind < u[j].ind){
			i++;
		}
		if(v[i].ind > u[j].ind){
			j++;
		}
	}
	
	printf("%lld",sum);
	return 0;
}

#include<stdio.h>

int Max(int a,int b){
	return a>b?a:b;
}
int Min(int a,int b){
	return a<b?a:b;
}

int s[4001];
int e[4001];

int main(){
	int i,j,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=2*n;i++){
		scanf("%d %d",&s[i],&e[i]);
	}
	
	for(i=1;i<=n;i++){
		for(j=n+1;j<=2*n;j++){
			if((s[i] <= s[j] && e[i] > s[j]) || (s[j] <= s[i] && e[j] > s[i]) || (s[i] <= s[j] && e[i] >= e[j]) || (s[j] <= s[i] && e[j] >= e[i])){
				sum += Min(e[i],e[j]) - Max(s[i],s[j]);
			}
		}
	}
	printf("%d",sum);
	return 0;
}

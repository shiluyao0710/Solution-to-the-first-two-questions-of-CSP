#include<stdio.h>

int a[1001];
int b[1001];
int c[1001];


int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(b[a[i]] != 0){
			c[i] = b[a[i]] + 1;
		}else{
			c[i] = 1;
		}
		b[a[i]]++;
	}
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	
	return 0;
}

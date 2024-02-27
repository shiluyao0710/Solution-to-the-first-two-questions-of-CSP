#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n;
	int temp;
	int Min;
	int a[1001];
	int b[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<n-1;i++){
		b[i] = abs(a[i] - a[i+1]);
	}
	Min = 10000;
	for(i=0;i<n-1;i++){
		if(b[i] < Min){
			Min = b[i];
		}
	}
	printf("%d",Min);
	return 0;
}

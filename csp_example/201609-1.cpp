#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	int a[1001];
	int b[1001];
	int Max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		b[i] = abs(a[i] - a[i+1]);
	}
	Max = 0;
	for(i=0;i<n-1;i++){
		if(b[i]>Max){
			Max = b[i];
		}
	}
	printf("%d",Max);
	
	return 0;
}

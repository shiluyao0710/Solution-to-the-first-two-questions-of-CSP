#include<stdio.h>
int a[100000000];
int main(){
	int n;
	int i;
	int max,min;
	int xh;
	int flag=0;
	double mid;
	int midBefore,midAfter;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]>a[n-1]){
		max = a[0];
		min = a[n-1];
	}else{
		max = a[n-1];
		min = a[0];
	}
	if(n % 2 == 0){
		xh = n/2;
		midBefore = a[xh] + a[xh-1];
		if(midBefore % 2 != 0){
			flag = 1;
			mid = midBefore/2.0;
		}else{
			midAfter = midBefore/2;
		}
		
	}else{
		xh = n/2;
		midAfter = a[xh];
	}
	if(flag == 1){
		printf("%d %.1f %d",max,mid,min);
	}else{
		printf("%d %d %d",max,midAfter,min);
	}
	
	return 0;
}

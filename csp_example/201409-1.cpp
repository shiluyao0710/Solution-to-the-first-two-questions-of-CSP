#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n;
	int temp;
	int cnt=0;
	int a[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]= temp;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(abs(a[i] - a[i+1]) == 1){
			cnt++;
		}
	}
	printf("%d",cnt);
	
	
	return 0;
}

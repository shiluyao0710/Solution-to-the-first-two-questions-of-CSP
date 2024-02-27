#include<stdio.h>

int main(){
	
	int i,j,n;
	int temp;
	int tempN,tempN1;
	int a[1001];
	int Min,Max,flag;
	Min = Max = flag = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	if(n%2 == 0){
		tempN1 = n/2;
		if(a[tempN1] == a[tempN1-1]){
			for(i=0;i<n;i++){
				if(a[i]>a[tempN1]){
					Min++;
				}
				if(a[i]<a[tempN1]){
					Max++;
				}
			}
			if(Max == Min){
				printf("%d",a[tempN1]);
			}else{
				printf("-1");
			}
		}else{
			for(i=0;i<n;i++){
				if(a[i]>a[tempN1]){
					Min++;
				}
				if(a[i]<a[tempN1]){
					Max++;
				}
			}
			if(Max == Min){
				printf("%d",a[tempN1]);
				flag = 1;
			}else{
				printf("-1");
			}
			if(flag == 0){
				for(i=0;i<n;i++){
					if(a[i]>a[tempN1-1]){
						Min++;
					}
					if(a[i]<a[tempN1-1]){
						Max++;
					}
				}
				if(Max == Min){
					printf("%d",a[tempN1-1]);
				}else{
					printf("-1");
				}
			}
		}
	}
	if(n%2 != 0){
		tempN = n/2;
		for(i=0;i<n;i++){
			if(a[i]>a[tempN]){
				Min++;
			}
			if(a[i]<a[tempN]){
				Max++;
			}
		}
		if(Max == Min){
			printf("%d",a[tempN]);
		}else{
			printf("-1");
		}
	}
	
	return 0;
}

#include<stdio.h>

int main(){
	int i,n;
	int MaxNum,Max;
	int a[1001];
	int b[10001];
	scanf("%d",&n);
	for(i=0;i<10001;i++){
		b[i] = 0;
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	Max = 0;
	for(i=0;i<10001;i++){
		if(b[i] > Max){
			Max = b[i];
			MaxNum = i; 
		}
	}
	printf("%d",MaxNum);
	
	
	return 0;
}

#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int t[100001],c[100001];
int n;
int k;
int m;

bool judge(int x){
	
	int use = 0;
	int i;
	
	for(i=0;i<n;i++){
		if(t[i]>x){
			use += (t[i]-x)*c[i];			
		}
		if(use>m){
			return false;
		}
	}
	return true;
}



int main(){
	
	
	int i;
	int l,h,mid;
	
	int max=0;
	
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<n;i++){
		scanf("%d %d",&t[i],&c[i]);
	}

	for(i=0;i<n;i++){
		if(t[i]>max){
			max = t[i];
		}
	}
	
	h = max;
	l = k;

	
	while(l<=h){
		
		mid = (l+h)/2;
		if(judge(mid)){
			h = mid - 1;
		}else{
			l = mid + 1;
		}
		
	}
	printf("%d",l);
	
	
	
	
	return 0;
}

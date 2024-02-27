#include<stdio.h>

int r,y,g;

int search(long long sum,int k,int t){
	int w;
	long long sum_f;
	int sum_z;
	sum_z = r + y + g;
	if(k == 1){
		sum_f = r+y+g-t+sum;
	}
	if(k == 2){
		sum_f = g+y-t+sum;
	}
	if(k == 3){
		sum_f = g-t+sum;
	}
	sum_f = sum_f % sum_z;

 	if(sum_f >=0 && sum_f<=g){
		w = 0;
	}else{
		w = y+r+g-sum_f;
	}
	return w;
}

int main(){
	//ÂÌ »Æ ºì 
	int i,n;
	int k,t;
	long long sum=0;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&k,&t);
		if(k == 0){
			sum += t;
		}else{
			sum += search(sum,k,t);
		}
		
	}
	printf("%lld",sum);
	return 0;
}

#include<stdio.h>

struct Num{
	int NUM;
	int CNT;
}num[1001];
int a[1001];
int main(){
	
	int i,j,n;
	int cnt=0;
	struct Num temp;
	struct Num b[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		num[a[i]].CNT++;
		num[a[i]].NUM = a[i];
	}
	
	for(i=0;i<1001;i++){
		if(num[i].CNT > 0){
			b[cnt].NUM = num[i].NUM;
			b[cnt].CNT = num[i].CNT;
			cnt++;
		}
	}
	for(i=0;i<cnt;i++){
		for(j=0;j<cnt-i-1;j++){
			if(b[j].CNT<b[j+1].CNT){
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
		
	}
	
	for(i=0;i<cnt;i++){
		printf("%d %d\n",b[i].NUM,b[i].CNT);
	}
	
	return 0;
}

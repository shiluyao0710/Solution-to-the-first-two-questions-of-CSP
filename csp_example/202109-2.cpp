#include<stdio.h>

int a[500001];


void XG(int len,int p){
	int i;
	for(i=0;i<len;i++){
		if(a[i]<p){
			a[i] = 0;
		}
	//	printf("%d ",a[i]);
	}
//	printf("\n");
}


int main(){
	
	int i,n;
	int max =0;
	int p=1;
	int flag=0;
	int cnt;
	int max_cnt;
	int max_c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max = a[i];
		}
	}
	max_cnt=-1;
	cnt = 0;
	p = 1;
	if(n%2 == 0){
		max_c = n/2;
	}else{
		if(a[0] == 0){
			max_c = n/2;
		}else{
			max_c = (n+1)/2;
		}
	}
	
	while(1){
		for(i=0;i<n;i++){
			if(a[i]>0){
				if(flag == 0){
					cnt++;
					flag =1;
				}
			}else{
				flag = 0;
			}
		}
	//	printf("cnt:%d\n",cnt);
		if(cnt>max_cnt){
			max_cnt = cnt;
		}
		if(max_cnt == max_c){
			break;
		}else{
			p = p+1;
			if(p>max){
				break;
			}else{
				XG(n,p);
				cnt=0;
				flag = 0;
			}
		}
		
	}
	printf("%d",max_cnt);
	
	
	return 0;
}

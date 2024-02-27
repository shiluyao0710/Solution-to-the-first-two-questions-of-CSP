#include<stdio.h>


int a[100000001];
int b[100001];
int y[100001];
int r[100001];
struct C{
	int cnt;
	int num;
}c[100001];

int Predict(int num,int m){
	int i;
	int cnt=0;
	int pd;
	for(i=1;i<=m;i++){
		if(y[i] < num){
			pd = 0;
			if(pd == r[i]){
				cnt++;
			}
		}else{
			pd = 1;
			if(pd == r[i]){
				cnt++;
			}
		}
	}
	
	return cnt;
}

int main(){
	
	int i,j,m;
	int max_cnt,max_num;
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d %d",&y[i],&r[i]);
		a[y[i]] = 1;
	}
	j = 0;
	for(i=0;i<100000001;i++){
		if(a[i] == 1){
			b[j++] = i;
		}
	}
//	for(i=0;i<j;i++){
//		printf("%d ",b[i]);
//	}
//	printf("-------------\n");
	for(i=0;i<j;i++){
		c[i].cnt = Predict(b[i],m);
		c[i].num = b[i]; 
	}
//	for(i=0;i<j;i++){
//		printf("%d %d\n",c[i].num,c[i].cnt);
//	}
	
	max_cnt = -1;
	max_num = -1;
	for(i=0;i<j;i++){
		if(c[i].cnt >= max_cnt){
			max_cnt = c[i].cnt;
			max_num = c[i].num;
		}
	}
	printf("%d",max_num);
	
	
	
	
	return 0;
}

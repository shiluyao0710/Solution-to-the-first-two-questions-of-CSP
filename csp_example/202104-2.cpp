#include<stdio.h>

int a[601][601];

int main(){
	
	int i,j,k,l;
	int n,r,t,L;
	int cnt;
	int sum_s;
	double sum;
	int i_r,i_r2,j_r,j_r2;
	scanf("%d %d %d %d",&n,&L,&r,&t);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	sum_s = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum = 0;
			cnt = 0;
			if(i-r<0){
				i_r = 0;
			}else{
				i_r = i-r;
			}
			if(i+r>n-1){
				i_r2 = n-1;
			}else{
				i_r2 = i+r;
			}
			if(j-r<0){
				j_r = 0;
			}else{
				j_r = j-r;
			}
			if(j+r>n-1){
				j_r2 = n-1;
			}else{
				j_r2 = j+r;
			}
			for(k=i_r;k<=i_r2;k++){
				for(l=j_r;l<=j_r2;l++){
					sum += a[k][l];
					cnt = (i_r2 - i_r + 1) * (j_r2 - j_r +1);
				}
			}
			if((sum / cnt) <= t){
				sum_s++;
			}
		}
	}

	printf("%d",sum_s);
	
	return 0;
}

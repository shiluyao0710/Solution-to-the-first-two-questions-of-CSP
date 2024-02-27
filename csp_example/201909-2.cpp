#include<stdio.h>

int a[1001][1001];	
int flag_l[1001];
int main(){
	
	int N;
	int i,j;
	int sum,sum_D,sum_T,sum_E;
	sum = sum_T = sum_D = sum_E = 0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=N;i++){
		for(j=a[i][0];;j--){
			if(a[i][j]>0){
				sum_T += a[i][j];
				break;
			}
			sum_T += a[i][j];
		}
	}

	for(i=1;i<=N;i++){
		sum = a[i][1];
		for(j=2;j<=a[i][0];j++){
			if(a[i][j] > 0){
				if(sum != a[i][j]){
					flag_l[i]++;
					break;
				}else{
					sum = 0;
				}
			}
			sum += a[i][j];
		}
	}
	for(i=1;i<=N;i++){
		if(flag_l[i] >0){
			sum_D++;
		}
	}
	
	if(flag_l[1]>0 && flag_l[N-1]>0 && flag_l[N]>0){
		sum_E++;
	}
	if(flag_l[1]>0 && flag_l[2]>0 && flag_l[N]>0){
		sum_E++;
	}
	for(i=1;i<=N;i++){
		if(flag_l[i]>0 && flag_l[i+1]>0 && flag_l[i+2]>0){
			sum_E++;
		}
	}
	
	
	
	printf("%d %d %d",sum_T,sum_D,sum_E);
	return 0;
}

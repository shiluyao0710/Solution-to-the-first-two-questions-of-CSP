#include<stdio.h>

struct Time{
	int x;
	int y;
}time[1001];

struct Per{
	int flag_j;
	int flag_t;
}per[21];
int main(){
	
	int i,j;
	int n,k,t,x_l,y_d,x_r,y_u;
	int sum_t=0;
	int cnt_j,cnt_t;
	cnt_j = cnt_t = 0;
	scanf("%d %d %d %d %d %d %d",&n,&k,&t,&x_l,&y_d,&x_r,&y_u);
	
	for(i=0;i<n;i++){
		sum_t=1;
		per[i].flag_j = 0;
		per[i].flag_t = 0;
		for(j=0;j<t;j++){
			scanf("%d %d",&time[j].x,&time[j].y);
		}
		for(j=0;j<t;j++){
			if(j == t-1){
				if(time[j].x >= x_l && time[j].x <= x_r && time[j].y >= y_d && time[j].y <= y_u){
					per[i].flag_j = 1;
				}
			}else{
				if(time[j].x >= x_l && time[j].x <= x_r && time[j].y >= y_d && time[j].y <= y_u){
					per[i].flag_j = 1;
				}
				if(time[j].x >= x_l && time[j].x <= x_r && time[j].y >= y_d && time[j].y <= y_u &&
					time[j+1].x >= x_l && time[j+1].x <= x_r && time[j+1].y >= y_d && time[j+1].y <= y_u
				){
					sum_t++;
				}else{
					sum_t = 1;
				}
				if(sum_t == k){
					per[i].flag_t = 1;
				//	printf("%d %d\n",i,sum_t);
					break;
				}
			}
		}
		if(per[i].flag_t == 1){
			cnt_t++;
		}
		if(per[i].flag_j == 1){
			cnt_j++;
		}
	}
	
	printf("%d\n",cnt_j);
	printf("%d\n",cnt_t);
	
	return 0;
}

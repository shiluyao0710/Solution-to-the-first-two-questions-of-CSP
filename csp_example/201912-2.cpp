#include<stdio.h>

struct Rubb{
	int x;
	int y;
	int flag;
	int flag_x;
	int flag_y;
	int score;
	int cnt;
}r[1001];

int score[5];

int main(){
	
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&r[i].x,&r[i].y);
		r[i].flag = 0;
		r[i].score = 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(r[j].x == (r[i].x-1) && r[j].y == r[i].y){
				r[i].cnt++;
			}
			if(r[j].x == (r[i].x+1) && r[j].y == r[i].y){
				r[i].cnt++;
			}
			if(r[j].y == (r[i].y-1) && r[j].x == r[i].x){
				r[i].cnt++;
			}
			if(r[j].y == (r[i].y+1) && r[j].x == r[i].x){
				r[i].cnt++;
			}
			if(r[i].cnt == 4){
				r[i].flag = 1;
				r[i].flag_x = r[i].x;
				r[i].flag_y = r[i].y;
				for(k=0;k<n;k++){
					if(r[k].x == (r[i].x + 1) && r[k].y == (r[i].y+1)){
						r[i].score++;
					}
					if(r[k].x == (r[i].x + 1) && r[k].y == (r[i].y-1)){
						r[i].score++;
					}
					if(r[k].x == (r[i].x - 1) && r[k].y == (r[i].y+1)){
						r[i].score++;
					}
					if(r[k].x == (r[i].x - 1) && r[k].y == (r[i].y-1)){
						r[i].score++;
					}
				//	printf("%d %d %d\n",i,r[i].flag,r[i].score);
				}
			//	printf("%d %d %d\n",i,r[i].flag,r[i].score);
				break; 
			}
		}
	}
	for(i=0;i<n;i++){
		if(r[i].flag == 1){
			score[r[i].score]++;
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",score[i]);
	}
	
	return 0;
}

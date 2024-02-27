#include<stdio.h>

struct Dot{
	int x;
	int y;
	char type;
}dot[1001];

struct Line{
	int c_0;
	int c_1;
	int c_2;
	int flag;
}line[21];

int main(){
	int i,j;
	int n,m;
	double x,y;
	double cx,c0,c1;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d %d %c",&dot[i].x,&dot[i].y,&dot[i].type);
	}
	for(i=0;i<m;i++){
		scanf("%d %d %d",&line[i].c_0,&line[i].c_1,&line[i].c_2);
		line[i].flag = 1;
	}
	
	for(i=0;i<m;i++){
		cx = (float)line[i].c_0 / line[i].c_1;
		c0 = (float)line[i].c_0 / line[i].c_2;
		c1 = (float)line[i].c_1 / line[i].c_2;
		if(line[i].c_2 == 0){
			x = -cx;
			if(dot[0].x > x){
				for(j=1;j<n;j++){
					if(dot[j].x > x){
						if(dot[j].type != dot[0].type){
							line[i].flag = 0;
						}
					}else{
						if(dot[j].type == dot[0].type){
							line[i].flag = 0;	
						}
					}
				}
			}else{
				for(j=1;j<n;j++){
					if(dot[j].x < x){
						if(dot[j].type != dot[0].type){
							line[i].flag = 0;
						}
					}else{
						if(dot[j].type == dot[0].type){
							line[i].flag = 0;	
						}
					}
				}
			}
		}else{
			y = -c0 - c1*dot[0].x;
			if(dot[0].y > y){
				for(j=1;j<n;j++){
					y = -c0 - c1*dot[j].x;
					if(dot[j].y > y){
						if(dot[j].type != dot[0].type){
							line[i].flag = 0;
						}
					}else{
						if(dot[j].type == dot[0].type){
							line[i].flag = 0;	
						}
					}
				}
			}else{
				for(j=1;j<n;j++){
					y = -c0 - c1*dot[j].x;
					if(dot[j].y < y){
						if(dot[j].type != dot[0].type){
							line[i].flag = 0;
						}
					}else{
						if(dot[j].type == dot[0].type){
							line[i].flag = 0;	
						}
					}
				}
			}
		}
	}
	for(i=0;i<m;i++){
		if(line[i].flag == 1){
			printf("Yes\n");
		}
		if(line[i].flag == 0){
			printf("No\n");
		}
	}
	
	
	return 0;
}

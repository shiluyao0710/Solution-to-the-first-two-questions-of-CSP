#include<stdio.h>

struct Tree{
	int x;
	int y;
}tree[1001];

int A[10001][10001];
int B[51][51];

int main(){
	int i,j,k,l;
	int n,L,S;
	int cnt;
	int flag;
	int flag_b=0;
	
	scanf("%d %d %d",&n,&L,&S);
	for(i=0;i<n;i++){
		scanf("%d %d",&tree[i].x,&tree[i].y);
		A[tree[i].x][tree[i].y] = 1;
	}
	for(i=S;i>=0;i--){
		for(j=0;j<=S;j++){
			scanf("%d",&B[i][j]);
			if(B[i][j] == 1){
				flag_b = 1;
			}
		}
	}
	
	cnt = 0;
	
	if(flag_b == 1){
		for(i=0;i<n;i++){
			flag = 0;
			for(k=0;k<=S;k++){
				for(l=0;l<=S;l++){
					if((tree[i].x)+k >L ||(tree[i].y)+l>L){
						flag = 1;
						break;
					}else{
						if(B[k][l] == 1){
							if(A[(tree[i].x)+k][(tree[i].y)+l] == 1){
								continue;
							}else{
								flag = 1;
								break;
							}
						}else{
							if(A[(tree[i].x)+k][(tree[i].y)+l] == 1){
								flag = 1;
								break;
							}
						}
					}
					
				}
			}
			if(flag == 0){
				cnt++;
				//printf("%d",i);
			}
		}
	}else{
		for(i=0;i<=L-S;i++){
			for(j=0;j<=L-S;j++){
				flag = 0;
				for(k=0;k<=S;k++){
					for(l=0;l<=S;l++){
						if(B[k][l] == 1){
							if(A[i+k][j+l] == 1){
								continue;
							}else{
								flag = 1;
								break;
							}
						}else{
							if(A[i+k][j+l] == 1){
								flag = 1;
								break;
							}
						}
					}
				}
				if(flag == 0){
					cnt++;
				}
			}
		}
	}
	
	
	printf("%d",cnt);
	
	return 0;
}

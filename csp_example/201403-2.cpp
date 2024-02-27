#include<stdio.h>

struct CK{
	int x1;
	int y1;
	int x2;
	int y2;
	int xh;
} ck[11];



int main(){
	int i,j;
	int N,M;
	int x,y;
	int k=0;
	int c[11];
	struct CK temp;
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%d %d %d %d",&ck[i].x1,&ck[i].y1,&ck[i].x2,&ck[i].y2);
		ck[i].xh = i+1;
	}
	for(i=0;i<M;i++){
		scanf("%d %d",&x,&y);
		for(j=N-1;j>=0;j--){
			if(x>=ck[j].x1 && x <=ck[j].x2 && y>=ck[j].y1 && y<=ck[j].y2){
			//	printf("%d\n",ck[j].xh);
				c[k++] = ck[j].xh;
				temp = ck[j];
				ck[j] = ck[N-1];
				ck[N-1] = temp;
				break;
			}
			if(j == 0){
			//	printf("IGNORED\n");
				c[k++] = 20;
			}
		}
	}
	for(i=0;i<k;i++){
		if(c[i] == 20){
			printf("IGNORED\n");
		}else{
			printf("%d\n",c[i]);
		}
	}
	
	return 0;
}

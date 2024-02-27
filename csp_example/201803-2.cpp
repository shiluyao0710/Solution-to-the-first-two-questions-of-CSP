#include<stdio.h>

struct Ball{
	int pos;
	char fx;
	int xh;
}ball[101];

int main(){
	int i,j,k;
	int n,L,t;
	struct Ball temp;
	scanf("%d %d %d",&n,&L,&t);
	for(i=1;i<=n;i++){
		scanf("%d",&ball[i].pos);
		ball[i].fx = 'R';
		ball[i].xh = i;
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			if(ball[j].pos > ball[j+1].pos){
				temp = ball[j];
				ball[j] = ball[j+1];
				ball[j+1] = temp;
			}
		}
	}
	
	
	
	for(j=1;j<=t;j++){
		for(i=1;i<=n;i++){
			if(ball[i].pos != ball[i+1].pos){
				if(ball[i].fx == 'R'){
					if(ball[i].pos == L){
						ball[i].fx = 'L';
						ball[i].pos--;
					}else{
						ball[i].pos++;
					}
					
					
				}else if(ball[i].fx == 'L'){
					if(ball[i].pos == 0){
						ball[i].fx = 'R';
						ball[i].pos++;
					}else{
						ball[i].pos--;
					}
				}
			}else if(ball[i].pos == ball[i+1].pos){
				if(ball[i].fx == 'R'){
					ball[i].fx = 'L';
					ball[i].pos--;
					ball[i+1].fx = 'R';
				}else if(ball[i].fx == 'L'){
					ball[i].fx = 'R';
					ball[i].pos++;
					ball[i+1].fx = 'L';
				}
			}
		}
	//	for(k=1;k<=n;k++){
	//		printf("%d ",ball[k].pos);
	//	}
	//	printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			if(ball[j].xh > ball[j+1].xh){
				temp = ball[j];
				ball[j] = ball[j+1];
				ball[j+1] = temp;
			}
		}
	}
	
	for(i=1;i<=n;i++){
		printf("%d ",ball[i].pos);
	}
	return 0;
}

#include<stdio.h>



int main(){
	int i;
	int n,m;
	int BH[101];
	int TS[101];
	int start[101];
	int end[101];
	int EDNS[101];
	int flag =0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&BH[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&TS[i]);
	}
	
	for(i=0;i<m;i++){
		if(BH[i] == 0){
			start[i] = 1;
			end[i] = n + 1 - TS[i];
			EDNS[i] = n + 1 - TS[i];
		}else{
			start[i] = TS[BH[i]-1] + 1;
			end[i] = TS[BH[i]-1]+TS[i];
			TS[i] = end[i];
			EDNS[i] = n+1-end[i]+start[i];
		} 
		
	}
	
	for(i=0;i<m;i++){
		if(end[i]>n){
			flag = 1;
		}
	}
	
	if(flag == 0){
		for(i=0;i<m;i++){
			printf("%d ",start[i]);
		}
		printf("\n");
		for(i=0;i<m;i++){
			printf("%d ",EDNS[i]);
		}
	}else{
		for(i=0;i<m;i++){
			printf("%d ",start[i]);
		}
	}

	
	return 0;
}

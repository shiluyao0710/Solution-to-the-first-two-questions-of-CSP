#include<stdio.h>
#include<string.h>

struct KEY{
	int value;
	int flag;
}key[1001];

struct Teacher{
	int key;
	int start;
	int use_time;
	int end;
}teacher[1001];

int pos[1001];

int main(){
	int i,j,k,t;
	int max,min;
	int l;
	int N,K;
	int p,q,m;
	int temp;
	scanf("%d %d",&N,&K);
	for(i=1;i<=N;i++){
		key[i].value = i;
		key[i].flag = 1;
	}
	max = -1;
	min = 1111111;
	for(i=1;i<=K;i++){
		scanf("%d %d %d",&teacher[i].key,&teacher[i].start,&teacher[i].use_time);
		teacher[i].end = teacher[i].start + teacher[i].use_time;
		if(teacher[i].start<min){
			min = teacher[i].start;
		}
		if(teacher[i].end >max){
			max = teacher[i].end;
		}
		
	}
//	printf("%d %d\n",max,min);
	m = 0;
	for(t=min;t<=max;t++){
		memset(pos,0,sizeof(pos));
		for(i=1;i<=K;i++){
			if(t == teacher[i].end){
				pos[m++] = teacher[i].key;
			}
		}
//		for(p=0;p<m;p++){
//			printf("%d ",pos[p]);
//		}
//		printf("before \n");
		for(p=0;p<m;p++){
			for(q=0;q<m-p-1;q++){
				if(pos[q]>pos[q+1]){
					temp = pos[q];
					pos[q] = pos[q+1];
					pos[q+1] = temp;
				}
			}
		}
//		for(p=0;p<m;p++){
//			printf("%d ",pos[p]);
//		}
//		printf("after \n");
		for(p=0;p<m;p++){
			for(j=1;j<=N;j++){
				if(key[j].value == 0){
					key[j].value = pos[p];
				//	key[teacher[i].key].flag = 1;
					break;
				}
			}
		}
		
//		for(i=1;i<=N;i++){
//			printf("%d ",key[i].value);
//		}
//		printf("h:%d\n",t);
		
		for(i=1;i<=K;i++){
			if(t == teacher[i].start){
				for(l=1;l<=N;l++){
					if(key[l].value == teacher[i].key){
						key[l].value = 0;
						//key[l].flag = 0;
					}
				}
				
			//	key[teacher[i].key].value = teacher[i].key;
			}
		}
//		for(i=1;i<=N;i++){
//			printf("%d ",key[i].value);
//		}
//		printf("n:%d\n",t);
		
	}
	
	for(i=1;i<=N;i++){
		printf("%d ",key[i].value);
	}
	
	
	return 0;
}

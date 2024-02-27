#include<stdio.h>
#include<math.h>
# define N 201

int x[N],y[N];

struct JianCe{
	int num;
	int dis;
};


//int cmp(const void *a,const void *b){
//	return (*(JianCe*)a).dis - (*(JianCe*)b).dis;
//}

//int MIN(int a,int b){
//	return a<b?a:b;
//}

int main(){
	int n,X,Y;
	int i,j;
	struct JianCe temp;
	struct JianCe jc[N];
	scanf("%d %d %d",&n,&X,&Y);
	for(i=1;i<=n;i++){
		scanf("%d %d",&x[i],&y[i]);
		jc[i].num = i;
		jc[i].dis = (y[i] -Y) * (y[i] -Y) + (x[i]-X) * (x[i]-X);
	}
	//qsort(jc,n,sizeof(jc[0]),cmp);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			if(jc[j+1].dis < jc[j].dis){
				temp = jc[j+1];
				jc[j+1] = jc[j];
				jc[j] = temp;
			}
		}
	}
	//for(i=0;i<n;i++){
	//	printf("%d %d\n",jc[i].num,jc[i].dis);
	//}
	for(i=1;i<=3;i++){
		printf("%d\n",jc[i].num);
	}
	
//	i=3;
//	while(jc[2].dis == jc[i].dis){
//		jc[2].num = MIN(jc[2].num,jc[i].num);
//		i++;
//	}
	return 0;
}

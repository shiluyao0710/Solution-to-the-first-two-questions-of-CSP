#include<stdio.h>

//#define Max(a,b) (((a)>(b))?(a):(b))
//#define Min(a,b) (((a)<(b))?(a):(b))


int Max(int a, int b){
	return a>b?a:b;
}
int Min(int a, int b){
	return a<b?a:b;
}



int main(){
	
	int n;
	int a,b;
	int i;
	int x1,x2,y1,y2;
	int x,y,sum;
	sum = 0;
	scanf("%d %d %d",&n,&a,&b);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		x = Min(a,x2) - Max(0,x1);
		y = Min(b,y2) - Max(0,y1);
		if(x>0 && y>0){
			sum += x * y;
		}
	}
	printf("%d",sum);
	
	return 0;
}

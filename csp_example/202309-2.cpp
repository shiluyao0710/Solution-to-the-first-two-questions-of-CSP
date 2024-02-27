#include<stdio.h>
#include<math.h>

struct number{
	int op1;
	int op2;
	double x;
	double y;
};


int main(){
	
	int m,n;
	int i,j;
	int n1[100001];
	double n2[100001];
	struct number num[100001];
	double m1[100001],m2[100001];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d %lf",&n1[i],&n2[i]);
	}
	for(i=1;i<=m;i++){
		scanf("%d %d %lf %lf",&num[i].op1,&num[i].op2,&num[i].x,&num[i].y);
		m1[i] = num[i].x;
		m2[i] = num[i].y;
		for(j=num[i].op1;j<=num[i].op2;j++){
			if(n1[j]==1){
				num[i].x = m1[i] * n2[j];
				num[i].y = m2[i] * n2[j];
				m1[i] = num[i].x;
				m2[i] = num[i].y;
			}else if(n1[j]==2){
				num[i].x = m1[i] * cos(n2[j]) - m2[i] * sin(n2[j]);
				num[i].y = m1[i] * sin(n2[j]) + m2[i] * cos(n2[j]);
				m1[i] = num[i].x;
				m2[i] = num[i].y;
			}
		}
		
	}
	for(i=1;i<=m;i++){
		printf("%f %f\n",m1[i],m2[i]);
	}
	
	return 0;
}

#include<stdio.h>
#include<math.h>


double DValue(int x,int k,double i){
	double ret;
	ret = x * (pow((1+i),-k));
	return ret;
}



int main(){
		
	double i;
	int n;
	int j;
	int a[51];
	double SumValue=0;
	
	scanf("%d %lf",&n,&i);
	
	for(j=0;j<=n;j++){
		scanf("%d",&a[j]);
		SumValue += DValue(a[j],j,i);
	}
	printf("%f",SumValue);
	
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
	
	int i;
	int n;
	int a[1001];
	double aver;
	double sum=0;
	double D[1001];
	double FC;
	double sumD=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	aver = sum / n;
	
	for(i=0;i<n;i++){
		sumD += pow((a[i] - aver),2);
	}
	FC = sumD / n;
	
	for(i=0;i<n;i++){
		D[i] = (a[i] - aver) / (pow(FC,0.5));
		printf("%lf\n",D[i]);
	}
	
	
	return 0;
}

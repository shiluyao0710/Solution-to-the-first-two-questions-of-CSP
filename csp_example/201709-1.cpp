#include<stdio.h>

int main(){
	int N;
	int San,Wu;
	San = Wu = 0;
	int sum=0;
	scanf("%d",&N);
	N /= 10;
	if(N/5 != 0){
		Wu = N/5;
		N -= Wu*5;
		if(N/3 != 0){
			San = N/3;
			N -= San*3;
			sum = Wu*2 + San*1 + Wu*5 + San*3 +N;
		}else{
			sum = Wu*2 + N + Wu*5;
		}
	}else{
		if(N/3 == 1){
			sum = 1 + N;
		}else{
			sum = N;
		}
	}
	printf("%d\n",sum);

	return 0;
}

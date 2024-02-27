#include<stdio.h>

int main(){
	int n;
	int i;
	int cnt=0;
	int A,B,C,D;
	A = B = C = D = 0;
	scanf("%d",&n);
	for(i=1;;i++){
		if(i % 7 == 0 || i % 10 == 7 || i / 10 % 10 == 7 || i / 10 /10 %10 == 7 || i / 10 / 10 / 10 % 10 == 7){
			if(i % 4 == 1){
				A++;	
			}else if(i % 4 == 2){
				B++;
			}else if(i % 4 == 3){
				C++;
			}else if(i % 4 == 0){
				D++;
			}
		}else{
			cnt++;
		}
		if(cnt == n){
			break;
		}
	}
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);
	printf("%d\n",D);
	return 0;
}

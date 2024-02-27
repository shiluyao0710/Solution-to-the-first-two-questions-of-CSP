#include<stdio.h>

int main(){
	int flag = 0;
	int sum=0;
	int num;
	
	while(1){
		scanf("%d",&num);
		if(num == 0){
			break;
		}
		if(num == 1){
			sum += 1;
			flag = 0;
		}
		if(num == 2){
			flag += 2;
			sum += flag;
		}
	}
	printf("%d",sum);
	
	return 0;
}

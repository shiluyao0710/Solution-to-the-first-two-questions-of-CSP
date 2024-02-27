#include<stdio.h>

int main(){
	
	int i;
	int k,sum;
	sum = 0;
	k = 1;
	char a[14];
	char flag = '0';
	for(i=0;i<13;i++){
		scanf("%c",&a[i]);
		if(a[i] == '-'){
			continue;
		}else{
			if(i == 12){
				break;
			}else{
				sum += (a[i] -'0') * k;
				k++;	
			}
		}
	}
	sum %= 11;
	
	if(sum == 10){
		if(a[12] == 'X'){
			printf("Right");
		}else{
			a[12] = 'X';
			for(i=0;i<13;i++){
				printf("%c",a[i]);
			}
		}
	}else{
		if(a[12] == (sum + '0')){
			printf("Right");
		}else{
			a[12] = sum + '0';
			for(i=0;i<13;i++){
				printf("%c",a[i]);
			}
		}
	}
	
	return 0;
}

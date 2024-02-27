#include<stdio.h>

int main(){
	char a[8];
	char op[3];
	int num[4];
	int i,j,k,l,m;
	int n;
	int flag[10001];
	int sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum = 0;
		scanf("%s",a);
		for(j=0;j<4;j++){
			num[j] = a[2*j]-'0';
		}
		for(j=0;j<3;j++){
			op[j] = a[2*j+1];
		}
		k=3;
		for(j=0;j<k;j++){
			if(op[j] == 'x' || op[j] == '/'){
				if(op[j] == 'x'){
					num[j] = num[j] * num[j+1];
				}else{
					num[j] = num[j] / num[j+1];
				}
				for(m=j+1;m<k;m++){
					num[m] = num[m+1];
					op[m-1] = op[m];
				}
					j--;
					k--;
			}
		}
		sum = num[0];
		for(j=0;j<k;j++){
			if(op[j] == '+'){
				sum = num[j]+num[j+1];
				num[j+1] = sum;
				
			}else{
				sum = num[j]-num[j+1];
				num[j+1] = sum;
			}
			
		}
		if(sum == 24){
			flag[i] = 1;
//			printf("%d %d\n",i,sum);
		}else{
			flag[i] = 0;
		}
		
	}
	for(i=0;i<n;i++){
		if(flag[i] == 1){
			printf("Yes\n");
		}else {
			printf("No\n");
		}
	}
	
	return 0;
}




#include<stdio.h>

int main(){
	int i,j;
	int y,d;
	int date_y,date_d;
	int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int sum,dd;
	sum = dd = 0;
	scanf("%d",&y);
	scanf("%d",&d);
	if((y%4 == 0 && y %100 !=0) || (y%400 == 0)){
		m[2] = 29;
	}
	for(i=1;i<13;i++){
		sum += m[i];
		if(d <= sum){
			date_y = i;
			for(j=1;j<i;j++){
				dd += m[j];
			}
			date_d = d-dd;			
			break;
		}
	}
	printf("%d\n",date_y);
	printf("%d\n",date_d);
	
	
	return 0;
}

#include<stdio.h>

int a[501][501];

int main(){
	
	int i,j;
	int n;
	int k;
	int x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	i = j = k = 0;
	for(x=1;x<=(2*n - 1);x++){
		if(x % 2 == 0){
			if(x<=n){
				for(y=1;y<=x;y++){
					printf("%d ",a[i][j]);
					if(j-1<0 && i+1 <n ){
						i++;
					}else{
						if(i+1 == n){
							j++;
						}else{
							i++;
							j--;
						}
						
					}
					
				}
			}else{
				for(y=1;y<=(2*n - x);y++){
					printf("%d ",a[i][j]);
					if(j-1<0 && i+1 <n){
						i++;
					}else{
						if(i+1 == n){
							j++;
						}else{
							i++;
							j--;
						}
					}
					
				}
			}
		}else{
			if(x<=n){
				for(y=1;y<=x;y++){
					printf("%d ",a[i][j]);
					if(i-1 < 0 && j+1 <n){
						j++;
					}
					else{
						if(j+1 == n){
							i++;
						}else{
							i--;
							j++;
						}
						
					}
				}
			}else{
				for(y=1;y<=(2*n - x);y++){
					printf("%d ",a[i][j]);
					if(i-1 < 0 && j+1 <n){
						j++;
					}else{
						if(j+1 == n){
							i++;
						}else{
							i--;
							j++;
						}
					}

				}
			}
		} 
		

	}
	
	
	return 0;
}

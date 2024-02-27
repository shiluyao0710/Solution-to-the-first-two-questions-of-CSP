#include<stdio.h>
#include<math.h>

int main(){
	int i,j,n,m;
	int p,q;
	int temp;
	int cnt = 0;
	int pos[1001];
	scanf("%d",&n);
	scanf("%d",&m);	
	for(i=1;i<=n;i++){
		pos[i] = i;
	}
	for(j=0;j<m;j++){
		scanf("%d %d",&p,&q);
		if(q<0){
			cnt = 0;
			for(i=1;i<=n;i++){
				if(pos[i] == p){
					temp = pos[i];
					while(i--){
						pos[i+1] = pos[i];
						cnt++;
						if(cnt == abs(q)){
							break;
						}
					}
					pos[i] = temp;
				}
			}
		}else{
			cnt = 0;
			for(i=1;i<=n;i++){
				if(pos[i] == p){
					temp = pos[i];
					while(i++){
						pos[i-1] = pos[i];
						cnt++;
						if(cnt == abs(q)){
							break;
						}
					}
					pos[i] = temp;
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%d ",pos[i]);
	}
	
	return 0;
}

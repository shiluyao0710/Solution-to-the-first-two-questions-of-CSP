#include<stdio.h>
#include<string.h>


#define M 8
#define N 100
char s[M+1];
int pd[N+1];
struct BuShu{
	int cnt;
	char b[M*M+1];
}B[N+1];



int main(){
	
	int n,i,j;
	int m,k=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		B[i].b[0] = '\0';
		B[i].cnt = 1;
		
		for(j=0;j<8;j++){
			scanf("%s",s);
			strcat(B[i].b,s);
		}
		
		for(j=0;j<=i;j++){
			if(strcmp(B[j].b,B[i].b) == 0){
				if(j!=i){
					B[i].cnt++;
				}
			}
		}
		
		pd[m]=B[i].cnt;
		m++;
		
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",pd[i]);
	}
		
	
	
	return 0;
}

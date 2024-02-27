#include<stdio.h>

struct SAT{
	int sy;
	int i;
}sat[20];

int seat[20][5];
int ticket_seat[20][5];
int p[101];

int main(){
	
	int i,j,k;
	int n,w;
	int FLAG = 0;
	int Buy_Flag = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<20;i++){
		sat[i].sy = 5;
		sat[i].i = i;
		for(j=0;j<5;j++){
			seat[i][j] = 0;
		}
	}
	for(i=0;i<n;i++){
		Buy_Flag = 0;
		if(p[i] == 1 && FLAG == 0){
			for(j=0;j<20;j++){
				for(k=0;k<5;k++){
					if(seat[j][k] == 0){
						seat[j][k] = 1;
						sat[j].i = j;
						sat[j].sy -= 1;
						ticket_seat[i][0] = (j*5)+k+1;
						Buy_Flag = 1;
						break;
					}
				}
				if(Buy_Flag == 1){
					break;
				}
			}
		}
		else if(p[i] == 2 && FLAG == 0){
			for(j=0;j<20;j++){
				if(sat[j].sy>=2){
					for(k=0;k<5;k++){
						if(seat[j][k] == 0 && seat[j][k+1] == 0){
							seat[j][k] = 1;
							seat[j][k+1] = 1;
							sat[j].i = j;
							sat[j].sy -= 2;
							ticket_seat[i][0] = (j*5)+k+1;
							ticket_seat[i][1] = (j*5)+k+2;
							Buy_Flag = 1;
						//	printf("p2:%d  %d\n",ticket_seat[i][0],ticket_seat[i][1]);
							break;
						}
					}
				}
				if(Buy_Flag == 1){
					break;
				}
			}
			if(j == 20){
				FLAG = 1;
			}
		}else if(p[i] == 3 && FLAG == 0){
			for(j=0;j<20;j++){
				if(sat[j].sy>=3){
					for(k=0;k<5;k++){
						if(seat[j][k] == 0 && seat[j][k+1] == 0 && seat[j][k+2] == 0){
							seat[j][k] = 1;
							seat[j][k+1] = 1;
							seat[j][k+2] = 1;
							sat[j].i = j;
							sat[j].sy -= 3;
							ticket_seat[i][0] = (j*5)+k+1;
							ticket_seat[i][1] = (j*5)+k+2;
							ticket_seat[i][2] = (j*5)+k+3;
							Buy_Flag = 1;
							break;
						}
					}
				}
				if(Buy_Flag == 1){
					break;
				}
			}
			if(j == 20){
				FLAG = 1;
			}
			
		}else if(p[i] == 4 && FLAG == 0){
			for(j=0;j<20;j++){
				if(sat[j].sy>=4){
					for(k=0;k<5;k++){
						if(seat[j][k] == 0 && seat[j][k+1] == 0 && seat[j][k+2] == 0 && seat[j][k+3] ==0){
							seat[j][k] = 1;
							seat[j][k+1] = 1;
							seat[j][k+2] = 1;
							seat[j][k+3] = 1;
							sat[j].i = j;
							sat[j].sy -= 4;
							ticket_seat[i][0] = (j*5)+k+1;
							ticket_seat[i][1] = (j*5)+k+2;
							ticket_seat[i][2] = (j*5)+k+3;
							ticket_seat[i][3] = (j*5)+k+4;
							Buy_Flag = 1;
						//	printf("p4:%d  %d %d %d\n",ticket_seat[i][0],ticket_seat[i][1],ticket_seat[i][2],ticket_seat[i][3]);
							break;
						}
					}
				}
				if(Buy_Flag == 1){
					break;
				}
			}
			if(j == 20){
				FLAG = 1;
			}
		}else if(p[i] == 5 && FLAG == 0){
			for(j=0;j<20;j++){
				if(sat[j].sy>=5){
					for(k=0;k<5;k++){
						if(seat[j][k] == 0 && seat[j][k+1] == 0 && seat[j][k+2] == 0 && seat[j][k+3] ==0 && seat[j][k+4] == 0){
							seat[j][k] = 1;
							seat[j][k+1] = 1;
							seat[j][k+2] = 1;
							seat[j][k+3] = 1;
							seat[j][k+4] = 1;
							sat[j].i = j;
							sat[j].sy -= 5;
							ticket_seat[i][0] = (j*5)+k+1;
							ticket_seat[i][1] = (j*5)+k+2;
							ticket_seat[i][2] = (j*5)+k+3;
							ticket_seat[i][3] = (j*5)+k+4;
							ticket_seat[i][4] = (j*5)+k+5;
							Buy_Flag = 1;
							//printf("p5:%d  %d %d %d %d\n",ticket_seat[i][0],ticket_seat[i][1],ticket_seat[i][2],ticket_seat[i][3],ticket_seat[i][4]);
							break;
						}
					}
				}
				if(Buy_Flag == 1){
					break;
				}
			}
			if(j == 20){
				FLAG = 1;
			}
		}
		if(FLAG == 1){
			for(w=0;w<p[i];w++){
				Buy_Flag = 0;
				for(j=0;j<20;j++){
					for(k=0;k<5;k++){
						if(seat[j][k] == 0){
							seat[j][k] = 1;
							sat[j].i = j;
							sat[j].sy -= 1;
							ticket_seat[i][w] = (j*5)+k+1;
							Buy_Flag = 1;
							break;
						}
					}
					if(Buy_Flag == 1){
						break;
					}
				}
			}
		}
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			if(ticket_seat[i][j]>0){
				printf("%d ",ticket_seat[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

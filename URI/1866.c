#include<stdio.h>

int main(){
	int i=0,C, N, S=0,j;

	scanf("%d",&C);

while(i<C){
	scanf("%d",&N);

	for(j=0;j<N;j++){
		if(S==0){
		S+=1;
		}else{
		S-=1;
		}
	}
printf("%d\n",S);
i++;
S=0;
}


return 0;}

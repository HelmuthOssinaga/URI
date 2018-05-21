#include<stdio.h>

void Matriz(int n){
	int aux, i, j, in;

	if(n==1){
		printf("%d\n",n);
	}else{
		in =1;
		aux = in;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d", aux);
			aux*=2;

			if(j<n){
				printf(" ");
			}
		}
			in*=2;
			aux=in;
			printf("\n");
	}

	}

}

int main(){
	int x;

	x=1;
	while(x!=0){
		scanf("%d",&x);
		Matriz(x);
		printf("\n");
}


return 0;}

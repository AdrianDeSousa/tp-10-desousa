#include <stdio.h>
#include <stdlib.h>
void funcion(int nz[12][19]){
 int i,j;
    	for(i=0;i<12;i++){
		for(j=0;j<19;j++){
			printf("para fila %d y columna %d ingrese un num: ",i+1,j+1);
			scanf("%d",&nz[i][j]);
			if(nz[i][j]<0){nz[i][j]=0;}
		}
	}
}
void ns(int nz[12][19]){
    int i,j;
    	for(i=0;i<12;i++){
		for(j=0;j<19;j++){printf("%d  ",nz[i][j]);
		}printf("\n");
	}
}
int main(){
	int nz[12][19],i,j;
    funcion(nz);
    ns(nz);
}
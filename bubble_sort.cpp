#include<stdio.h>

main(){
	int vet_bubble[10]={10,9,8,7,6,5,4,3,2,1}, indice, i;
	int tam = 10;
	for(i=1;i<=tam-1;i++){	
		for(indice=0;indice<tam-1;indice++){
			if (vet_bubble[indice]>vet_bubble[indice+1]){
				int aux = vet_bubble[indice];
				vet_bubble[indice] = vet_bubble[indice+1];
				vet_bubble[indice+1] = aux;
			}
			printf("\n");
			int i;
			for(i=0;i<=tam-1;i++){
				printf(" %d",vet_bubble[i]);
			}
		}
		printf("\n\nResultado da etapa %d\n",i);
		for(indice=0;indice<=tam-1;indice++){
			printf(" %d",vet_bubble[indice]);
		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 2000

struct contas{
	char nome[14];
	char tipo;
	float credito, debito;
	int ordem;
};

struct contas conta[max];
int main(){
	int n=1,i,a,tam,j;
	char b;
	while(n){
		printf("Quantidades de contas a serem inseridas: ");
		scanf("%i", &n);
		for(i=0;i<n;i++){
			printf("\nCódigo da Conta com 14 dígitos: ");
			scanf("%s",&conta[i].nome);
			printf("Tipo da Conta (A/S): ");
			scanf("%s",&conta[i].tipo);
			if(conta[i].tipo == 'S'){
				printf("Credito:");
				scanf("%f",&conta[i].credito);
				printf("Debito:");
				scanf("%f",&conta[i].debito);
			}else{
				conta[i].credito = conta[i].debito = 0;
			}
		}
		
		for(i=0;i<n;i++){
			a = atoi(conta[i].nome);
			tam = strlen(conta[i].nome);
			for(j=0;j<tam;j++){
				if(a%10==0) a=a/10;
			}
			sprintf(conta[i].nome, "%i", a);
		}
		for(i=0;i<n;i++){
			a = atoi(conta[i].nome);
			tam = strlen(conta[i].nome);
			for(j=0;j<tam;j++){
				a--;
				if(a%10==0){
					a/=10;
					break;
				}
			}
			conta[i].ordem = a;
		}
		for(i=n-1;i>=0;i--){
			if(conta[i].tipo == 'S') continue;
				for(j=i+1;j<n;j++){
					if(atoi(conta[i].nome)==conta[j].ordem){
						conta[i].credito+=conta[j].credito;
						conta[i].debito+=conta[j].debito;
					}
				}
		}
	for(i=0;i<n;i++){
		printf("\nConta Nº: %s ",conta[i].nome);
		printf("Crédito: %.2f ",conta[i].credito);
		printf("Débito: %.2f \n",conta[i].debito);
	}
	printf("\n");
}
	return 0;
}

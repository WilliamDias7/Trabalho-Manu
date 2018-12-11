#include <stdio.h>
#include <stdlib.h>
#define max(maximo, posicao) (((maximo)>(posicao))?(maximo):(posicao))

int main() {
	int maximo, posicao, num, n;

	while(1) {
		printf("Quantidade de vezes que Joãozinho trocou de direção: ");
		scanf("%d", &n);
		if(!n) return 0;
		
		printf("Quantidade de Passos: \n");
		scanf("%d", &posicao);
		maximo = posicao;

		for(int i=1; i<=n; i++) 
		{
			scanf("%d", &num);
			if(i%2) posicao -= num;
			else posicao += num;
			maximo = max(maximo, posicao);
		}
		printf("Distancia Maxima Percorrida: %d\t\n", maximo);
		printf("------------------------------------------\n");
	}
system("PAUSE");
return 0;


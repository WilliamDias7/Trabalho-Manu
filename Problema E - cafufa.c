#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, p, d, i;
	while(1){
		printf("Digite o tamanho do seu cafufa: \n");
		scanf("%d", &n);
		printf("Digite os numeros cafufados: \n");
		scanf("%d %d", &p, &d);
		if(!n && !p && !d) return 0;
		
		for(i = 1; i <= n; i++){
			if(i%p==0 || i%d==0 || i%10==p || i%10==d)
				printf("Cafufa");
			else
				printf("%d", i);
			if(i==n){
				printf(".\n\n");
				printf("---------------------------------------------------------------\n");
			}else
				printf(", ");
		}
	}
	return 0;
}


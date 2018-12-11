#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int a){
	int i,aux=0;
	for(i=1;i<=a;i++){
	 	if(a%i==0) aux++;	 	
	 }
	if(aux==2) return 1;
	else return 0;
}
void inicializar(int t[]){
	int i=0;
	while(i<=200){
		t[i]=2;
		i++;
	}
}
int main(){
	int t=0, n, cont, i, i2, tam=0;
	int res[200], test, final;
	char a, b, dado[10], buff[4], teste[27] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
	inicializar(res);
	
	scanf("%i",&n);
	if(n<=199 && n>0){
		for(cont=0;cont<=n-1;cont++){
			while(1){
				scanf("%s",dado);
				tam = strlen(dado);
					if(tam<=5) break;
					else printf("valor invalido");
			}
	
			i=0;
			while(i < tam && res[cont]==2){
				a=dado[i];
				i2=0;
				while(i2 < 27){
				b=teste[i2];
					if(a==b){
						printf("%i ok\n",i2);
						res[cont]=3;
					}
				i2++;
				}
			i++;	
			}
			
			i=0;
			while(i<tam){
				a=dado[i];
				test=1;
				test=atoi(&a);
				if(test == 0){
				res[cont]=3;
				}
				i++;
			}
			i=0;
			test=0;
			int co;
			if(res[cont]==2){
				while(i<=tam-1 || res[cont]==2){
					a=dado[i];
					co=atoi(&a);
					test=test+co;
					if(test>=200) break;
						res[cont]=primo(test);
						test=test*10;
						i++;
						if(res[cont]==1) break;
				}
			}
			if( res[cont]!=3 && res[cont] != 1 && tam>=1){
					test=0;
					a=dado[1];
					co=atoi(&a);
					test=test+co;
					test=test*10;
					i=2;
					while(i<=tam-1){
						a=dado[i];
						co=atoi(&a);
						test=test+co;
							if(test>=200) break;
								res[cont]=primo(test);
								test=test*10;
								i++;
						if(res[cont]==1) break;
					}
			}
			
			if( res[cont]!=3 && res[cont] != 1 && tam>=2){
					test=0;
					a=dado[2];
					co=atoi(&a);
					test=test+co;
					test=test*10;
					i=3;
					while(i<=tam-1){
					a=dado[i];
					co=atoi(&a);
					test=test+co;
						if(test>=200) break;
							res[cont]=primo(test);
							test=test*10;
							i++;
						if(res[cont]==1) break;
					}
			}
			if( res[cont]!=3 && res[cont] != 1 && tam>=3){
					test=0;
					a=dado[3];
					co=atoi(&a);
					test=test+co;
					test=test*10;
					i=4;
					while(i<=tam-1){
						a=dado[i];
						co=atoi(&a);
						test=test+co;
						if(test>=200) break;
							res[cont]=primo(test);
							test=test*10;
							i++;
						if(res[cont]==1) break;
					}
			}
			if( res[cont]!=3 && res[cont] != 1 && tam>=4){
					test=0;
					a=dado[4];
					co=atoi(&a);
					test=test+co;
					test=test*10;
					a=dado[5];
					co=atoi(&a);
					test=test+co;
					res[cont]=primo(test);
			}
}
		printf("\n");
		for(cont=0;cont<=n-1;cont++){
			if(res[cont]==1) printf("SIM\n");
			else printf("NÃO\n");
		}
	}
	else printf("Valor Invalido!!!");
	return 0;
}


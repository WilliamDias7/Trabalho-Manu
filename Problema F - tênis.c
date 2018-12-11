#include <stdio.h>
#include <stdlib.h>

int maior(int a,int b){
	if(a<b){
		return b;
	}else{
	return a;
	}
}

int main(){
	int tset,p,i,cont,cont2;
	int x[7],o[7];
	int txing[200],tovo[200];
	int winovo=0,winxing=0;
	i=200;
	while(i){
		txing[i]=0;
		tovo[i]=0;
		i--;
	}
	scanf("%i",&p);
	i=p;
	if(p<201)
	while(i){
		scanf("%i %i",&winxing,&winovo);
		tset=winovo+winxing;
		for( cont = 0 ; cont < tset; cont++){
			if(tset>=8){
				printf("Quantidade de sets superior a 7");
				break;
			}
			scanf("%i %i",&x[cont],&o[cont]);		
			
			if( x[cont]>=0 && o[cont]>=0 ){
				if(x[cont]>o[cont]) winxing--;
				else if(x[cont]<o[cont]) winovo--;	
			} else if((x[cont]==20) && (o[cont]==-1)){
				o[cont]=18;
				winxing--;
			} else if((o[cont]==20) && (x[cont]==-1)){
				x[cont]==18;
				winovo--;
			} else if ((x[cont] == -1) && (o[cont] <= 10) && (o[cont] != -1)){
				x[cont] = maior(11,o[cont]+2);
				winxing--;
			} else if((o[cont] == -1) && (x[cont] <= 10) && (x[cont] != -1)){
				o[cont] = maior(11, x[cont]+2);
				winovo--;
			}	
		}
		if(tset<=7)		
		for( cont = 0 ; cont < tset; cont++){
			if( winovo <= 0 && winxing <= 0) break;
			if(x[cont]==-1){
				if(winxing > 0){
					if(o[cont]==-1){
						x[cont]=20;
						o[cont]=18;
						winxing--;
					}else if( o[cont]==19){
						x[cont]=17;
						winovo--;
					}else if( o[cont]==11){
						x[cont]=9;
						winovo--;
					}else if(o[cont]!=-1){
						x[cont]=o[cont]+2;
						winxing--;
					}
				} else if (winovo > 0){
					if(o[cont]== - 1){
						o[cont]=20;
						x[cont]=18;
						winovo--; 
					} else { 
					x[cont]=o[cont]-2;
					winovo--;
					}
				}
			}else if(o[cont]==-1){
				if(winxing>0){
					if(x[cont]==11){
						o[cont]=9;
						winxing--;
					} else { 
					o[cont] = x[cont]+2;
					winovo--;
					}
				} else if (winovo > 0){
					o[cont]=x[cont]+2;
					winovo--;
				}
			}
		}
		if(tset<=7)	
		for( cont = 0 ; cont < tset ; cont++){
				txing[i]+=x[cont];
				tovo[i]+=o[cont];
		}
		i--;

	}else printf("Valor Acima de 200 partidas");
	if(tset<=7){
	for(i=p;i;i--)
	printf("%i  %i\n",txing[i],tovo[i]);
	}
	return 0;
}


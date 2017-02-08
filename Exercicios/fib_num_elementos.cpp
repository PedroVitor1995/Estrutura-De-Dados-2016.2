


#include  <stdio.h>

void fibonacci_mostrar(int num_elementos,int serie[]){
	
	int i;
		
	serie[0]=0;
	serie[1]=1;
	for(i = 2; i <= num_elementos+1;i++ )	{
			
			
		
			serie[i]=serie[i-1] + serie[i-2];
 		
				
	}
//	for(i=2;i< num_elementos;i++) {
//	}
	
	
}


 main(){
 		
	int posicao,quantidade,opcao,continuar = 1,i;
	
	printf("Quantidade de elementos da serie ");
	scanf("%d",&quantidade);
	int vet[quantidade];
	printf("Serie fibbonaci \n");
	fibonacci_mostrar(quantidade,vet);
	printf("\n");	
 	for (i = 2;i < quantidade + 2; i++){
 		printf("%d\n",vet[i]);
	 }
 }

#include <stdlib.h>
#include <stdio.h>

int fib(int);

main(){
	
	int qual;
	printf("Qual termo queres:\n");
	scanf("%d", &qual);
	
	printf("O termo procurado eh: %d", fib(qual));
	
	printf("\nDEPOIS DA EXECUCAO  QUAL= %d",qual);

}

fib(int qual){
	
	int duplo_antecessor = 0;
	int antecessor = 1;
	int termo_final = 0;
    qual = qual+2;
    printf("\nDENTRO DA FUNÇÃO QUAL =%d",qual);
	for (int i = 0; i < qual; i++){
		
		termo_final = duplo_antecessor + antecessor;
		duplo_antecessor = antecessor;
		antecessor = termo_final;
	
	}
	
	return termo_final;
}


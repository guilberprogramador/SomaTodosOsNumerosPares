#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero,soma=0,contador= 0;
	
	printf("Digite um valor: ");
	scanf("%i",&numero);
	
	while(contador  < numero){
		contador++;
		
		if(contador % 2 ==0){
			soma = contador + soma;
		}
		
	}
	
	printf("A soma Dos Valores e %i",soma);
	
	
	getch();
		
} 		

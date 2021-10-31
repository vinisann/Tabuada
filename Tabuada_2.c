#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// definir a linguagem português, para acrescentar as pontuações
	setlocale(LC_ALL,"Portuguese");
	
	// declaração das variáveis como nº inteiros
	int contador, resultado, numero;
	
	// aparecer mensagem na tela
	printf("Digite o número da tabuada: ");
	
	// ler a informação do printf acima, o %d armazena a informação, o,numero inclui na variável
	scanf("%d",&numero);
	
	// aparece mensagem na tela, o %d e ,numero é para aparecer o nº que o usuário incluiu
	printf("\nTabuada do número %d:", numero);
	
	// for (valor inicial ; condicional ; passo, o ++ significa ser de 1 em 1)
	for(contador = 0 ; contador <= 10 ; contador++)
	{	
		// multiplicação do contador e número
		resultado = contador * numero;
		
		// exibe os resultados, 1º %d coloca o numero, 2º %d é o contador, 3º %d é o resultado
		printf("\n %d x %d = %d",numero,contador,resultado);
		
		// demorar 500 segundos entre cada contagem
		Sleep(500);
	}
	
}


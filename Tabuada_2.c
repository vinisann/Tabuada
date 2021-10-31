#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// definir a linguagem portugu�s, para acrescentar as pontua��es
	setlocale(LC_ALL,"Portuguese");
	
	// declara��o das vari�veis como n� inteiros
	int contador, resultado, numero;
	
	// aparecer mensagem na tela
	printf("Digite o n�mero da tabuada: ");
	
	// ler a informa��o do printf acima, o %d armazena a informa��o, o,numero inclui na vari�vel
	scanf("%d",&numero);
	
	// aparece mensagem na tela, o %d e ,numero � para aparecer o n� que o usu�rio incluiu
	printf("\nTabuada do n�mero %d:", numero);
	
	// for (valor inicial ; condicional ; passo, o ++ significa ser de 1 em 1)
	for(contador = 0 ; contador <= 10 ; contador++)
	{	
		// multiplica��o do contador e n�mero
		resultado = contador * numero;
		
		// exibe os resultados, 1� %d coloca o numero, 2� %d � o contador, 3� %d � o resultado
		printf("\n %d x %d = %d",numero,contador,resultado);
		
		// demorar 500 segundos entre cada contagem
		Sleep(500);
	}
	
}


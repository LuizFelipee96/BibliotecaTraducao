#include "BibliotecaPortugues.h"

int main(void)
{
  float nota1, nota2, media;
  int i;
  
  escreva("---- Calculando a media para 5 alunos -----\n\n");
  
  por (i = 1; i<=5; i++)
  {
    escreva("Digite a primeira nota do aluno %d\n",i);
    leia("%f",&nota1);
  
    escreva("Digite a segunda nota do aluno %d\n",i);
    leia("%f",&nota2);
  
    media = (nota1 + nota2) / 2;
  
    escreva("\nMedia do aluno %d = %.1f\n",i,media);
    
    se (media > 7)
    	escreva("Aprovado\n\n", media);
    senao
		escreva("Reprovado\n\n", media);
	
	escreva("------------------------------------------\n\n");
		
  }
  sistema("pause");
  
  pegarcaracter();
  
  retorno(0);
}
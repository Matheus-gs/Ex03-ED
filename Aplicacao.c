#include <stdio.h>
#include "Lista.h"


int main(void){
	NoLista* lst;
	
	lst = lst_cria();
	
	lst = lst_insere(lst, 23);
	lst = lst_insere(lst, 59);
	lst = lst_insere(lst, 64);
	lst = lst_insere(lst, 83);
	lst = lst_insere(lst, 93);

	lst_imprime(lst);
	
	int tamanho = lst_tamanho(lst);
	printf("Sua lista possui %d itens!", tamanho);
	
	lst_libera(lst);
	
	return 0;
}

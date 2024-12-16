#include<stdio.h>

int main () {
	
	int n, fattoriale, cont;
	fattoriale = 1;
	
	printf("inserisci un numero intero positivo\n");
	scanf ("%d", &n);
	
	for (cont = 1; cont <= n; cont++)
	{
		fattoriale *= cont;
	}
	printf ("il fattoriale di %d è: %d\n", n, fattoriale);
	
	return 0;
	
}

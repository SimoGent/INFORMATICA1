#include <stdio.h> 

int main()  {
    int numero, i; // Richiesta del numero all'utente 

    printf("Inserisci un numero intero: "); 
    scanf("%d", &numero); 

    printf("I divisori di %d sono: ", numero); // Ciclo per trovare e visualizzare i divisori 
    if(numero % i == 0) { 
        for(i=1; i < numero; i++) { 
            printf("%d ", i); 
        } 
    }
    printf("\n"); 
    
    return 0;
}

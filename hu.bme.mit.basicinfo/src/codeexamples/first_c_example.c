#include <stdio.h>

int osszead(int operandus1, int operandus2);
int misztikusFuggveny();

// "main" fuggveny, a program elinditasakor ez hivodik meg eloszor
int main(void){
	int a;
	int b;
	int osszeg;
	
	a = 5;
	b = 3;
	
	osszeg = osszead(a, b);
	
	return 0;
}

/* 	Az osszeado fuggveny implementacioja
	Ez az a fuggveny, amit az elso sorban deklaraltunk */
int osszead(int operandus1, int operandus2){
	
	misztikusFuggveny();
	
	return operandus1 + operandus2;
}

#define TOMB_HOSSZ 10

int misztikusFuggveny(){

	int szamok[TOMB_HOSSZ];
	int i;
	int magikusSzam = 0;
	
	for(int i = 0; i < TOMB_HOSSZ; i = i + 1){
	
		szamok[i] = 10 + (3 * i);
	}	
	
	i = 0;
	
	while(i < TOMB_HOSSZ) {
		
		magikusSzam += szamok[i];
		
		i++;
	}
	
	printf("%d", magikusSzam);
	
	if(magikusSzam > 100){
		return 0;
	}
	else {
		return 1;
	}
}




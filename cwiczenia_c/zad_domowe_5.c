#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "cwiczenia_3.h"
#include "cwiczenia_5.h"
#define TAB_LENGTH 100

float srednia_liczby_pierwsze(int* t, int n)
{
	int suma = 0, licznik = 0;
	for (int i = 0; i < n; i++) {
		if (CzyPierwsza(t[i]) == 1) {
			suma += t[i];
			licznik++;
		}
	}
	return suma / licznik;
}


int suma_potega_dwa(int* a, int n)
{
	int suma = 0;
	for (int i = 0; i < n; i = i + 2) {
		if (CzyPotegaDwojki(a[i])) {
			suma += a[i];
		}
	}
	return suma;
}


void testy_zad_domowe() {
	int t[TAB_LENGTH];
	generuj_tablice(t, TAB_LENGTH, 2, 1025);
	wypisz_tablice(t, TAB_LENGTH);
	printf("\nSrednia liczb pierwszych: %f\n", srednia_liczby_pierwsze(t, TAB_LENGTH));
	printf("Suma poteg dwojki to: %d\n", suma_potega_dwa(t, TAB_LENGTH));
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cwiczenia_4.h"

#define MAX_SMALL 30
extern char* ERR_MSG;

// uzupe³nienie elementów jednowymiarowej tablicy liczbami
// pseudolosowymi z zakreu [a,b]


void generuj_tablice(int* t, int n, int a, int b)
{
	// inicjalizacja generatora liczb pseudolosowych
	srand((unsigned int)time(0));
	for (int i = 0; i < n; ++i) {
		t[i] = rand() % (b - a + 1) + a;
	}
}

// wypisywanie tablicy
void wypisz_tablice(int* a, int n)
{
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
}

// wypisywanie elementow parzystych
void elementy_parzyste(int* t, int n)
{
	for (int i = 0; i < n; ++i) {
		if (CzyParzysta(t[i]) == 1) {
			printf("%d ", t[i]);
		}
	}
}

// sprawdzanie ile razy podana liczba wystepuje w tablicy
int ile_razy(int* a, int n, int b)
{
	int licznik = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == b) {
			++licznik;
		}
	}
	return licznik;
}

void test_generuj_tablice()
{
	int t[MAX_SMALL];
	int a, b, c;
	printf("Podaj zakres elementow tablicy (a,b]: ");
	if (scanf_s("%d %d", &a, &b) < 2) {
		printf("%s\n", ERR_MSG);
		return;
	}
	if (a >= b) {
		printf("%s\n", ERR_MSG);
		return;
	}
	generuj_tablice(t, MAX_SMALL, a, b);
	wypisz_tablice(t, MAX_SMALL);
	printf("\nElementy parzyste:\n");
	elementy_parzyste(t, MAX_SMALL);
	printf("\nPodaj szukana liczbe:\n");
	if (scanf_s("%d", &c) < 1) {
		printf("%s", ERR_MSG);
		return;
	}
	printf("\nLiczba %d wystepuje w tablicy %d razy\n"
		, c, ile_razy(t, MAX_SMALL, c)); 
}
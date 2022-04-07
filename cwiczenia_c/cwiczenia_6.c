#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cwiczenia_6.h"

// Zadanie 1
int czy_automorficzna(ulong a) {
	char s[20], ss[50];
	size_t n, nn;
	ulong aa = a * a;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	sprintf_s(ss, sizeof(ss), "%lu", aa);
	nn = strlen(ss);
	for (size_t i = 0; i < n; ++i) {
		if (s[n - i - 1] != ss[n - i - 1]) {
			return 0;
		}
	}
	return 1;
}

void test_czy_automorficzna() {
	ulong x;
	printf("Podaj liczbe:\n");
	if (scnaf_s("%d", &x) < 1) {
		printf("Bledne dane.");
	}
	
}

// Zadanie 2
int czy_automorficzna2(ulong a) {
	char s[20], ss[50], ssub[20];
	size_t n, nn;
	ulong aa = a * a;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	sprintf_s(ss, sizeof(ss), "%lu", aa);
	nn = strlen(ss);
	strncpy_s(ssub, sizeof(ssub), ss + (nn - n), n);
	return strcmp(s, ssub) == 0;
}

// Zadanie 3
int czy_armstronga(ulong a) {
	char s[50];
	size_t n;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	float sum = 0;
	for (size_t i = 0; i < n; i++) {
		int cyfra = s[i] - '0';
		sum += pow(cyfra, (int)n);
	}
	return sum == a;
}

// Zadanie 4
int male_litery(char* s) {

}

// Zadanie 5
int sortuj(int* a, int n, int opcja) {

}

// Zadanie 6
int tablica2d(unsigned int** a, int n, int m) {

}

// Zadanie 7
int czy_zaprzyjaznione(unsigned int a, unsigned int b) {

}


int ile_spacji() {

}
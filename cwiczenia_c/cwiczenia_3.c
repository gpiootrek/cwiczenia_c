#include <stdio.h>
#include <string.h>

// Zadanie 1
int CzyParzysta(int a) {
	return (a & 1) == 0;
}

// Zadanie 2
int CzyPotegaDwojki(unsigned int a) {
	while (((a & 1) == 0) && a > 1)
		a >>= 1;
	return (a == 1);
}

// Zadanie 3
void PostacBinarna(short a) {
	short int n;
	for (int i = 31; i >= 0; i--){	
		n = a >> i;
		if (n & 1)
			printf("1");
		else
			printf("0");
	}
}

// Zadanie 4
float WartoscBezwzgledna(float a) {
	return a >= 0 ? a : -a;
}

// Zadanie 5
int ZnakLiczby(float a) {
	return a > 0 ? 1 : a < 0 ? -1 : 0;
}

int CzyDoskonala(unsigned int a) {
	// Jest doskonala kiedy jest suma jej dzielnikow (oprocz jej samej)
	unsigned int s = 0, i = 1;
	while (i < a) {
		if (a % i++ == 0) {
			s += i;
		}
	}
	return s == a;
}


// Zadanie 7
int CzyPierwsza(unsigned long a) {
	if (a == 1) {
		return 0;
	}
	for (int i = a - 1; i > 1; i--) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

// Zadanie 8
int PierwszaWiekszaNiz(unsigned long a) {
	int i = a;
	do {
		i++;
	} while (CzyPierwsza(i) == 0);
	return i;
}

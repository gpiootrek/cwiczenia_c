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
	char binary[32];
	int i = 0;
	while (a > 0)
	{
		if ((a & 1) == 1)
			binary[i] = "1";
		else
			binary[i] = "0";
		a >>= 1;
		i += 1;
	}
	printf(binary);
}

// Zadanie 4
float WartoscBezwzgledna(float a) {
	return a >= 0 ? a : -a;
}

// Zadanie 5
int ZnakLiczby(float a) {
	return a > 0 ? 1 : a < 0 ? -1 : 0;
}

// Zadanie 6
int CzyDoskonala(unsigned long a) {
	int i = 1;
	int sum = 0;
	while (i <= a - 1) {
		if (a % i == 0) {
			sum += i;
		}
		i += 1;
	}
	return sum == a ? 1 : 0;
}

// Zadanie 7
int CzyPierwsza(unsigned long a) {

}

// Zadanie 8
int PierwszaWiekszaNiz(unsigned long a) {

}

#include <stdio.h>

void cw1_zad1(void) {
	printf("Hello World!\n");
}

void cw1_zad2(void) {
	int a, b;
	printf("Podaj dwie liczby calkowite:");
	if (scanf_s("%d%d", &a, &b) < 2) {
		printf("Niepoprawne dane");
		return;
	};
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d", a, b, a + b, a, b, a - b, a, b, a * b);
}

void cw1_zad3(void) {
	float r;
	const float PI = 3.14;
	printf("Podaj promien kola:");
	if (scanf_s("%f", &r) < 1) {
		printf("Niepoprawne dane");
		return;
	};
	printf("Pole: %f\nObwod: %f", PI * r * r, 2 * PI * r);
}

void cw1_zad4(void) {
	char name[30];
	char surname[40];
	printf("Podaj imie:");
	scanf_s("%s", name, sizeof(name));
	printf("Podaj nazwisko:");
	scanf_s("%s", surname, sizeof(surname));
	printf("Witaj %s %s", name, surname);
}

void cw1_zad5(void) {
	int a, b;
	printf("Podaj dlugosci bokow prostokata:");
	if (scanf_s("%d%d", &a, &b) < 2) {
		printf("Niepoprawne dane");
		return;
	};
	int pole = a * b;
	if (a == b) {
		printf("Pole kwadratu: %d", pole);
	}
	else {
		printf("Pole prostokata: %d", pole);
	};
}
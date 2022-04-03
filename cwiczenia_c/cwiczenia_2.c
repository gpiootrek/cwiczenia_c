#include <stdio.h>
#include <math.h>

void cw2_zad1(void) {
	int a, b;
	printf("Podaj dlugosci bokow prostokata:");
	if (scanf_s("%d%d", &a, &b) < 2) {
		printf("Niepoprawne dane.\n");
		return;
	}
	if (a == b) {
		printf("Pole kwadratu: %d", a * b);
	}
	else {
		printf("Pole prostokata: %d", a * b);
	}
}

void cw2_zad2(void) {
	int a, b;
	char op;
	printf("Podaj wyrazenie (bez spacji): ");
	if (scanf_s("%d%c%d", &a, &op, sizeof(op), &b) < 3) {
		printf("Niepoprawne dane.\n");
		return;
	}

	if (op != '+' && op != '-' && op != '*' && op != '/') {
		printf("Dzialanie niepoprawne.");
	}

	switch (op) {
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		if (b == 0) {
			printf("Nie mozna dzielic przez 0.");
			return;
		}
		printf("%d / %d = %d", a, b, a / b);
		break;
	default:
		return;
		break;
	}
}

void cw2_zad3(void) {
	int a, b, c;
	printf("Podaj 3 liczby calkowite:");
	if (scanf_s("%d%d%d", &a, &b, &c) < 3) {
		printf("Niepoprawne dane.");
		return;
	}
	if (a > b) {
		if (a > c) {
			printf("Najwieksza liczba: %d", a);
			return;
		}
		else {
			printf("Najwieksza liczba: %d", c);
			return;
		}
	}
	else {
		if (b > c) {
			printf("Najwieksza liczba: %d", b);
			return;
		}
		else {
			printf("Najwieksza liczba: %d", c);
			return;
		}
	}
}

void cw2_zad4(void) {
	int a, b, c;
	printf("Podaj wspolczynniki a, b, c rownania kwadratowego: ");
	if (scanf_s("%d%d%d", &a, &b, &c) < 3) {
		printf("Niepoprawne dane.");
		return;
	}

	int delta = b * b - 4 * a * c;

	if (a == 0) {
		if (b == 0) {
			printf("Funkcja stala o rownaniu y = %d", c);
			return;
		}
		float x = -c / b;
		printf("Rownanie liniowe z 1 rozwiazaniem: %f", x);
		return;
	}

	if (delta > 0) {
		float x1 = (sqrt(delta) - b) / (2 * a);
		float x2 = (-sqrt(delta) - b) / (2 * a);
		printf("Rownanie kwadratowe o wspolczynnikach a=%d b=%d c=%d ma 2 rozwiazania: %f %f.", a, b, c, x1, x2);
	}
	else if (delta == 0) {
		float x0 = -b / (2 * a);
		printf("Rownanie kwadratowe o wspolczynnikach a=%d b=%d c=%d ma 1 rozwiazanie: %f.", a, b, c, x0);
	}
	else {
		printf("Rownanie kwadratowe o wspolczynnikach a=%d b=%d c=%d nie ma rozwiazan.", a, b, c);
	}
}
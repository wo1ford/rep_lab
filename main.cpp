#include <stdio.h>
#include <Windows.h>

void task1() {
	int n1, m2, a = 1, b = 1;
	printf("Введите количество строк - \n");
	scanf_s("%d", &n1);
	printf("Введите количество столбцев - \n");
	scanf_s("%d", &m2);
	while (a <= n1) {
		for (b; b <= m2; b++) {
			printf("%d%d ", a, b);
		}
		printf("\n");
		b = 1;
		a++;
	}
}
void task2() {
	int a = 1, b = 1, cnt = 0, n1, m2;
	printf("Введите количество строк - \n");
	scanf_s("%d", &n1);
	printf("Введите количество столбцев - \n");
	scanf_s("%d", &m2);
	while (a <= n1) {
		for (b; b <= m2; b++) {
			cnt = a * b;
			if (cnt < 10) {
				printf("%d  ", cnt);
			}
			else {
				printf("%d ", cnt);
			}
		}
		printf("\n");
		b = 1;
		a++;
	}
}

void lab10() {
	int n;
	do {
		printf("0 - Выключить программу\n1 - первая задача\n2 - Вторая задача (Пифагор)\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		}

	} while (n != 0);
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	lab10();
}
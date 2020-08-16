#include<stdio.h>
long a = 0;
long b = 0;
int aa[100];
int i = 0;
int y = 1;
int max,min;
int sum = 0;
void text();
int more_less();
int main() {
	printf("Put your digits :");
	scanf("%d", &a);
	if (a <= 0) {
		a = a * -1;
	}
	b = a;
	while (y == 1) {
		aa[i] = a % 10;
		i = i + 1;
		a = a / 10;
		if (a <= 0) {
			y = 0;
		}
	}
	more_less();
	text();
	return 0;
}
void text() {
	printf("your digits :");
	printf("%ld\n", b);
	printf("Most value digit is :");
	printf("%d\n", max);
	printf("sum of all digits number :");
	printf("%d\n", sum);
}
int more_less() {
	for (int loop = 0; loop < 100; loop++)
	{
		min = aa[0];
		if (min > aa[loop]) {
			min = aa[loop];
		}
		else if (max < aa[loop]) {
			max = aa[loop];
		}
		else {
		}
		sum = sum + aa[loop];
	}
	return sum,max;
}
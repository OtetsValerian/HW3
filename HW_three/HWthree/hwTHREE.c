#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int b = 0;
	printf("Вводите последовательность чисел: ");
	while (1)
	{
		int a;
		scanf_s("%d", &a);
		b += a;
		if (a == 0)
		{
			break;
			continue;
		}
	}
	printf("Сумма положительной подпоследовательности равна %d.\n", b);
	return 0;
}
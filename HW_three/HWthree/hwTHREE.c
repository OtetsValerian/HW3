#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int b = 0;
	printf("������� ������������������ �����: ");
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
	printf("����� ������������� ��������������������� ����� %d.\n", b);
	return 0;
}
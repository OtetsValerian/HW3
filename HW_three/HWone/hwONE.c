#include<stdio.h>
#include<locale.h>
#include<math.h>

void menu()
{
	int number1;
	printf("�������� ������:\n1. �������������.\n2. �����������.\n3. ����.\n4. ����� �� ����������.\n\n����: ");
	scanf_s("%d", &number1);
	if (number1 == 1)
	{
		system("cls");
		pryamoygolnek();
	}
	else if (number1 == 2)
	{
		system("cls");
		treugolnik();
	}
	else if (number1 == 3)
	{
		system("cls");
		krug();
	}
	else if (number1 == 4)
	{
		system("cls");
	}
}

void finishe_pryamoygolnek_menu(int number2, float a, float b)		//������� � ����� ������
{
	
	float c;
	if (number2 == 1)
	{
		c = (float)a * b;
		printf("������� ��������������: %.2f\n", c);
		system("pause");
		system("cls");
		pryamoygolnek_menu(a, b);
	}
	else if (number2 == 2)
	{
		c = (float)(a + b) * 2;
		printf("�������� ��������������: %.2f\n", c);
		system("pause");
		system("cls");
		pryamoygolnek_menu(a, b);
	}
	else if (number2 == 3)
	{
		c = (float)pow((pow(a, 2) + pow(b, 2)), 0.5);
		printf("��������� ��������������: %.2f\n", c);
		system("pause");
		system("cls");
		pryamoygolnek_menu(a, b);
	}
	else if (number2 == 4)
	{
		system("cls");
		menu();
	}
	else if (number2 == 0)
	{
		system("cls");
	}
}
int pryamoygolnek_menu(float a, float b)	//���� �������, ������� ���� �����
{
	if (a > 0 && b > 0) //�������� �� ��, ����� ������� ������������ � ���� ������ 0
	{
		int otvet;
		printf("����:\n1. ����� ������� ��������������.\n2. ����� �������� ��������������.\n3. ����� ��������� ��������������.\n4. ������� ������ ������.\n0. �����.\n����: ");
		scanf_s("%d", &otvet);
		finishe_pryamoygolnek_menu(otvet, a, b);
	}
	else
	{
		printf("������� ������ ���� ������ 0. ������� ������ �����.\n");
		system("pause");
		system("cls");
		pryamoygolnek();
	}
}

int pryamoygolnek()	//��������� ������ ������ ������
{
	float a1, b1;
	printf("������� ��� ������� ��������������: ");
	scanf_s("%f %f", &a1, &b1);
	system("cls");
	pryamoygolnek_menu(a1, b1);
	
}

void finishe_treugolnik_menu(int number2, int a, int b)		//������� � ����� ������
{
	float c;
	if (number2 == 1)
	{
		c = (float)(a * b)/2;
		printf("������� ������������: %f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 2)
	{
		c = (a + b + pow((pow(a, 2) + pow(b, 2)), 0.5)) * 2;
		printf("�������� ������������: %.2f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 3)
	{
		c = (float)pow((pow(a, 2) + pow(b, 2)), 0.5);
		printf("���������� ������������: %.2f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 4)
	{
		if (a > b)
		{
			c = (float)pow((pow(a, 2) - pow(b, 2)), 0.5);
			printf("����� ������������: %.2f\n", c);
			system("pause");
			system("cls");
			treugolnik_menu(a, b);
		}
		else if (a < b)
		{
			c = (float)pow((pow(b, 2) - pow(a, 2)), 0.5);
			printf("����� ������������: %.2f\n", c);
			system("pause");
			system("cls");
			treugolnik_menu(a, b);
		}
		else
		{

			printf("����� ������. ������� ������ ��������.\n");
			system("pause");
			system("cls");
			treugolnik();
		}
	}
	else if (number2 == 5)
	{
		system("cls");
		menu();
	}
	else if (number2 == 0)
	{
		system("cls");
	}
}	   

int treugolnik_menu(float a2, float b2)		//���� �������, ������� ���� �����
{
	if (a2 > 0 && b2 > 0) //�������� �� ��, ����� ������� ������������ � ���� ������ 0
	{
		system("cls");
		int otvet;
		printf("����:\n1. ����� ������� ������������.\n2. ����� �������� ������������.\n3. ����� ���������� ������������.\n4. ����� ����� ������������.\n5. ������� ������ ������.\n0. �����.\n����: ");
		scanf_s("%d", &otvet);
		finishe_treugolnik_menu(otvet, a2, b2);
	}
	else
	{
		printf("������� ������ ���� ������ 0. ������� ������ �����.\n");
		system("pause");
		system("cls");
		treugolnik();
	}
	
}

int treugolnik()	//��������� ������ ������ ������
{
	float a2, b2;
	printf("������� ��� ������� �������������� ������������: ");
	scanf_s("%d %d", &a2, &b2);
	system("cls");
	treugolnik_menu(a2, b2);
}

int finishe_krug_menu(int number2, float a)		//������� � ����� ������
{
	float c;
	if (number2 == 1)
	{
		c = 3.14 * a * a;
		printf("������� ��������������: %.2f\n", c);
		system("pause");
		system("cls");
		krug_menu(a);
	}
	else if (number2 == 2)
	{
		c = 2 * 3.14 * a;
		printf("������ ����������: %.2f\n", c);
		system("pause");
		system("cls");
		krug_menu(a);
	}
	else if (number2 == 3)
	{
		c = 2 * a;
		printf("������� �����: %.2f\n", c);
		system("pause");
		system("cls");
		krug_menu(a);
	}
	else if (number2 == 4)
	{
		system("cls");
		menu();
	}
	else if (number2 == 0)
	{
		system("cls");
	}
}
int krug_menu(float a2)		//���� �������, ������� ���� �����
{
	if (a2 > 0) //�������� �� ��, ����� ������� ������������ � ���� ������ 0
	{
		system("cls");
		int otvet;
		printf("����:\n1. ����� ������� �����.\n2. ����� ������ ����������.\n3. ����� ������� �����.\n4. ������� ������ ������.\n0. �����.\n����: ");
		scanf_s("%d", &otvet);
		finishe_krug_menu(otvet, a2);
	}
	else
	{
		printf("������ ������ ���� ������ 0. ������� ������ �����.\n");
		system("pause");
		system("cls");
		krug();
	}
	
}
int krug()	//��������� ������ ������ ������
{
	float a3;
	printf("������� ������ �����: ");
	scanf_s("%d", &a3);
	system("cls");
	krug_menu(a3);
}

int main()
{
	setlocale(LC_ALL, "rus");
	printf("����� ����������!");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++)
	{
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
		system("cls");
	}
	menu();
	return 0;
}
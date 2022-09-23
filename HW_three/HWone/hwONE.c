#include<stdio.h>
#include<locale.h>
#include<math.h>

void menu()
{
	int number1;
	printf("Выберите фигуру:\n1. Прямоугильник.\n2. Треугольник.\n3. Круг.\n4. Выйти из приложения.\n\nВвод: ");
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

void finishe_pryamoygolnek_menu(int number2, float a, float b)		//расчеты и вывод данных
{
	
	float c;
	if (number2 == 1)
	{
		c = (float)a * b;
		printf("Площадь прямоугольника: %.2f\n", c);
		system("pause");
		system("cls");
		pryamoygolnek_menu(a, b);
	}
	else if (number2 == 2)
	{
		c = (float)(a + b) * 2;
		printf("Периметр прямоугольника: %.2f\n", c);
		system("pause");
		system("cls");
		pryamoygolnek_menu(a, b);
	}
	else if (number2 == 3)
	{
		c = (float)pow((pow(a, 2) + pow(b, 2)), 0.5);
		printf("Диагональ прямоугольника: %.2f\n", c);
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
int pryamoygolnek_menu(float a, float b)	//меню данныых, котоыре надо найти
{
	if (a > 0 && b > 0) //проверка на то, чтобы сторона существовала и была больше 0
	{
		int otvet;
		printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диагональ прямоугольника.\n4. Выбрать другую фигуру.\n0. Выход.\nВвод: ");
		scanf_s("%d", &otvet);
		finishe_pryamoygolnek_menu(otvet, a, b);
	}
	else
	{
		printf("Стороны должны быть быльше 0. Введите другие числа.\n");
		system("pause");
		system("cls");
		pryamoygolnek();
	}
}

int pryamoygolnek()	//позваляет ввести данные фигуры
{
	float a1, b1;
	printf("Введите две стороны прямоугольника: ");
	scanf_s("%f %f", &a1, &b1);
	system("cls");
	pryamoygolnek_menu(a1, b1);
	
}

void finishe_treugolnik_menu(int number2, int a, int b)		//расчеты и вывод данных
{
	float c;
	if (number2 == 1)
	{
		c = (float)(a * b)/2;
		printf("Площадь треугольника: %f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 2)
	{
		c = (a + b + pow((pow(a, 2) + pow(b, 2)), 0.5)) * 2;
		printf("Периметр треугольника: %.2f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 3)
	{
		c = (float)pow((pow(a, 2) + pow(b, 2)), 0.5);
		printf("Гипотенуза треугольника: %.2f\n", c);
		system("pause");
		system("cls");
		treugolnik_menu(a, b);
	}
	else if (number2 == 4)
	{
		if (a > b)
		{
			c = (float)pow((pow(a, 2) - pow(b, 2)), 0.5);
			printf("Катет треугольника: %.2f\n", c);
			system("pause");
			system("cls");
			treugolnik_menu(a, b);
		}
		else if (a < b)
		{
			c = (float)pow((pow(b, 2) - pow(a, 2)), 0.5);
			printf("Катет треугольника: %.2f\n", c);
			system("pause");
			system("cls");
			treugolnik_menu(a, b);
		}
		else
		{

			printf("Данны катеты. Введите другие значения.\n");
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

int treugolnik_menu(float a2, float b2)		//меню данныых, котоыре надо найти
{
	if (a2 > 0 && b2 > 0) //проверка на то, чтобы сторона существовала и была больше 0
	{
		system("cls");
		int otvet;
		printf("Меню:\n1. Найти площадь треугольника.\n2. Найти периметр треугольника.\n3. Найти гипотенузу треугольника.\n4. Найти катет треугольника.\n5. Выбрать другую фигуру.\n0. Выход.\nВвод: ");
		scanf_s("%d", &otvet);
		finishe_treugolnik_menu(otvet, a2, b2);
	}
	else
	{
		printf("Стороны должны быть быльше 0. Введите другие числа.\n");
		system("pause");
		system("cls");
		treugolnik();
	}
	
}

int treugolnik()	//позваляет ввести данные фигуры
{
	float a2, b2;
	printf("Введите две стороны прямоугольного треугольника: ");
	scanf_s("%d %d", &a2, &b2);
	system("cls");
	treugolnik_menu(a2, b2);
}

int finishe_krug_menu(int number2, float a)		//расчеты и вывод данных
{
	float c;
	if (number2 == 1)
	{
		c = 3.14 * a * a;
		printf("Площадь прямоугольника: %.2f\n", c);
		system("pause");
		system("cls");
		krug_menu(a);
	}
	else if (number2 == 2)
	{
		c = 2 * 3.14 * a;
		printf("Длинна окружности: %.2f\n", c);
		system("pause");
		system("cls");
		krug_menu(a);
	}
	else if (number2 == 3)
	{
		c = 2 * a;
		printf("Диаметр круга: %.2f\n", c);
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
int krug_menu(float a2)		//меню данныых, котоыре надо найти
{
	if (a2 > 0) //проверка на то, чтобы сторона существовала и была больше 0
	{
		system("cls");
		int otvet;
		printf("Меню:\n1. Найти площадь круга.\n2. Найти длинну окружности.\n3. Найти диаметр круга.\n4. Выбрать другую фигуру.\n0. Выход.\nВвод: ");
		scanf_s("%d", &otvet);
		finishe_krug_menu(otvet, a2);
	}
	else
	{
		printf("Радиус должен быть быльше 0. Введите другое число.\n");
		system("pause");
		system("cls");
		krug();
	}
	
}
int krug()	//позваляет ввести данные фигуры
{
	float a3;
	printf("Введите радиус круга: ");
	scanf_s("%d", &a3);
	system("cls");
	krug_menu(a3);
}

int main()
{
	setlocale(LC_ALL, "rus");
	printf("Добро пожаловать!");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++)
	{
		printf("Загрузка.");
		Sleep(500);
		system("cls");
		printf("Загрузка..");
		Sleep(500);
		system("cls");
		printf("Загрузка...");
		Sleep(500);
		system("cls");
	}
	menu();
	return 0;
}
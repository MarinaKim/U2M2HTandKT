#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>
using namespace std;

char u;
void main()
{
	setlocale(LC_ALL, "Russian");
	/*int a = 0;
	cout << a << endl;
	a++;
	cout << a << endl;
	a--;
	cout << a << endl;
	int c = 8 * a++;
		cout << c << endl;
		c = 8 * ++a;
		cout << c << endl;*/
		/*int i, c;
		for (i = 0; i < 10; i++);
		{
			c += i;
			cout << c << endl;

		}*/
start:

	int a;
	cout << "введите номер задания:";
	cin >> a;

	//1.	Даны два действительных числа. Вывести первое число, если оно больше второго,
	//и оба числа, если это не так.
	if (a == 1) //Домашняя работа 1
	{
		int x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;

		if (x > y)
		{
			cout << x << endl;
		}
		else
		{
			cout << x << "\t" << y << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//2.	Даны два действительных числа. Заменить первое число нулем, если оно меньше
	//или равно второму, и оставить числа без изменения в противном случае.

	else if (a == 2) //домашняя работа 2
	{
		int x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;

		if (x <= y)
		{
			x = 0;
			cout << x << endl;
		}
		else
		{
			cout << x << "\t" << y << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//3.	Даны три действительных числа. Выбрать из них те,
	//которые принадлежат интервалу (1, 3).

	else if (a == 3) //домашняя работа 3
	{

		int x, y, z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "введите число z:";
		cin >> z;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}

		if ((x > 1) && (x < 3))
		{
			cout << x << endl;
		}
		if ((y > 1) && (y < 3))
		{
			cout << y << endl;
		}
		if ((z > 1) && (z < 3))
		{
			cout << z << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//1.	Дана величина Z, выражающая объем информации в байтах. 
	//Перевести Z в более крупные единицы измерения информации

	else if (a == 4) //практическая работа 1
	{
		int x, y;
		cout << "Введите число x:";
		cin >> x;

		y = x / 1024;

		cout << y << endl;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//2.	Задано расстояние L в сантиметрах. Найти количество
	//полных метров в нем , используя операцию деления нацело.  

	else if (a == 5) //практическая работа 2
	{
		double L, M;
		cout << "Введите длину в см:";
		cin >> L;
		M = L / 100;
		cout << M << endl;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//3.	С начала суток прошло N секунд (N — целое). 
	//Найти количество полных минут, прошедших с начала суток.

	else if (a == 6) // практическая работа 3
	{
		int L, M;
		cout << "Введите время в сек:";
		cin >> L;
		M = L / 60;
		cout << M << endl;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//4.	Даны два неотрицательных числа a и b. Найти их среднее геометрическое.

	else if (a == 7) //практическая работа 4
	{
		int x, l, y;
		double z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		l = x*y;
		z = sqrt(l);
		cout << z << endl;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//4.	Даны действительные числа х, у (х!=у ). Меньшее из. этих двух чисел 
	//заменить их полусуммой*, а большее — их удвоенным произведением.

	else if (a == 8)//домашняя работа 4
	{
		int x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		if (x != y)
		{
			if (x < y)
			{
				x = (x + y) / 2;
				y = 2 * x*y;
				cout << "Меньшее из чисел x=" << x << endl;
				cout << "Большее из чисел y=" << y << endl;
			}
			else
			{
				y = (x + y) / 2;
				x = 2 * x*y;
				cout << "Меньшее из чисел y=" << y << endl;
				cout << "Большее из чисел x=" << x << endl;
			}
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//5.	Даны три действительные числа.
	//Возвести в квадрат те из них, значения которых неотрицательны.

	else if (a == 9) //домашняя работа 5
	{
		int x, x1, y, y1, z, z1;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "введите число z:";
		cin >> z;
		if (x > 0)
		{
			x1 = x*x;
			cout << x1 << endl;
		}
		else if (y > 0)
		{
			y1 = y*y;
			cout << y1 << endl;
		}
		if (z > 0)
		{
			z1 = z*z;
			cout << z1 << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//6.	Если сумма трех попарно различных действительных чисел х, у, z меньше единицы,
	//то наименьшее из этих трех чисел заменить полусуммой* двух других; 
	//в противном случае заменить меньшее из х и у полусуммой* двух оставшихся значений. 

	else if (a == 10) // домашняя работа 6
	{
		float x, y, z, S;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "введите число z:";
		cin >> z;
		S = x + y + z;
		if (S < 1)
		{
			if ((x < y) && (y < z))
			{
				x = (y + z) / 2;
				cout << "Наименьшее x:" << x << endl;
			}
			else if ((y < x) && (x < z))
			{
				y = (x + z) / 2;
				cout << "Наименьшее y:" << y << endl;
			}
			else if ((z < x) && (x < y))
			{
				z = (x + y) / 2;
				cout << "Наименьшее z:" << z << endl;
			}
		}
		else
		{
			if (x < y)
			{
				x = (y + z) / 2;
				cout << "Наименьшее x:" << x << endl;
			}
			else if (y < x)
			{
				y = (x + z) / 2;
				cout << "Наименьшее z:" << z << endl;
			}
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//7.	Даны действительные числа х, у. Если х и у отрицательны, то каждое значение
	//заменить его модулем; если отрицательно только одно из них, то оба значения 
	//увеличить на 0.5; если оба значения неотрицательны и ни одно из них не принадлежит 
	//отрезку [0.5, 2.0], то оба значения уменьшить в 10 раз; в остальных случаях х и у
	//оставить без изменения.

	else if (a == 11) //домашняя работа 7
	{
		float x1, y1, x, y;

		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;

		if ((x < 0) && (y < 0))
		{
			x1 = abs(x);
			y1 = abs(y);
			cout << "Модуль x:" << x1 << endl;
			cout << "Модуль y:" << y1 << endl;
		}

		else if ((x < 0) || (y < 0))
		{
			x1 = x + 0.5;
			y1 = y + 0.5;
			cout << "x:" << x1 << endl;
			cout << "y:" << y1 << endl;
		}

		else if ((x > 0) && (y > 0) && (x > 2) && (y > 2))

		{
			x1 = x / 10;
			y1 = y / 10;
			cout << "x:" << x1 << endl;
			cout << "y:" << y1 << endl;
		}
		else if ((x > 0) && (y > 0) && (x < 0.5) && (y < 0.5))
		{
			x1 = x / 10;
			y1 = y / 10;
			cout << "x:" << x1 << endl;
			cout << "y:" << y1 << endl;
		}

		else
		{
			cout << "x:" << x << endl;
			cout << "y:" << y << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//8.	Даны действительные положительные числа х, у, z. 
	//a.Выяснить, существует ли треугольник с длинами сторон х, у, z.
	//b.Если треугольник существует, то ответить—является ли он остроугольным.

	else if (a == 12) //домашнее задание 8
	{
		float x, y, z, s, s1, s2;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "введите число z:";
		cin >> z;
		if (((x + y) > z) || ((x + z) > y) || ((z + y) > x))
		{
			cout << "Треугольник существует" << endl;
			s = y*y + z*z;
			s1 = x*x + y*y;
			s2 = x*x + z*z;
			if (((x > y) && (x > z)) && (x < s))
			{
				cout << " Треугольник остроугольный" << endl;
			}
			else if (((y > x) && (y > z)) && (y < s2))
			{
				cout << " Треугольник остроугольный" << endl;
			}
			else if (((z > x) && (z > y)) && (z < s1))
			{
				cout << " Треугольник остроугольный" << endl;
			}
			else
			{
				cout << "Треугольник не остроуголный" << endl;
			}
		}
		else
		{
			cout << "Треугольник не существует" << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//9. Домашняя работа:	Даны действительные числа а, b, с (a!=0). 
	//Полностью исследовать биквадратное
	//уравнение ах4 + Ьх2 + с=0, т. е. если действительных корней нет, 
	//то должно быть выдано 
	//сообщение об этом, иначе должны быть выданы два или четыре корня.
	else if (a == 13) //домашняя работа 9
	{
		int x, a, b, c, d, x1, x2, t1, t2, t3, t4;
		cout << "введите число a:";
		cin >> a;
		cout << "Введите число b:";
		cin >> b;
		cout << "введите число c:";
		cin >> c;

		d = (b*b) - (4 * a*c);

		if ((d > 0) && (a != 0))
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			t1 = sqrt(x1);
			t2 = -sqrt(x1);
			t3 = sqrt(x2);
			t4 = -sqrt(x2);
			cout << "корень t1:" << t1 << endl;
			cout << "корень t2:" << t2 << endl;
			cout << "корень t3:" << t3 << endl;
			cout << "корень t4:" << t4 << endl;
		}
		else if ((d = 0) && (a != 0))
		{
			x1 = -b / (2 * a);
			t1 = sqrt(x1);
			t2 = -sqrt(x1);
			cout << "корень t1:" << t1 << endl;
			cout << "корень t2:" << t2 << endl;
		}
		else if (d < 0)
		{
			cout << "нет действительных корней" << endl;
		}

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}

	//10.	Дано действительное число х. Получить целую часть 
	//a.числа х;
	//b.затем—число х, округленное до ближайшего целого;
	//c.затем—число х без дробных цифр

	else if (a == 14)// домашняя работа 10
	{
	start2:
		int i = 0;

		cout << "Введите пункт:";
		cin >> i;

		if (i == 1)
		{
			int x1;
			double x;
			cout << "ввести число x:";
			cin >> x;

			x1 = (int)x;
			cout << "Целая часть числа:" << x1 << endl;

			cout << "Хотите продолжить задание 14 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start2;

			}
		}

		else if (i == 2)
		{
			int x1;
			double x;
			cout << "ввести число x:";
			cin >> x;
			x1 = ceil(x);
			cout << "Округление x:" << x1 << endl;


			cout << "Хотите продолжить задание 14 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start2;

			}
		}
		else if (i == 3)
		{
			int x1;
			double x;
			cout << "ввести число x:";
			cin >> x;

			x1 = (int)x;
			cout << "Целая часть числа:" << x1 << endl;

			cout << "Хотите продолжить задание 14 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start2;

			}
		}
		else
		{
			cout << "Хотите продолжить y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start;

			}
		}
	}

	//6.	Задание: составить структурную схему алгоритма и проект программы, 
	//исходные данные ввести с клавиатуры, результат вывести на экран.
	//1.	Тело движется по закону S = t3 – 3t2 + 2. Вычислить скорость тела 
	//в момент времени t.Значение t ввести с клавиатуры(Функция скорости есть
	//производная от функции расстояния по времени).
	//2.Найти корни квадратного уравнения a·x2 + b·x + c = 0, введя с экрана
	//коэффициенты a, b, c(коэффициент a не равен 0), для которых дискриминант 
	//положителен.
	//3.	Вычислить корень уравнения 2x / a + b - 12 = 0 при различных значениях
	//параметров a, b.Значения a, b ввести с экрана.
	//	4.	Вычислить рентабельность работы предприятия за месяц по
	//формуле рент = прибыль / себестоимость100%, если себестоимость продукции
	//в текущем месяце уменьшилась по сравнению с прошлым на 5 % .Значение прибыли
	//и себестоимости за прошлый месяц ввести с экрана
	//	5.	Идет k - я секунда суток.Определить, сколько целых часов(Н) и целых 
	//минут(М) прошло с начала суток.Вывести на экран фразу : «Эточасовминут».
	//Вместо многоточий поставить вычисленные значения Н и М.

	else if (a == 15)// практическая работа 6
	{
	start3:
		int i;
		cout << "введите пункт:";
		cin >> i;
		if (i == 1)
		{
			double t, S;
			cout << "введите t:";
			cin >> t;
			S = t*t*t - 3 * t*t + 2;
			cout << S << endl;

			cout << "Хотите продолжить задание 14 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start2;

			}
		}
		else if (i == 2)
		{
			float x, a, b, c, d, x1, x2;
			cout << "введите число a:";
			cin >> a;
			cout << "Введите число b:";
			cin >> b;
			cout << "введите число c:";
			cin >> c;

			d = (b*b) - (4 * a*c);

			if ((d > 0) && (a != 0))
			{
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				cout << "корень x1:" << x1 << endl;
				cout << "корень x2:" << x2 << endl;
			}

			else if ((d = 0) && (a != 0))
			{
				x1 = -b / (2 * a);
				cout << "корень x1,x2:" << x1 << endl;

			}
			else if (d < 0)
			{
				cout << "нет действительных корней" << endl;
			}
			cout << "Хотите продолжить задание 15 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start3;

			}
		}
		else if (i == 3)
		{
			float x, a, b;
			cout << "введите число a:";
			cin >> a;
			cout << "Введите число b:";
			cin >> b;
			x = a*(12 - b) / 2;
			cout << "корень уравнения x:" << x << endl;

			cout << "Хотите продолжить задание 15 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start3;

			}
		}
		else if (i == 4)
		{
			float R, P, Sb, Pt, Sbt;
			cout << "Введите прибыль за прошлый месяц P:";
			cin >> P;
			cout << "Введите себестоимость за прошлый месяц Sb:";
			cin >> Sb;
			Sbt = Sb - (5 * Sb) / 100;
			Pt = P + 5 * P / 100;
			Pt = P + 5 * P / 100;
			R = Pt / Sbt * 100;
			cout << "Рентабельность:" << R << endl;

			cout << "Хотите продолжить задание 15 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start3;

			}
		}
		else if (i == 5)
		{
			float c, h, m;
			cout << "Ввести какая идет секунда в сутках:";
			cin >> c;
			m = c / 60;
			h = m / 60;
			cout << "Эточасовминут:" << h << "\t" << m << endl;

			cout << "Хотите продолжить задание 15 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start3;

			}
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}
	// большая таблица

	else if (a == 16)//практическая работа 5
	{ start16:
		const float x = 2.5;
		int c,a,b,i = 0;
		cout << "Введите пункт:";
		cin >> i;
		cout << "Введите a:";
		cin >> a;
		cout << "введите b:";
		cin >> b;
		switch (i)
		{
		case 1: {
			
			c = a*a + sqrt(b*x);
			cout << c << endl;
			
			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		}break;
		case 2: {
			c = x*a*a*a + b*b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;
		case 3: {
			c = a*a*a / b*b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 4: {
			c = sqrt(x*x+a*a);
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 5: {
			c = sqrt(a*x);
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;
		case 6: {
		
			c = x*x*x*x+b*b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;
		
		case 7: {
			c = x+a*a;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 8: {
			c = a*x+sqrt(b);
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;
		
		case 9: {
			c = a*a*a / b*x;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 10: {
			c = x*a*a + b*b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 11: {
			c = x*x*x*x + b*b*b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;

		case 12: {
			c = x+b;
			cout << c << endl;

			cout << "Хотите продолжить задание 16 y/n:";
			cin >> u;
			if (u == 'y')
			{
				system("cls");
				goto start16;

			}
		} break;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}
}





#include<iostream>
#include<locale.h>
#include<stdio.h>

int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, u, t, v, w, x, y;

	printf("Зачем вы хотите изучать программирование?\n1 - Я не знаю, выберите за меня\n2 - Поразвлечься\n3 - Интересно\n4 - Саморазвитие\n5 - Для детей\n6 - Заработать\n ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1: printf("python\n"); break;

	case 2:
	case 3:
	case 4:
		printf("Уже есть идея на миллион?\n1 - Нет, просто хочу начать\n2 - Да\n");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1: printf("Каким способом вам нравится учиться?\n1 - Простым способом\n2 - Лучшим способом\n3 - Трудненьким способом\n4 - Очень сложный путь(потом будет легче)\n ");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
			case 2:
				printf("python\n");
				break;
			case 3: printf("Какая коробка передач?\n1 - Автомат\n2 - Ручная\n");
				scanf_s("%d", &d);

				switch (d)
				{
				case 1: printf("java\n"); break;
				case 2: printf("c\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("Некорретно выбрано число\n");
			}


		case 2: printf("Какая платформа, сфера?\n1 - Веб\n2 - Корп. софт\n3 - мобильная\n4 - 3d игры\n");
			scanf_s("%d", &e);

			switch (e)
			{
			case 1: printf("Ваш сервис будет в реальном времени как твиттер?\n 1 - да\n2 - нет\n ");
				scanf_s("%d", &f);

				switch (f)
				{
				case 1: printf("javascript\n"); break;
				case 2: printf("Хотите использовать что то новое, но не очень трудоемкое?\n 1 - Да\n 2 - Нет\n3 - Не знаю\n");
					scanf_s("%d", &g);

					switch (g)
					{
					case 1: printf("javascript\n");  break;
					case 2:
					case 3:
						printf("Какая у вас любимая игрушка?\n1 - Lego\n2 - Пластилин\n3 - Старенький, но любимый мишка\n");
						scanf_s("%d", &h);
						switch (h)
						{
						case 1: printf("python\n"); break;
						case 2: printf("ruby\n"); break;
						case 3: printf("php\n"); break;
						default: ("Некорретно выбрано число\n");
						}
						break;
					default: ("Некорретно выбрано число\n");
					}
				}
				break;

			case 2: printf("Что скажете о Microsoft?/n1 - Люблю его/n2 - Нелохо/n3 - Фуу/n");
				scanf_s("%d", &i);
				switch (i)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;

			case 3: printf("Какая os?/n1 - ios/n2 - android/n");
				scanf_s("%d", &j);
				switch (j)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("Некорретно выбрано число\n");
			}

			break;
		default: ("Некорретно выбрано число\n");
		}
		break;



	case 5: printf("Начните со Scratch, затем - python\n"); break;

	case 6: printf("1 - Найти работу\n2 - У меня есть идея для стартапа\n");
		scanf_s("%d", &k);

		switch (k)
		{
		case 1:printf("Какая платформа, сфера?\n1 - Веб\n2 - Корп. софт\n3 - мобильная\n4 - 3d игры\n5 - Я просто хочу деньги\n6 - я хочу работать в крупной it компании\n");
			scanf_s("%d", &l);

			switch (l)
			{
			case 4: printf("javascript\n"); break;
			case 1: printf("1 - фронтенд\n2 - бэкенд");
				scanf_s("%d", &m);
				switch (m)
				{
				case 1: printf("javascript/n"); break;
				case 2:
					printf("хочу работать на\n1 - корпорацию\n2 - стартап\n");
					scanf_s("%d", &o);
					switch (o)
					{
					case 1: ("Что скажете о Microsoft?/n1 - Люблю его/n2 - Нелохо/n3 - Фуу/n");
						scanf_s("%d", &w);
						switch (w)
						{
						case 1: printf("c#\n"); break;
						case 2:
						case 3: printf("java\n"); break;
						default: ("Некорретно выбрано число\n");
						}
						break;

					case 2:
						printf("Хотите использовать что то новое, но не очень трудоемкое?\n1 - Да\n 2 - Нет\n3 - Не знаю\n");
						scanf_s("%d", &s);

						switch (s)
						{
						case 1: printf("javascript\n");  break;
						case 2:
						case 3:
							printf("Какая у вас любимая игрушка?\n1 - Lego\n 2 - Пластилин\n 3 - Старенький, но любимый мишка\n");
							scanf_s("%d", &t);
							switch (t)
							{
							case 1: printf("python\n"); break;
							case 2: printf("ruby\n"); break;
							case 3: printf("php\n"); break;
							default: ("Некорретно выбрано число\n");
							}
							break;

						default: ("Некорретно выбрано число\n");
						}
					}

				} break;
			case 3: printf("Какая os?/n 1 - ios/n 2 - android/n");
				scanf_s("%d", &y);
				switch (y)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;
			case 2: ("Что скажете о Microsoft?/n1 - Люблю его/n2 - Нелохо/n3 - Фуу/n");
				scanf_s("%d", &v);
				switch (v)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;
			case 5: printf("java\n"); break;
			case 6: printf("1 - apple\n2 - google\n3 - microsoft\n4 - facebook\n");
				scanf_s("%d", &n);
				switch (n)
				{
				case 1: printf("objective c\n"); break;
				case 2:
				case 4: printf("python\n"); break;
				case 3: printf("c#\n"); break;
				}
				break;
			default: ("Некорретно выбрано число\n");
			}
		case 2: printf("Какая платформа, сфера?\n1 - Веб\n2 - Корп. софт\n3 - мобильная\n4 - 3d игры\n");
			scanf_s("%d", &p);

			switch (p)
			{
			case 1: printf("Ваш сервис будет в реальном времени как твиттер?\n1 - да\n2 - нет\n ");
				scanf_s("%d", &q);

				switch (q)
				{
				case 1: printf("javascript\n"); break;
				case 2: printf("Хотите использовать что то новое, но не очень трудоемкое?\n1 - Да\n2 - Нет\n3 - Не знаю\n");
					scanf_s("%d", &r);

					switch (r)
					{
					case 1: printf("javascript\n");  break;
					case 2:
					case 3:
						printf("Какая у вас любимая игрушка?\n 1 - Lego\n  2 - Пластилин\n  3 - Старенький, но любимый мишка\n");
						scanf_s("%d", &u);
						switch (u)
						{
						case 1: printf("python\n"); break;
						case 2: printf("ruby\n"); break;
						case 3: printf("php\n"); break;
						default: ("Некорретно выбрано число\n");
						}
						break;
					default: ("Некорретно выбрано число\n");
					}
				}
				break;

			case 2: printf("Что скажете о Microsoft?/n1 - Люблю его/n2 - Нелохо/n3 - Фуу/n");
				scanf_s("%d", &t);
				switch (t)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;

			case 3: printf("Какая os?/n1 - ios/n2 - android/n");
				scanf_s("%d", &x);
				switch (x)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("Некорретно выбрано число\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("Некорретно выбрано число\n");
			}

		default: ("Некорретно выбрано число\n");

		}


	default: ("Некорретно выбрано число\n");
	}
	system("pause");
}
#include<iostream>
#include<locale.h>
#include<stdio.h>

int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, u, t, v, w, x, y;

	printf("����� �� ������ ������� ����������������?\n1 - � �� ����, �������� �� ����\n2 - ������������\n3 - ���������\n4 - ������������\n5 - ��� �����\n6 - ����������\n ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1: printf("python\n"); break;

	case 2:
	case 3:
	case 4:
		printf("��� ���� ���� �� �������?\n1 - ���, ������ ���� ������\n2 - ��\n");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1: printf("����� �������� ��� �������� �������?\n1 - ������� ��������\n2 - ������ ��������\n3 - ����������� ��������\n4 - ����� ������� ����(����� ����� �����)\n ");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
			case 2:
				printf("python\n");
				break;
			case 3: printf("����� ������� �������?\n1 - �������\n2 - ������\n");
				scanf_s("%d", &d);

				switch (d)
				{
				case 1: printf("java\n"); break;
				case 2: printf("c\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("���������� ������� �����\n");
			}


		case 2: printf("����� ���������, �����?\n1 - ���\n2 - ����. ����\n3 - ���������\n4 - 3d ����\n");
			scanf_s("%d", &e);

			switch (e)
			{
			case 1: printf("��� ������ ����� � �������� ������� ��� �������?\n 1 - ��\n2 - ���\n ");
				scanf_s("%d", &f);

				switch (f)
				{
				case 1: printf("javascript\n"); break;
				case 2: printf("������ ������������ ��� �� �����, �� �� ����� ����������?\n 1 - ��\n 2 - ���\n3 - �� ����\n");
					scanf_s("%d", &g);

					switch (g)
					{
					case 1: printf("javascript\n");  break;
					case 2:
					case 3:
						printf("����� � ��� ������� �������?\n1 - Lego\n2 - ���������\n3 - ����������, �� ������� �����\n");
						scanf_s("%d", &h);
						switch (h)
						{
						case 1: printf("python\n"); break;
						case 2: printf("ruby\n"); break;
						case 3: printf("php\n"); break;
						default: ("���������� ������� �����\n");
						}
						break;
					default: ("���������� ������� �����\n");
					}
				}
				break;

			case 2: printf("��� ������� � Microsoft?/n1 - ����� ���/n2 - ������/n3 - ���/n");
				scanf_s("%d", &i);
				switch (i)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;

			case 3: printf("����� os?/n1 - ios/n2 - android/n");
				scanf_s("%d", &j);
				switch (j)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("���������� ������� �����\n");
			}

			break;
		default: ("���������� ������� �����\n");
		}
		break;



	case 5: printf("������� �� Scratch, ����� - python\n"); break;

	case 6: printf("1 - ����� ������\n2 - � ���� ���� ���� ��� ��������\n");
		scanf_s("%d", &k);

		switch (k)
		{
		case 1:printf("����� ���������, �����?\n1 - ���\n2 - ����. ����\n3 - ���������\n4 - 3d ����\n5 - � ������ ���� ������\n6 - � ���� �������� � ������� it ��������\n");
			scanf_s("%d", &l);

			switch (l)
			{
			case 4: printf("javascript\n"); break;
			case 1: printf("1 - ��������\n2 - ������");
				scanf_s("%d", &m);
				switch (m)
				{
				case 1: printf("javascript/n"); break;
				case 2:
					printf("���� �������� ��\n1 - ����������\n2 - �������\n");
					scanf_s("%d", &o);
					switch (o)
					{
					case 1: ("��� ������� � Microsoft?/n1 - ����� ���/n2 - ������/n3 - ���/n");
						scanf_s("%d", &w);
						switch (w)
						{
						case 1: printf("c#\n"); break;
						case 2:
						case 3: printf("java\n"); break;
						default: ("���������� ������� �����\n");
						}
						break;

					case 2:
						printf("������ ������������ ��� �� �����, �� �� ����� ����������?\n1 - ��\n 2 - ���\n3 - �� ����\n");
						scanf_s("%d", &s);

						switch (s)
						{
						case 1: printf("javascript\n");  break;
						case 2:
						case 3:
							printf("����� � ��� ������� �������?\n1 - Lego\n 2 - ���������\n 3 - ����������, �� ������� �����\n");
							scanf_s("%d", &t);
							switch (t)
							{
							case 1: printf("python\n"); break;
							case 2: printf("ruby\n"); break;
							case 3: printf("php\n"); break;
							default: ("���������� ������� �����\n");
							}
							break;

						default: ("���������� ������� �����\n");
						}
					}

				} break;
			case 3: printf("����� os?/n 1 - ios/n 2 - android/n");
				scanf_s("%d", &y);
				switch (y)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;
			case 2: ("��� ������� � Microsoft?/n1 - ����� ���/n2 - ������/n3 - ���/n");
				scanf_s("%d", &v);
				switch (v)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("���������� ������� �����\n");
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
			default: ("���������� ������� �����\n");
			}
		case 2: printf("����� ���������, �����?\n1 - ���\n2 - ����. ����\n3 - ���������\n4 - 3d ����\n");
			scanf_s("%d", &p);

			switch (p)
			{
			case 1: printf("��� ������ ����� � �������� ������� ��� �������?\n1 - ��\n2 - ���\n ");
				scanf_s("%d", &q);

				switch (q)
				{
				case 1: printf("javascript\n"); break;
				case 2: printf("������ ������������ ��� �� �����, �� �� ����� ����������?\n1 - ��\n2 - ���\n3 - �� ����\n");
					scanf_s("%d", &r);

					switch (r)
					{
					case 1: printf("javascript\n");  break;
					case 2:
					case 3:
						printf("����� � ��� ������� �������?\n 1 - Lego\n  2 - ���������\n  3 - ����������, �� ������� �����\n");
						scanf_s("%d", &u);
						switch (u)
						{
						case 1: printf("python\n"); break;
						case 2: printf("ruby\n"); break;
						case 3: printf("php\n"); break;
						default: ("���������� ������� �����\n");
						}
						break;
					default: ("���������� ������� �����\n");
					}
				}
				break;

			case 2: printf("��� ������� � Microsoft?/n1 - ����� ���/n2 - ������/n3 - ���/n");
				scanf_s("%d", &t);
				switch (t)
				{
				case 1: printf("c#\n"); break;
				case 2:
				case 3: printf("java\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;

			case 3: printf("����� os?/n1 - ios/n2 - android/n");
				scanf_s("%d", &x);
				switch (x)
				{
				case 1: printf("objective c\n"); break;
				case 2: printf("java\n"); break;
				default: ("���������� ������� �����\n");
				}
				break;

			case 4: printf("c++\n"); break;
			default: ("���������� ������� �����\n");
			}

		default: ("���������� ������� �����\n");

		}


	default: ("���������� ������� �����\n");
	}
	system("pause");
}
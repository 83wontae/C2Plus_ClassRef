#include <iostream>

using namespace std;

int main()
{
	//array�迭
	int Korean[1000] = { 0, };

	//Korean[0] = 0 + 1 1;
	//Korean[1] = 1 + 1 2;
	//...
	//Korean[99] = 99 + 1 100;

	//1 - 100
	//1 - 100 ¦��
	//1 - 100 Ȧ��
	//1 - 100 3�� ���
	//if �Ⱦ���

	for (int i = 0; i < 100; ++i)
	{
		Korean[i] = i + 1;
		cout << Korean[i] << ", ";
	}

	for (int i = 1; i <= 50; ++i)
	{
		Korean[i] = i * 2;
		cout << Korean[i] << ", ";
	}

	for (int i = 0; i < 50; ++i)
	{
		Korean[i] = i * 2 + 1;
		cout << Korean[i] << ", ";
	}

	for (int i = 0; i < 4; ++i)
	{
		Korean[i] = 1;
		for (int j = 0; j <= i; j++)
		{
			Korean[i] = Korean[i] * 3;
		}
		cout << Korean[i] << ", ";
	}

	//int Sum = 0;
	//for (int i = 1; i < 101; ++i)
	//{
	//	Sum = Sum + i;
	//}

	//cout << Sum << endl;



	return 0;
}
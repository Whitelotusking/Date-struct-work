#include<iostream>
using namespace std;
#define MAXlength 99

int MAXINT;
int arr[MAXlength] = {};
int k;
int j = 1;
int p;
int CountMAXINT()
{
	MAXINT = 1;

	for (int i = 1; i < 31; i++)
	{


		MAXINT = MAXINT * 2;

	}//����ѭ��Ѱ�Ҽ������������������ֵ
	return MAXINT;
}

int Countandpreservation(int a,int maxint)
{
	for (int i = 1,l=1; i < a; i++)
	{
		j = j * 2;
		k = i ;
		l = l * k;
		p = i * j;
		arr[i - 1] = i*j;
		if (i > MAXlength)
		{
			return -1;
		}
		else if (p >= maxint)
		{
			return 0;
		}


	}//����׳˺ʹη��������鸳ֵ
}


int main()
{
	int a;
	int maxint;
	
	scanf_s("%d", &a);

	maxint = CountMAXINT();

	int m = 3;

    m=Countandpreservation( a, maxint);//���մ���ֵ����ֱ���������������ֵ

	if (m >= 3)//�ж��Ƿ���յ��˳����ֵ
	{
		for (int x = 0; x < a - 1; x++)
		{
			cout << arr[x] << endl;

		}
	}
	else
	{
		cout << m << endl;

	}

	system("pause");

}
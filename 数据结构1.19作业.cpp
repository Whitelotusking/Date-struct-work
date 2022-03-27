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

	}//利用循环寻找计算机允许的最大整型数值
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


	}//计算阶乘和次方并给数组赋值
}


int main()
{
	int a;
	int maxint;
	
	scanf_s("%d", &a);

	maxint = CountMAXINT();

	int m = 3;

    m=Countandpreservation( a, maxint);//接收错误值避免直接输出数组中所有值

	if (m >= 3)//判断是否接收到了出错的值
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
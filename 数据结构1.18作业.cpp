#include<string>
#include<iostream>
#include <sstream>
using namespace std;

struct race
{
	int point;
	int score;
	string schoolname;
	string sex;
	string project;

};




int main()
{
	race RaceSeqlist[5] = { {70,90,"A","��","�ﾶ"}, {69,92,"B","��","�ﾶ"} , {73,95,"C","��","�ﾶ"} , {50,81,"D","��","�ﾶ"} , {77,98,"E","��","�ﾶ"} };

	for (int i = 0; i < 5; i++)
	{
		cout <<  RaceSeqlist[i].point << "  " << RaceSeqlist[i].score <<  "  " << RaceSeqlist[i].schoolname << "  " << RaceSeqlist[i].sex <<  "  " << RaceSeqlist[i].project << endl;

	}
	for (int j = 0; j < 5; j++)
	{
		cout << (int)RaceSeqlist + j << endl;//����������ɵ����Ա��Ƿ�Ϊ�����ĵ�ַ�������Ա��˳��ṹ
	}
	system("pause");
}

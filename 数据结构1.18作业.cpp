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
	race RaceSeqlist[5] = { {70,90,"A","男","田径"}, {69,92,"B","男","田径"} , {73,95,"C","男","田径"} , {50,81,"D","男","田径"} , {77,98,"E","男","田径"} };

	for (int i = 0; i < 5; i++)
	{
		cout <<  RaceSeqlist[i].point << "  " << RaceSeqlist[i].score <<  "  " << RaceSeqlist[i].schoolname << "  " << RaceSeqlist[i].sex <<  "  " << RaceSeqlist[i].project << endl;

	}
	for (int j = 0; j < 5; j++)
	{
		cout << (int)RaceSeqlist + j << endl;//用来检测生成的线性表是否为连续的地址满足线性表的顺序结构
	}
	system("pause");
}

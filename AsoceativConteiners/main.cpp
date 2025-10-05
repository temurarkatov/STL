#include<iostream>
#include<string>
#include<map>
using std::cin;
using std::cout;
using std::endl;

#define tab             "\t"
#define delimeter "\t"

void main()
{
	setlocale(LC_ALL, "");

	std::map<int, std::string> week =
	{
		std::pair<int, std::string>(0, "Воскресенье"),
		std::pair<int, std::string>(1, "Понедельник"),
		std::pair<int, std::string>(2, "Вторник"),
		std::pair<int, std::string>(3, "Среда"),
		{4, "Четверг"},
		{5, "Пятница"},
		{6, "Суббота"},
		{7, "Воскресенье"},
	};
	for (std::map<int, std::string> ::iterator it = week.begin();it != week.end();++it)
	{
		cout << it->first << tab << it->second << endl;
	}
	cout << delimeter << endl;
	for (std::pair<int, std::string>i : week)
	{
		cout << i.first << tab << i.second << endl;
	}
	std::map<std::string, std::list<std::string>> dictionary =
	{
		{"occasionaly",{"иногда", "время от времени", "случайно", "изредка"}},
		{"causes",{"причина", "приводить к..."}},
		{"space",{"космос", "пространство", "пробел"}},
		{"void",{"пустота", "вакуум"}},
		{"sequence",{"последовательность", "ряд", "эпизод", "череда"}},
		{"consequence",{"следствие", "последствие", "вывод"}},
	};

}
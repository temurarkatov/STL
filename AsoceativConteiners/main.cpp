
#include<iostream>
#include<string>
#include<map>
#include<set>
#include<list>
using std::cin;
using std::cout;
using std::endl;

#define tab			"\t"
#define delimiter	"\n----------------------------------\n"

//#define STL_MAP
#define STL_SET

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_MAP
	//map - ��� ���������, ������ ������� �������� ������������ ����� ���� "����:��������" pair<key,value>
	std::map<int, std::string> week =
	{
		std::pair<int, std::string>(0, "�����������"),
		std::pair<int, std::string>(1, "������������"),
		std::pair<int, std::string>(2, "�������"),
		std::pair<int, std::string>(3, "�����"),
		{4, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{5, "�������"},
		{6, "�������"},
		{7, "�����������"},
	};
	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
	cout << delimiter << endl;
	for (std::pair<int, std::string> i : week)
	{
		cout << i.first << tab << i.second << endl;
	}
	cout << delimiter << endl;

	std::map<std::string, std::list<std::string>> dictionary =
	{
		{"occasionaly",{"������", "����� �� �������", "��������", "�������"}},
		{"causes",{"�������", "��������� �..."}},
		{"space",{"������", "������������", "������"}},
		{"void",{"�������", "������"}},
		{"sequence",{"������������������", "���", "������", "������"}},
		{"consequence",{"���������", "�����������", "�����"}},
	};

	/*for (std::map<std::string, std::list<std::string>>::iterator it = dictionary.begin(); it != dictionary.end(); 
	{
		cout.width(15);
		cout << it->first + ":";
		for (std::list<std::string>::iterator word = it->second.begin(); word != it->second.end(); ++word)
		{
			cout<<*word;
			cout<<(word==--it->second.end() ? ";" : ",");
		}
		cout<<endl;
	}*/

	for (std::pair<std::string, std::list<std::string>> i : dictionary)
	{
		cout.width(15);
		cout << i.first + ":";
		int count = 0;
		for (std::string word : i.second)
		{
		
			cout << word << (++count<i.second.size() ? ";" : ",");
		}
		cout << endl;
	}

#endif // STL_MAP

#ifdef STL_SET
	std::set<int> set = { 1024, 512, 2048, 128, 3072, 768 };
	for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;

	
#endif // STL_SET


}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void privet()
{
	cout<<"ver.1"<<endl;
	cout<<"Здравствуйте! Спасибо, что пользуетесь данным приложением. Если у вас есть какие-то"<<endl;
	cout<<"вопросы, задавайте их по адресу https://github.com/NexusRusCode. Приятного пользования!"<<endl;
}
void zadanie8()
{
	int b, c;
	privet();
	string a;
	cout<<"Введите тип задания из Решу ЕГЭ..."<<endl;
	cin>>a;
	if (a == "подсчет")
	{
		cout<<"Если в алфавите M символов, то количество всех"<<endl;
		cout<<"возможных «слов» (сообщений) длиной N равно Q = M^N"<<endl;
		cout<<"Введите по-русски искомую величину..."<<endl;
		cin>>a;
		cout<<"Введите по-русски известные величины через пробел..."<<endl;
		cin>>b>>c;
		if (a == "кол-во")
		{
			cout<<"Q = "<<pow(b, c);
		}
	}
}
int main()
{
	zadanie8();
}
#include <iostream>

using namespace std;
int main()
{
	string a="y3Woyx9EgXkpGWWde";//наш пароль
	string b="                 ";// итоговая строчка
	for (char i='A'; i<='z'; i++){
		
		for (int j=0;j<=17;j++){
			if (a[j] == i)//если элемент пароля такой то равен какому то из алфавит
			{
				cout<<"success"<<i<<endl;
				b[j]=i;// то в итоговую сточку под опеределенным индексом присвоить совпадший

			}
			// далее тоже самое с цифрами
			else
				for (char f='0';f<='9'; f++){
					if (a[j] == f){
						cout<<"success"<<f<<endl;
						b[j]=f; 

					}
					else
						cout<<"no"<<endl;
				}
		}
	}
	cout<<"    "<<endl;
	cout<<"Ваш пароль :"<<b<<endl;// вывод пароля
}
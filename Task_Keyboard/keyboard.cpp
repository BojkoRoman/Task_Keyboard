#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	cout << "\tCopyright @ 2014 by Bojko Roman\n"<<endl;
	cout << "�������� ������ ��� ASCII �� ���� ������ " <<endl;
    int ascii;
    cout << "������i�� ���� ����i�� �� ����i����: "<<endl;
	cout << "--------------------------------------------" <<endl;
	for( ; ; )
	{
		ascii = getch();
		cout << "ASCII-���: " << ascii ;
		if(ascii == 32)
			cout << " C�����: ����i� " << endl;
		if(ascii == 13){
			cout << " C�����: ����� " << endl;
		}else{
			cout << " C�����: " << (char)ascii << endl;
		}
	}
	

	system("pause");
	return 0;
}
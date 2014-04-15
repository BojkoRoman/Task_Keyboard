#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	cout << "\tCopyright @ 2014 by Bojko Roman\n"<<endl;
	cout << "Програма показує код ASCII та його символ " <<endl;
    int ascii;
    cout << "Натиснiть любу клавiшу на клавiатурі: "<<endl;
	cout << "--------------------------------------------" <<endl;
	for( ; ; )
	{
		ascii = getch();
		cout << "ASCII-код: " << ascii ;
		if(ascii == 32)
			cout << " Cимвол: Пробiл " << endl;
		if(ascii == 13){
			cout << " Cимвол: Ентер " << endl;
		}else{
			cout << " Cимвол: " << (char)ascii << endl;
		}
	}
	

	system("pause");
	return 0;
}

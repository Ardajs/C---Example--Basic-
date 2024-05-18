#include <iostream>

using namespace std;

int main()
{
	int i, baslangic, son;
	int toplam = 0;
	cout << "Baslangic degeri:";
	cin >> baslangic;
	cout << "son degeri:";
	cin >> son;

	for (i=baslangic + 1; i < son; i++) 
		toplam += i;
		cout << "sonuc:" << toplam << endl;
	
}
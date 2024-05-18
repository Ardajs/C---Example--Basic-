// Girilen sayının asal olup olmadığını bulan c++ kodu
#include <iostream>

using namespace std;

int main()
{
	int sayi;
	int sayaç = 0;
	cout << "Lutfen Bir Sayi Giriniz:";    
	cin >> sayi;
     
	if (sayi <= 1) {
		cout << "ASAL DEGILDIR!" << endl;
	}
	else {

		for (int j = 2; j < sayi; j++) {
			if (sayi % j == 0) {
				sayaç++;
				break;
			}
		}
		if (sayaç == 0) {
			cout << "ASALDIR." << endl;
		}
		else {
			cout << "ASAL DEGILDIR." << endl;
		}
	}
}
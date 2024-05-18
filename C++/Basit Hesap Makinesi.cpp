#include <iostream>

using namespace std;

int main() {
	int a, b;
	int islem;
	
	cout << "Hesap Makinesine Hosgeldiniz..." << endl;

	cout << "1.islem : Toplama Islemi" << endl;
	cout << "2.islem : Cikarma Islemi" << endl;
	cout << "3.islem : Carpma Islemi" << endl;
	cout << "4.islem : Bolme Islemi" << endl;

	cout << "Islemi Giriniz:";

	cin >> islem;

	if (islem == 1) {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Toplam: " << a + b << endl;												
	}
	else if (islem == 2) {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Cikarma: " << a - b << endl;
	}
	else if (islem == 3) {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Carpma: " << a * b << endl;
	}
	else if (islem == 4) {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Bolme: " << a / b << endl;
	}
	else {
		cout << "Gecersiz islem girdiniz...";
	}
	return 0;
}
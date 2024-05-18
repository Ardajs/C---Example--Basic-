//Kullanıcıdan 10 tane sayı alarak bu sayıların ortalamasını gösteren c++ kodları
#include <iostream>

using namespace std;

int main()
{
	double toplam = 0;
	int sayi;
	for (int i = 1; i <= 10; i++) {
		cout << i << ". Sayiyi giriniz:";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "Girilen 10 sayinin toplami:" << (double)toplam / 10;

}
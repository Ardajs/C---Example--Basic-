#include <iostream>

using namespace std;

int main()
{
	int b1, b2, b3, sayi;
	cout << "3 basamakli bir sayi giriniz:";
	cin >> sayi;
	b1 = sayi / 100;
	b2 = sayi % 100 / 10;
	b3 = sayi % 10;
	cout << sayi << "sayisinin basamak toplami:";
	cout << b1 << "+" << b2 << "+" << b3 << "=" << b1 + b2 + b3 << endl;
}
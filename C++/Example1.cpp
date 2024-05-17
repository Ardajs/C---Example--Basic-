// Girilen 3 yazılı notunun ortalamasını hesaplayan ve gösteren c++ kodu
#include <iostream>

using namespace std;

int main()
{
	int s1, s2, s3;
	double ort;
	cout << "Lutfen 1. notu giriniz:";
	cin >> s1;
	cout << "Lutfen 2. notu giriniz:";
	cin >> s2;
	cout << "Lutfen 3. notu giriniz:";
	cin >> s3;
	cout << endl;
	ort = (double)(s1 + s2 + s3) / 3;
	cout << "Not Ortalamasi:" << ort;
	return 0;

}
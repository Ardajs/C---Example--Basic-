/*klavyeden girilen uzun ve kısa kenarlı dikdörtgenin alanı ve çevresini hesapla*/

#include <iostream>

using namespace std;

int main()
{
	int uzunkenar, kisakenar;
	int alan, cevre;
	cout << "Lutfen dikdortgenin kenarlarini giriniz..." << endl;
	cout << "Lutfen uzun kenari giriniz:";
	cin >> uzunkenar;
	cout << endl;
	cout << "Lutfen dikdörtgenin kisa kenarini giriniz:";
	cin >> kisakenar;
	cout << endl;

	char secim;
	cout << "Dikdortgenin Alanini Hesaplamak istiyorsaniz 0 i secin" << endl;
	cout << "Dikdortgenin Cevresini Hesaplamak istiyorsanz 1 i secin" << endl;
	cin >> secim;
	if (secim == '0') {
		alan = uzunkenar * kisakenar;
		cout << alan << endl;
	}
	if (secim == '1') {
		cevre = 2*(uzunkenar + kisakenar);
		cout << cevre << endl;
	}
	return 0;


}
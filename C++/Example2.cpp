// girilen iki sayının 3 ve 5 e tam bölünmediğini hesaplayan ve gösteren c++ kodu
#include <iostream> 

using namespace std;

int main()
{
	int sayi;
	cout << "Lutfen bir sayi giriniz:";
	cin >> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0) {
		cout << "Sayi 3 ve 5 e tam bolunuyor";
	}
	else {
		cout << "Sayi 3 ve 5 e tam bolunmuyor";
	}

}
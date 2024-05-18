#include <iostream>

using namespace std;

int main()
{
	int sayi, faktoriyel = 1;
	cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz:";
	cin >> sayi;
	for (int i =1; i <=sayi; i++) {
		faktoriyel *= i;
	}
	cout << "Faktoriyel:" << faktoriyel << endl; 




	 /* int number, factorial = 1;
	cout << "Please enter a number you want to find a factorial:";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		factorial *= i; }
		cout << "Factorial:" << factorial << endl;
	 */
}
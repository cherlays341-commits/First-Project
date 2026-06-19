#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian"); 
	SetConsoleOutputCP(65001);
	const double coffee = 45.50;
	int cups;
	cout << "Скільки чашок кофе ви хочете? " << endl;
	cin >> cups;
	double total = cups * coffee;
	cout << "Сума до оплати: " << total << endl;
	double payment;
	cout << "Введіть суму внесених грошей: " << endl;
	cin >> payment;
	if (payment == total) {
		cout << "Дякуюємо за покупку!" << endl;
	} else if (payment > total) {
		double change = payment - total;
		cout << "Дякуюємо за покупку! Ваша решта: " << change << endl;
	} if (payment < total) {
		double flaw = (total - payment);
		double Insufficient_funds = total < payment;
		cout << "Недостатньо коштів. Вам не вистачає: " << Insufficient_funds + flaw  << endl;
	}
	
}

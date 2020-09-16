#include <iostream>

using namespace std;




int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a > b) && (b > c)) {
		cout << c << ' ' << b << ' ' << a << '\n';
	}
	if ((b > a) && (c > b)) {
		cout << a << ' ' << b << ' ' << c <<'\n';
	}
	if ((a < b) && (b > c) && (a < c)) {
		cout << a << ' ' << c << ' ' << b << '\n';
	}
	if ((a > b) && (c > b) && (c > a)) {
		cout << b << ' ' << a << ' ' << c << '\n';
	}
	if ((b > a) && (b > c) && (a > c)) {
		cout << c << ' ' << a << ' ' << b << '\n';
	}
	if ((a > b) && (a > c) && (c > b)) {
		cout << b << ' ' << c << ' ' << a << '\n';
	} 
	system("pause");
	return 0;
	
	

}

#include<iostream>

using namespace std;

class abstraksiklas {
private: string x, y;

public:


	//medhot untuk mengisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}

};
int main() {
	abstraksiklas ak;
	ak.setXY("Yogyakarta", "kampus");
	ak.display();
	return 0;
}
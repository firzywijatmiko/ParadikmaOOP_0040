#include<iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() {
		cout << "halo saya fuction dari base class";
	}
};
class drivedclass : public baseclass {
public:
	void perkenalan() {
		cout << "halo saya funtion dari drived class";
	}
}; 
int main() {
	drivedclass a;
	a.perkenalan();
	return 0; 
}

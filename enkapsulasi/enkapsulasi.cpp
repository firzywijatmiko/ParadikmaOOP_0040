#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarno[10];
public:
	void setsaklarno(int i, string value) {
		saklarno[i] = value;
	}
	string getsaklarno(int i) {
		return saklarno[i];
	}
};
int main() {
	remotelampu lampurumah;


	lampurumah.setsaklarno(0, "lampu teras rumah");
	lampurumah.setsaklarno(1, "lampu ruang tamu");
	lampurumah.setsaklarno(2, "lampu kamar tidur");
	lampurumah.setsaklarno(3, "lampu dapur");

	cout << lampurumah.getsaklarno
		cout << lampurumah.getsaklarno

#include <iostream>
using namespace std;

class mahasiswa {
	public :
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}

};

int main() {
	mahasiswa mhs{1}; //ObjectMhs
	mhs.showNim(); // MemberaccesOperator

	mahasiswa& refMhs = mhs; // pointerreferencerefMhs
	refMhs.nim = 2; // MemberAccesOperator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; // PointerDiferentpMhs
	pMhs->nim = 3;
	mhs.showNim();
	return 0;

}
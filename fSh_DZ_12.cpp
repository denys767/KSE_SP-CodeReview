#include <iostream>
#include <fstream>
using namespace std;
#pragma warning (disable:4996)

//#include "c:\\settings\\set.set"


// Online C++ compiler to run C++ program online
#include <iostream>
// Online C++ compiler to run C++ program online
#include <iostream>

void fs(int* p, int qr, int qc, int sh) {
	int* psl = new int[sh];
	int qu = qr * qc, ci;
	int* ps, * pt;
	for (pt = psl, ps = p + qu - sh, ci = sh; ci-- /* !=0*/; ++pt, ++ps) {
		*pt = *ps; std::cout << " " << *pt;
	}std::cout << std::endl;
	for (pt = p + qu - 1, ps = p + qu - 1 - sh, ci = qu - sh; ci--; --pt, --ps)
	{
		*pt = *ps; std::cout << " " << *pt;
	}std::cout << std::endl;
	for (pt = p, ps = psl, ci = sh; ci--; +pt, ++ps)
	{
		*pt = *ps; std::cout << " " << *pt;
	}std::cout << std::endl;

	delete[]psl;
}
void fsStandart(int* p, int qrqc, int sh) {
	int* psl;
	memcpy(psl = new int[sh], p+qrqc-sh, sh*sizeof(*p));
	memcpy(p+sh, p, (qrqc-sh) * sizeof(*p));
	memcpy(p, psl, sh * sizeof(*p));
	delete[]psl;
}
int main() {

	int m2[2][4] = { {11,17,13,15},
	{23,27,21,29} };
	fs((int*)m2, 2, 4, 3);
	for (int j = 0; j < 4 * 2; ++j) std::cout << ' ' << m2[0][j];
	fsStandart((int*)m2, 2* 4, 3);
	std::cout << "\n\n";
	for (int j = 0; j < 4 * 2; ++j) std::cout << ' ' << m2[0][j];
	// Write C++ code here
	std::cout << "\nTry programiz.pro";

	return 0;
}
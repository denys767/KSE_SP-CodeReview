#include <iostream>
#include <fstream>
using namespace std;
#pragma warning (disable:4996)

//#include "c:\\settings\\set.set"


// Online C++ compiler to run C++ program online
#include <iostream>

int* fEr2(int R) {
	int* res, * ps, * pt, * pfin, * pv, v, ci;
	for (*(res = new int[R])=2,ci = R - 1, v = 2, pfin = res; ci--; *++pfin = ++v);
	for (ps = pv = res; 1; ++pv) {
		while (*pv == 0 && pv != pfin)
			++pv;// pv - param for '2 cycles'
		if (pv == pfin) return (int*)realloc(res, (ps - res)*sizeof(*res)) ;
		*ps++ = *pv;
		for (v = *pv, pt = pv; pt < pfin;*pt = 0, pt += v);
	}	
}

int* fEr(int& R) {
	int* res, * ps, * pt, * pfin, * pv, v, ci;
	res = new int[R];
	*res = 2;
	for (ci = R - 1, v = 2, pfin = res; ci--; ) {
		*++pfin = ++v;
	}
	for (ps = pv = res; 1; ++pv) {
		while (*pv == 0 && pv != pfin)
			++pv;
		if (pv == pfin)break;
		*ps = *pv; ++ps;
		for (v = *pv, pt = pv; pt < pfin; pt += v)
			*pt = 0;
	}
	R = ps - res;
	return res;
}
int main() {
	// Write C++ code here
	int* p, r = 100;
	p = fEr(r);
	for (int ci = r; ci--; ++p) std::cout << *p << ' ';
	delete[](p-r);
	std::cout << "\n";

	p = fEr2(100);
	for (int ci = _msize(p)/sizeof(*p), *pc=p; ci--;std::cout << *pc++ << ' ') ;
	delete[]p;
	std::cout << "\nTry programiz.pro";

	return 0;
}
#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	cout << " class size " << sizeof(CHealth) << endl;

	CHealth* students = new CHealth[5];
	cout << "# of customers " << CHealth::nCHealth << endl;

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand() % 4);
		(students + i)->run5min();
	}
	cout << "cel2faren 결과 : " << students[1].faren << endl;
	cout << "GetHealthAge 결과 : " << students[1].healthAge << endl;
	
	delete[] students;  // delete objects

	return 123;
}

#pragma once
using namespace std;
class CHealth {
public:
	// constructors
	CHealth() { nCHealth++; age = 20; beat5min = temp5min = nullptr; };
	CHealth(int a);
	// destructor
	~CHealth();
	// member data
	static int nCHealth;
	float height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
	float* beat5min, * temp5min;
	// member functions (methods)
	void measure();
	void measure(int);
	int  run5min();  // -1 emmergency
private:
	// private member data
	int age;
	float weight;
	// private member function
	void cel2faren(); // health2.cpp에 함수를 구현했으므로 cel2faren(){} 꼴에서 cel2faren(); 형태로 수정한다.
	void faren2cel();
	void GetHealthAge(); // health2.cpp에 함수를 구현했으므로 GetHealthAge(){} 꼴에서 GetHealthAge(); 형태로 수정한다.
	void GetBMI();
};

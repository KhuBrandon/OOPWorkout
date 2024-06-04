#pragma once
class fruit {
public:
	fruit() {
		price = 200; many = 2;
	}
	int many;
	float price;
	float show() {
		return price * many;
	}
};

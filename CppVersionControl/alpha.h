#pragma once
#include <iostream>
// adding new message in feature

int first(int num1 = 32) {
	std::cout << "first" << num1 << std::endl;
}
int second(int num2 = 22) {
	std::cout << "second" << num2 << std::endl;
}

int alpha() {
	std::cout << "sum of num : " << first() + second() << std::endl;
}
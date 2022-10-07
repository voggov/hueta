#include"pch.h"
#include<iostream>
#include<string>
#include"Base.h"

void Base::input() {

	std::cin >> employeesNumber;
	std::cin >> salary;
	std::cin >> address;
	std::cin >> companyName;
}
void Base::print() {
	std::cout << employeesNumber << std::endl;
	std::cout << salary << std::endl;
	std::cout << address << std::endl;
	std::cout << companyName<< std::endl;
}
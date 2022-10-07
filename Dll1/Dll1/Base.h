#pragma once

#include<string>

class Base {
	public:
		//Base()
		int getEmployeesNumber();
		int getSalary();
		std::string getAddress();
		std::string getCompanyName();

		void setEmployeesNumber(int employeesNumber);
		void setSalary(int salary);
		void setAddress(std::string address);
		void setCompanyName(std::string companyName);

		void print();
		void input();
	private:
		int employeesNumber;
		int salary;
		std::string address;
		std::string companyName;
};
#pragma once
#include <iostream>
using namespace std;

class Student
{
protected:
	char name, surname, number, group;
	int day, month, year;
public:
	Student(char name, char surname, char number, char group, int day, int month, int year);
	Student();
	virtual ~Student();
	void print_information1(Student &student1);
	void print_information2(Student &student2);
	void print_information3(Student &student3);
	void print_information0(Starosta &starosta);
	void setname(double name)
	{
		this->name = name;
	}
	void setsurname(double surname)
	{
		this->surname = surname;
	}
	void setnumber(double number)
	{
		this->number = number;
	}
	void setgroup(double group)
	{
		this->group = group;
	}
	void setday(double day)
	{
		this->day = day;
	}
	void setmonth(double month)
	{
		this->month = month;
	}
	void setyear(double year)
	{
		this->year = year;
	}
	char getname()
	{
		return name;
	}
	char getsurname()
	{
		return surname;
	}
	char getnumber()
	{
		return number;
	}
	char getgroup()
	{
		return group;
	}
	int getday()
	{
		return day;
	}
	int getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}
};


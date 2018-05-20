#pragma once
#include "Student.h"

class Starosta :
	public Student
{
public:
	Starosta(char name, char surname, char number, char group, int day, int month, int year) :
		Student(name, surname, number, group, day, month, year) {}
	Starosta() : Student(){}
	virtual ~Starosta();
	void print_information(int st);
	
};


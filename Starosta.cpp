#include "Starosta.h"
#include "Student.h"


Starosta::Starosta(char name, char surname, char number, char group, int day, int month, int year)
{
	this->day = day;
	this->group = group;
	this->month = month;
	this->name = name;
	this->number = number;
	this->surname = surname;
	this->year = year;
}
Starosta::Starosta()
{
	this->day = 0;
	this->group = ' ';
	this->month = 0;
	this->name = ' ';
	this->number = ' ';
	this->surname = ' ';
	this->year = 0;
}
Starosta::~Starosta(){}

void print_information(char st)
{
	switch (st)
		case '1':
			print_information1(Student &student1);

}

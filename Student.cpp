#include "Student.h"
#include "Starosta.h"



Student::Student(char name, char surname, char number, char group, int day, int month, int year)
{
	/*cout << "Enter name, surname, number, group of student and day, month and year of his birthday:" << endl;
	cin >> name >> surname >> number >> group >> day >> month >> year;*/
	this->day = day;
	this->group = group;
	this->month = month;
	this->name = name;
	this->number = number;
	this->surname = surname;
	this->year = year;
}
Student::Student()
{
	this->day = 0;
	this->group = ' ';
	this->month = 0;
	this->name = ' ';
	this->number = ' ';
	this->surname = ' ';
	this->year = 0;
}


Student::~Student()
{
}

void Student::print_information1(Student &student1)
{
	cout << student1.getname() << endl << student1.getsurname << endl << student1.getnumber << endl << student1.getgroup
		<< endl << student1.getday << '.' << student1.getmonth << '.' << student1.getyear << endl;
}
void Student::print_information2(Student &student2)
{
	cout << student2.getname() << endl << student2.getsurname << endl << student2.getnumber << endl << student2.getgroup
		<< endl << student2.getday << '.' << student2.getmonth << '.' << student2.getyear << endl;
}
void Student::print_information3(Student &student3)
{
	cout << student3.getname() << endl << student3.getsurname << endl << student3.getnumber << endl << student3.getgroup
		<< endl << student3.getday << '.' << student3.getmonth << '.' << student3.getyear << endl;
}
void Student::print_information0(Starosta &starosta)
{
	cout << starosta.getname() << endl << starosta.getsurname << endl << starosta.getnumber << endl << starosta.getgroup
		<< endl << starosta.getday << '.' << starosta.getmonth << '.' << starosta.getyear << endl;
}
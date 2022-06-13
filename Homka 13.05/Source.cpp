#include <iostream>
using namespace std;

struct education
{
	string ecity;
	string county;
	string educ;
	string numgroup;
};

class Student
{
public:
	string name;
	string surname;
	string birth;
	string phone;
	string city;
	string country;
	education ed;
	Student(string name, string surname,string birth,string phone,string city,string country,education ed)
	{
		this->name = name;
		this->surname = surname;
		this->birth = birth;
		this->phone = phone;
		this->city = city;
		this->country = country;
		this->ed = ed;
	}
};
void Show()
{
	struct education;
	class Student;
}


int main() {
	education ed;
	ed.county = "Ukraine";
	ed.ecity = "Kiev";
	ed.educ = "KNU";
	ed.numgroup = "332";
	Student s("Tom", "Rosh", "02.02.2002", "+380675464545", "Kiev", "Ukraine", ed);
	void Show(Student, education);
}
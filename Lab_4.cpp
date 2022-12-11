#include <iostream>
#include <conio.h>
#include "Evaporator.h"
#include "Battery.h"
#include "Cotton_wool.h"
#include "Goo.h"
#include "Device.h"
using namespace std;

int Evaporator::count = 0;

int main() {
	Evaporator evaporator1("evaporator1");
	Evaporator evaporator2("evaporator2");
	cout << "\n1-3: ";
	Evaporator::Count_of_evaporators();
	cout << "\t(Amount increased using static field and method.)\n4: " << endl;
	int id;
	evaporator1.getId(id);
	cout << "Evaporator1's id: " << id << "\t(Id returned using adress.)" << endl;
	evaporator2.getId(&id);
	cout << "Evaporator2's id: " << id << "\t(Id returned using pointer.)" << endl;

	cout << "\n6: Friend function: " << endl;
	setId(evaporator2, 10);
	evaporator2.getId(&id);
	cout << "evaporator2's id: " << id << "\t(Id changed with using friend function.)" << endl;

	cout << "\n7: Overloads: " << endl;
	cout << evaporator1.String_params() << "\t(evaporator1's params.)" << endl;
	cout << evaporator2.String_params() << "\t(evaporator2's params.)" << endl;
	Evaporator evaporator3 = evaporator1 + evaporator2;
	cout << evaporator3.String_params() << "\t(Overload '+'.)" << endl;
	evaporator3++;
	cout << evaporator3.String_params() << "\t(Overload '++'.)" << endl;
}
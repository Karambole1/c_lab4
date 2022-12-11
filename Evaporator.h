#pragma once
#include <string>
using namespace std;

class Evaporator
{
private:
	string name;		// Название
	int diameter;		// Диаметр
	int watts;			// Ватты
	int resistance;		// Сопротивление
	static int count;	// Общее кол-во испарителей
	int id;

public:
	Evaporator();
	Evaporator(string name);
	Evaporator(string name, int diameter, int watts, int resistance);
	~Evaporator();

	void Evaporator_INFO();

	void set_name(string name);
	string get_name();

	void set_diameter(int diameter);
	int get_diameter();

	void set_watts(int watts);
	int get_watts();

	void set_resistance(int resistance);
	int get_resistance();

	static void Count_of_evaporators();

	int getId(int&);
	int getId(int*);

	string String_params();

	Evaporator operator+ (const Evaporator&);
	Evaporator& operator++ ();
	Evaporator& operator++ (int);
	Evaporator& operator= (Evaporator&);

	friend void setId(Evaporator& evaporator, int newId);
};
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>

using namespace std;

class human
{
private:
	char* name;
	int age;
public:
	human() { name = nullptr; age = 0; }
	
	human(const char n[], int a = 0)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	human(const human& h) 
	{
		name = new char[strlen(h.name) + 1];
		strcpy_s(name, 1, h.name);
		age = h.age;
	}

	~human()
	{
		delete[] name;
	}

	void display() const
	{
		cout << "Имя: " << name << "\nВозраст: " << age << '\n';
	}
};
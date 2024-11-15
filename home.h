#pragma once
#include "Apartment.h"

class home
{
private:
	Apartment* apartment;
	int num_apart;

public:
	home(int num = 1) {
		apartment = new Apartment[num];
		num_apart = num;
	}
    home(const home& h) {
        apartment = new Apartment[h.num_apart];
        num_apart = h.num_apart;
        for (int i = 0; i < num_apart; i++) {
            apartment[i] = h.apartment[i];
        }
    }

    ~home() {
        delete[] apartment;
    }

    void print_apart() {
        for (int i = 0; i < num_apart; i++) {
            cout << "Apartment " << i + 1 << " Residents:" << std::endl;
            apartment[i].print();
        }
    }
};


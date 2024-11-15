#pragma once
#include "human.h"

class Apartment
{
private:
	human* hum;
	int num_hum;

public:
	Apartment(int num = 1) {
		hum = new human[num];
		num_hum = num;
	}
    Apartment(const Apartment& a) {
        hum = new human[a.num_hum];
        num_hum = a.num_hum;
        for (int i = 0; i < num_hum; i++) {
            hum[i] = a.hum[i];
        }
    }

    ~Apartment() {
        delete[] hum;
    }

    void print() {
        for (int i = 0; i < num_hum; i++) {
            hum[i].display();
        }
    }

};


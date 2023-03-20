#pragma once
#include <iostream>


//alien class for overloading
class Alien
{
private:
	float weight;
	float height;
	char gender;

public:
	// constructor 
	Alien(float w, float h, char g);

	Alien() {}

	//getters
	float getWeight() const;

	float getHeight() const;
	 
	char getGender() const;

	float getPerstige() const;

	//operators overloaders
	Alien operator+(const Alien& other) const;

	bool operator==(const Alien& other) const;

	bool operator!=(const Alien& other) const;

	bool operator>(const Alien& other) const;

	bool operator<(const Alien& other) const;

	bool operator>=(const Alien& other) const;

	bool operator<=(const Alien& other) const;

	Alien& operator=(const Alien& other);

};


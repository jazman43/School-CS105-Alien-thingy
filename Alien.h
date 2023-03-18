#pragma once
#include <iostream>



class Alien
{
private:
	float weight;
	float height;
	char gender;

public:
	Alien(float w, float h, char g);

	float getWeight() const;

	float getHeight() const;
	 
	char getGender() const;

	float getPerstige() const;

	Alien operator+(const Alien& other) const;

	bool operator==(const Alien& other) const;

	bool operator!=(const Alien& other) const;

	bool operator>(const Alien& other) const;

	bool operator<(const Alien& other) const;

	bool operator>=(const Alien& other) const;

	bool operator<=(const Alien& other) const;

	Alien& operator=(const Alien& other);

};


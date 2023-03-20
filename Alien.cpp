#include "Alien.h"

// constructor
Alien::Alien(float w, float h, char g)
{
    weight = w;
    height = h;
    gender = g;
}
//getters
float Alien::getWeight() const
{
    return weight;
}

float Alien::getHeight() const
{
    return height;
}

char Alien::getGender() const
{
    return gender;
}

float Alien::getPerstige() const
{
    int genderPoints = (gender == 'm') ? 2 : 3;
    return height * weight * genderPoints;
}

//this operator overload addes one alien with anther and returns a new alien
Alien Alien::operator+(const Alien& other) const
{
    //check if aliens are the same gender or not if they are return an empty alien
    if (gender == other.gender) {
        std::cout << "Aliens cannot be the same gender!\n";
        return Alien();
    }

    //set the weight and height of the new alien by getting the parent aliens and / by 2
    float offspringWeight = (weight + other.weight) / 2;
    float offspringHeight = (height + other.height) / 2;
    //set the gender randomly using the rand function
    char offspringGender = (rand() % 2 == 0) ? 'm' : 'f';

    //return new alien
    return Alien(offspringWeight, offspringHeight, offspringGender);
}

//the equles to checks the perstige of the two aliens
bool Alien::operator==(const Alien& other) const
{
    return (getPerstige() == other.getPerstige());
}
//the not equles checks the perstige of the two aliens
bool Alien::operator!=(const Alien& other) const
{
    return (getPerstige() != other.getPerstige());
}
//the greater then checks the perstige of the two aliens
bool Alien::operator>(const Alien& other) const
{
    return (getPerstige() > other.getPerstige());
}
//the less then checks the perstige of the two aliens
bool Alien::operator<(const Alien& other) const
{
    return (getPerstige() < other.getPerstige());
}
//the greater then and equle to checks the perstige of the two aliens
bool Alien::operator>=(const Alien& other) const
{
    return (getPerstige() >= other.getPerstige());
}
//the less then and equle to checks the perstige of the two aliens
bool Alien::operator<=(const Alien& other) const
{
    return (getPerstige() <= other.getPerstige());
}

//the assement operator is getting the data from one alien and stores it in a new alien
Alien& Alien::operator=(const Alien& other)
{
    weight = other.weight;
    height = other.height;
    gender = other.gender;

    return *this;

}

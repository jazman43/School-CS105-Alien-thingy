#include "Alien.h"

Alien::Alien(float w, float h, char g)
{
    weight = w;
    height = h;
    gender = g;
}

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

Alien Alien::operator+(const Alien& other) const
{
    if (gender == other.gender) {
        std::cout << "Aliens cannot be the same gender!\n";
        return Alien();
    }


    float offspringWeight = (weight + other.weight) / 2;
    float offspringHeight = (height + other.height) / 2;
    char offspringGender = (rand() % 2 == 0) ? 'm' : 'f';


    return Alien(offspringWeight, offspringHeight, offspringGender);
}

bool Alien::operator==(const Alien& other) const
{
    return (getPerstige() == other.getPerstige());
}

bool Alien::operator!=(const Alien& other) const
{
    return (getPerstige() != other.getPerstige());
}

bool Alien::operator>(const Alien& other) const
{
    return (getPerstige() > other.getPerstige());
}

bool Alien::operator<(const Alien& other) const
{
    return (getPerstige() < other.getPerstige());
}

bool Alien::operator>=(const Alien& other) const
{
    return (getPerstige() >= other.getPerstige());
}

bool Alien::operator<=(const Alien& other) const
{
    return (getPerstige() <= other.getPerstige());
}

Alien& Alien::operator=(const Alien& other)
{
    weight = other.weight;
    height = other.height;
    gender = other.gender;

    return *this;

}

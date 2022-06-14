#ifndef __DOG_H
#define __DOG_H

#include <string>

class Dog
{
public:
    Dog(std::string dog_name, int dog_age);
    friend class Cat;

private:
    std::string m_dog_name;
    int m_dog_age;
};

#endif

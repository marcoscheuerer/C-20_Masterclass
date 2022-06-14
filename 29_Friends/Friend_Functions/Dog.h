#ifndef __DOG_H
#define __DOG_H

#include <string>

class Dog
{

private:
    std::string m_name;
    int m_age;

    friend void debug_dog_info(const Dog &dog);
    friend void debug_dog_info();

public:
    Dog(std::string name, int age);
};

#endif // __DOG_H

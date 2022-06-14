#include "./Dog.h"
#include <iostream>

void debug_dog_info(const Dog &dog)
{
    std::cout << "Dog name: " << dog.m_name << ", dog age: " << dog.m_age << std::endl;
}

void debug_dog_info()
{
    Dog internal_dog("Pinch", 4);
    internal_dog.m_name = "Fluffy";
    std::cout << "Dog name: " << internal_dog.m_name << ", dog age: " << internal_dog.m_age << std::endl;
}

int main()
{
    Dog *myDog = new Dog("Bello", 13);

    debug_dog_info(*myDog);
    debug_dog_info();

    return 0;
}

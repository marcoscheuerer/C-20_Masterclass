#ifndef __CAT_H
#define __CAT_H

#include "./Dog.h"
#include <string>

class Cat
{
public:
    Cat(std::string cat_name);
    void show_info_about_dog(const Dog &dog) const;

private:
    std::string m_cat_name;
};

#endif // __CAT_H

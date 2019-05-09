#include "Unit.h"
#include <iostream>
#include <string>
#include <cmath>


void Unit::Enter_units()
{
    std::string first_, second_;
    double value;
    bool c, k;
    std::string units[4];
    units[0] = "mm";
    units[1] = "cm";
    units[2] = "m";
    units[3] = "km";
    std::cout<<"Enter unit(mm, cm, m, km) : ";
    std::cin>>first_;
    for (int i=0;i<4;i++)
    {
        if(units[i]==first_)
        {
            c = 1;
            break;
        }
        c = 0;
    }
    std::cout<<"\n"<<"Enter unit to convert to(mm, cm, m, km) : ";
    std::cin>>second_;
    for (int i=0;i<4;i++)
    {
        if(units[i]==second_)
        {
            k = 1;
            break;
        }
        k = 0;
    }


}

#include "zoo.h"

//以下是Money类的构造和析构函数
Money::Money(double&& d)
:Cents(0)
{
    Cents=d;
    d=0;
}




//以下是类的构造和析构函数

//以下是类的构造和析构函数
//以下是类的构造和析构函数
//以下是类的构造和析构函数
//以下是类的构造和析构函数







std::string AnimalFood::GetAnimalFood_FoodType() const {
        return AnimalFood_FoodType;
    }

void AnimalFood::SetAnimalFood_FoodType(std::string AnimalFood_FoodType) {
        AnimalFood_FoodType = AnimalFood_FoodType;
    }

int AnimalFood::GetAnimalFood_FoodAmount() const {
        return AnimalFood_FoodAmount;
    }

void AnimalFood::SetAnimalFood_FoodAmount(int AnimalFood_FoodAmount) {
        AnimalFood_FoodAmount = AnimalFood_FoodAmount;
    }

AnimalFood::AnimalFood(const char ch [] )
:AnimalFood_FoodType(std::string(ch))
{
    delete [] ch;
}







int AnimalEnclosure::GetAnimalEnclosure_DirtLevel() const {
    return AnimalEnclosure_DirtLevel;
}

void AnimalEnclosure::SetAnimalEnclosure_DirtLevel(int AnimalEnclosure_DirtLevel) {
    AnimalEnclosure_DirtLevel = AnimalEnclosure_DirtLevel;
}

bool AnimalEnclosure::GetAnimalEnclosure_Status() const {
    return AnimalEnclosure_Status;
}

void AnimalEnclosure::SetAnimalEnclosure_Status(bool AnimalEnclosure_Status) {
    AnimalEnclosure_Status = AnimalEnclosure_Status;
}
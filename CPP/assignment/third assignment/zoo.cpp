#include "zoo.h"


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

AnimalFood::AnimalFood(std::string str)
:AnimalFood_FoodType(str)
{

}







int GetAnimalEnclosure_DirtLevel() const {
    return AnimalEnclosure_DirtLevel;
}

void SetAnimalEnclosure_DirtLevel(int AnimalEnclosure_DirtLevel) {
    AnimalEnclosure_DirtLevel = AnimalEnclosure_DirtLevel;
}

bool GetAnimalEnclosure_Status() const {
    return AnimalEnclosure_Status;
}

void SetAnimalEnclosure_Status(bool AnimalEnclosure_Status) {
    AnimalEnclosure_Status = AnimalEnclosure_Status;
}
#ifndef ZOO_H
#define ZOO_H


#include <string>
#include <iostream>
#include <vector>

class Animal
{
private:
    int Animal_EatenFoodAmount;
    int Animal_EatenFoodAnount;

public:    

    int GetAnimal_EatenFoodAmount() const {
        return Animal_EatenFoodAmount;
    }

    void SetAnimal_EatenFoodAmount(int Animal_EatenFoodAmount) {
        this->Animal_EatenFoodAmount = Animal_EatenFoodAmount;
    }

    int GetAnimal_EatenFoodAnount() const {
        return Animal_EatenFoodAnount;
    }

    void SetAnimal_EatenFoodAnount(int Animal_EatenFoodAnount) {
        this->Animal_EatenFoodAnount = Animal_EatenFoodAnount;
    }


    Animal(/* args */);
    ~Animal();
};




class AnimalFood
{
private:
    std::string AnimalFood_FoodType;
    int AnimalFood_FoodAmount;


public:
    std::string GetAnimalFood_FoodType()const;
    void SetAnimalFood_FoodType(std::string AnimalFood_FoodType);
    int GetAnimalFood_FoodAmount() const;
    void SetAnimalFood_FoodAmount(int AnimalFood_FoodAmount);    
    AnimalFood(std::string);
    ~AnimalFood();
};

class AnimalEnclosure
{
private:
    int AnimalEnclosure_DirtLevel;
    bool AnimalEnclosure_Status;


public:
    int GetAnimalEnclosure_DirtLevel() const ;
    void SetAnimalEnclosure_DirtLevel(int AnimalEnclosure_DirtLevel) ;
    bool GetAnimalEnclosure_Status() const ;
    void SetAnimalEnclosure_Status(bool AnimalEnclosure_Status) ;
    AnimalEnclosure(/* args */);
    ~AnimalEnclosure();
};
class Elephant:public Animal
{
private:
    int Elephant_TrunkLength;
public:
    Elephant(/* args */);
    ~Elephant();
    
};

class Giraffe:public Animal
{
private:
    int Giraffe_NeckLength;
public:
    Giraffe(/* args */);
    ~Giraffe();
};

class Monkey:public Animal
{
private:
    int Monkey_ArmLength;
public:
    Monkey(/* args */);
    ~Monkey();
};


class Person
{
private:
    std::string Person_Name;
    std::string Person_Age;

public:
    std::string GetPerson_Name() const {
        return Person_Name;
    }

    void SetPerson_Name(std::string Person_Name) {
        this->Person_Name = Person_Name;
    }

    std::string GetPerson_Age() const {
        return Person_Age;
    }

    void SetPerson_Age(std::string Person_Age) {
        this->Person_Age = Person_Age;
    }
    Person(/* args */);
    ~Person();
};

class ZooKeeper:public Person
{
private:
    int ZooKeeper_CleanDays;
public:
    ZooKeeper(/* args */);
    ~ZooKeeper();
};

class Visitor:public Person
{
private:
    std::string Visitor_ID;
public:
    Visitor(/* args */);
    ~Visitor();
};


class Child:public Visitor
{
private:
    AnimalFood Peanuts={"Peanuts"};
public:
    Child(/* args */);
    ~Child();
};












#endif ZOO_H
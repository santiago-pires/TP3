#include "zooanimal.h"
#include <iostream>

using namespace std;


ZooAnimal::ZooAnimal()
{

}

// ZooAnimal#1

void ZooAnimal::Create(char *namm, int num, int day, int w)
{
    name=namm;
    cageNumber=num;
    weightDate=day;
    weight=w;
}

void ZooAnimal::Destroy ()
   {
    delete [] name;
   }

   // -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
return name;
}

   // -------- member function to return the number of days
   // -------- since the animal was last weighed
int ZooAnimal::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   }

// ZooAnimal#2

//problems with inline, "it appears undefined function when it seems to be properly defined"
int ZooAnimal::reptWeightDate(){
    return this->weightDate;
}

inline void ZooAnimal::changeWeightDate(int today){
    weightDate=today;
}

void ZooAnimal::isMotherOf(ZooAnimal &zoo){
    mother=&zoo;
}

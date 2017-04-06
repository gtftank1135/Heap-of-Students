//Incluedes all the things needed to build date.cpp
#include <string>
#include "date.h"
#include <iostream>

using namespace std;
//constructor
date::date(){
}
//Get methods designed to return private variables of the date class
string date::getday(){
   return date::day;
}

string date::getmonth(){
   return date::month;
}

string date::getyear(){
   return date::year;
}
//A super setter that takes in multiple values and sets the private variables at the same time

void date::supersetter(string dday,string dmonth,string dyear){
   date::day = dday;
   date::month = dmonth;
   date::year = dyear;
}
//No deconstroctor is needed
//end date.cpp


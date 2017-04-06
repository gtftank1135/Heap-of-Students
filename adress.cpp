//only adress.h is neaded but the other librarys have built in ifndef statements
#include "adress.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
adress::adress(){
}
//These are all getter methods designed to return a private variable in the adress class
string adress::getline1(){
   return adress::line1;
}

string adress::getline2(){
   return adress::line2;
}

string adress::getcity(){
   return adress::city;
}

string adress::getstate(){
   return adress::state;
}

string adress::getzipcode(){
   return adress::zipcode;
}
//This super setter allows us to take in multiple parameters and set all the variables within adress at once
void adress::supersetter(string l1ad, string l2ad, string cad, string sad, string zad){
   line1 = l1ad;
   line2 = l2ad;
   city = cad;
   state = sad;
   zipcode = zad;
}
//A deconstructor is not needed because there are no heap instances created on the heap in adress so the default will do
//end adress.cpp

   

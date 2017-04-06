//Includes everything needed for adress which is just string
#ifndef ADRESS_H
#define ADRESS_H
#include <string>


class adress{
//Private string varibles use to store each students adress information
private:
   std::string line1;
   std::string line2;
   std::string city;
   std::string state;
   std::string zipcode;
//Public methods 
public:
   //All getter methods for the private variables
   std::string getline1();
   std::string getline2();
   std::string getcity();
   std::string getstate();
   std::string getzipcode();
   //constructor
   adress();
   //stter used to set all the values of the private variables
   void supersetter(std::string l1ad, std::string l2ad, std::string cad, std::string sad, std::string zad);
};
#endif
//end adress.h

//All these libraries are included in student.h so they do not hav eot be in student.cpp
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <fstream>
#include <sstream>//Important for string manipulation
#include <iostream>//required for string stream
#include "adress.h"//both date and adress fiels are needed since instances are created
#include "date.h"

class student{
private:
   //A list of private variables that are mostly strings
   std::string line;//These variables are used to stor all the student info
   std::string base;//They are then passes through the super setters to be assigned to the right classes
   std::string dob;
   std::string dog;
   std::string longreport;
   std::string shortreport;
   std::string abcreport;
   std::string fname;
   std::string lname;
   std::string gpa;
   std::string credits;
   std::string add;
   std::string city;
   std::string state;
   std::string zip;
   std::string bday;
   std::string bmonth;
   std::string byear;
   std::string gday;
   std::string gmonth;
   std::string gyear;
   std::string fadress;

   //Thes variables are used for string manipulation
   std::stringstream splicer;
   std::string stradd;
   //These are creating pointers to instances are the heap
   date* datob;
   date* datog;
   adress* living;
//All the public functions    
public:
   //constructor and deconstructor
   student();
   ~student();
   //Geter methods
   std::string getfname();
   std::string getlname();
   std::string getgpa();
   std::string getcredits();
   std::string getadress();
   std::string getdob();
   std::string getgraddate();
   //The super setter
   void  supersetter(std::string line);
   //The reports that will return the values needed for the output fiels
   std::string printlongreport();
   std::string printshortreport();
   std::string printabcreport();
};

#endif 

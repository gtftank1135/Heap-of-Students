//Includees all the things required for date
#ifndef DATE_H
#define DATE_H
#include <string>

class date{
//Alll the private varuables within date used to store draduation and birth dates of students
private:
   std::string day;
   std::string month;
   std::string year;

//the public methods
public:
   //consturcor
   date();
   //seter for all the private variables
   void supersetter(std::string ddate, std::string dmonth, std::string dyear);
   
   //returns all the private variables
   std::string getday();
   std::string getmonth();
   std::string getyear();
}; 

#endif
//end date.h

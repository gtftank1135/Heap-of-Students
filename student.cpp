#include "student.h"//includes student the only include

using namespace std;

student::student(){
   //These crete new instances of date and adress on the heap that need to be deleted
   datob = new date;
   datog = new date;
   living = new adress;
}
//deconstructor
student::~student(){
   //This deletes those dates and adresses
   delete this->datob;
   delete this->datog;
   delete this->living;
//deletes instances of ddate and adress
}
//This was the stranges part and where valgrind was telling me I had an error
void student::supersetter(string line){//This line started a segmentation fault but I could not figure it out
   splicer<<line;
      getline(splicer, lname, ',');//Pulls a part of the ss out and insterts it into the proper variable
      getline(splicer, fname, ',');
      getline(splicer, stradd, ',');
      getline(splicer, add, ',');
      getline(splicer, city, ',');
      getline(splicer, state, ',');
      getline(splicer, zip, ',');
      getline(splicer, bday, '/');
      getline(splicer, bmonth, '/');
      getline(splicer, byear, ',');
      getline(splicer, gday, '/');
      getline(splicer, gmonth, '/');
      getline(splicer, gyear, ',');
      getline(splicer, gpa, ',');
      getline(splicer, credits);
      splicer.clear();
      splicer.str("");
      datob->supersetter(bday, bmonth, byear);
      datog->supersetter(gday, gmonth, gyear);
      living ->supersetter(stradd, add, city, state, zip);
   
//splices and arranges strings
}
//Gets gpa
string student::getgpa(){
   return gpa;
}
//Gets first name
string student::getfname(){
   return fname;
}
//Gets Last Name
string student::getlname(){
   return lname;
}
//Gets Credits
string student::getcredits(){
   return credits;
}

string student::getadress(){
   //Cantatanates a string for the adress
   fadress = this->living->getline1() + "," + living->getline2() + "," + living->getcity() + "," + living->getstate() + "," + living->getzipcode();
    //get information from the adress class
   return fadress;
}

string student::getdob(){
   //Cancatonates the date of birth using geters fromt he date class
   dob = datob->getday() + "/" + datob->getmonth() + "/" + datob->getyear();
   //get information from the date class
   return dob;
}
   //cancatonates the graduation date using getters from the date class
string student::getgraddate(){
   dog = datog->getday() + "/" + datog->getmonth() + "/" + datog->getyear();
   //get information from date class
   return dog;
}
   //Cancatonates the long report using meathods from student that pull form the other classes
string student::printlongreport(){
   //catanate information
   longreport = lname + "," + fname + "," + getadress() + "," + getdob() + "," + getgraddate() + "," + gpa + "," + credits;
   return longreport;
}
//returns the short report which is just first name and last name
string student::printshortreport(){
   shortreport = lname + "," + fname;// what else
   return shortreport;
}
//returns abc report last and first name which is just short report but why not add another method.
string student::printabcreport(){
   abcreport = lname + "," + fname;
   return abcreport;
}
//End student.cpp

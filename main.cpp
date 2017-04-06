//Gavin Franklin
//Heap of Students
//I ran inot a valgrind issue that I could not solve. I don't think
//it was a memory leak because the code that the error reffrenced to 
//was manipulating strings. 
#include "student.h"//Includes my student class
#include <string>
#include <fstream>//needed for oufile and infile
#include <iostream>
#include <cstdio>//for input form the user
using namespace std;
//begins main
//The main file is all one function because I could not manipulate an array with multiple function outside of an object.
int main(){
   //for the loops
   string holder;
   bool keepgoing = true;
   ifstream infile;//declares  the infile
   infile.open("students.dat");//Opens student.dat
   student* s = new student[50];
   getline(infile,holder);
   for(int a=0; a<50; a++){
        getline(infile, holder);//Pulls a full line form student.dat
        s[a].supersetter(holder);//Passes the values to the superseter meathod within each student
      
   }
   infile.close();//closes infile
  //Collects user input to let them choose which file they want
   while(keepgoing){ 
      string choice;
      cout << "Would you like 1) Short Report  2) Full Report  3)ABC Report 4)End" << endl;
      cin >> choice;
    
   
      //The short report
      if (choice == "1"){
         ofstream srep;
         srep.open("shortReport.txt");//Opens the first outfile
         for(int b=0; b<50; b++){
            srep << s[b].printshortreport();//Calls the meathod of the student class and inputs it into the outfile
            srep << endl;
         
         }
         srep.close();//closes the outfile
   
       //The long report
       }else if (choice == "2"){
           ofstream lrep;
           lrep.open("fullReport.txt");//opens the second outfile
           for(int c=0; c<50; c++){
              lrep << s[c].printlongreport();//Calls the meathod of the student call and inputs it tinot the oufile
              lrep << endl;
            
           }
           lrep.close();//closes the outile

       //the abc report
       }else if (choice == "3"){
          string namhold;
          string  namvalues[50];//to hold students names for soring
          ofstream abcrep;
          abcrep.open("alphaReport.txt");//Opens the third outfile
          for(int d=0; d<50; d++){
             namvalues[d]=s[d].printabcreport();//calls the outfile meathod
          }
          //This is the sorting meathod that exchanges the values of each name int he array based off their aski values
          for(int e=0; e<50; e++){
             for(int f=0; f<49; f++){
                if (namvalues[f] > namvalues[f+1]){
                   namhold = namvalues[f];
                   namvalues[f] = namvalues[f+1];//Swaps values
                   namvalues[f+1] = namhold;
                }
             }
          }
          //prints out the new values to the third output file
          for(int g=0; g<50; g++){
             abcrep << namvalues[g];
             abcrep << endl;
          }
          //closes the output file
          abcrep.close();
       
       //This Shuts down the while loop so the user can run it as many tiems as they want as long as their input is proper    
       }else{
          keepgoing = false;
       }
   }
   
        delete[]s;//This removes the array of pointers and what they're pointing to

}
    

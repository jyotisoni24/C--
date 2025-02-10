#include<iostream>
 using namespace std;
 
 class Student {
     protected:
     string name;
     int rollNo;
     
     public:
     void getStudentDetails(){
         cout<<"Enter Students Name";
         cin>>name;
         cout<<"Enter Roll Number";
         cin>>rollNo;
     }
     
 };
 class Subject : public Student{
     protected :
     string subjectName;
     public:
     void getSubjectDetails(){
         cout<<"Enter Subject Name";
         cin>>subjectName;
     }
     
 };
 
 class Exam : public Subject{
     protected:
     float marks;
     public :
     void getMarks(){
         cout<<"Enter marks obtained";
         cin>>marks;
     }
 };
 class Result : public Exam{
     public:
     void displayResult(){
         cout<<"Result is "<< (marks>=40?"Pass":"Fail")<<endl;
     }
 };
 
 int main(){
     Result studentResult;
     studentResult.getStudentDetails();
      studentResult.getSubjectDetails();
      studentResult.getMarks();
      studentResult.displayResult();
 }

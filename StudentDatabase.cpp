
#include<iostream>

using namespace std;

class Student_db
{
  int id;
  char name[30];
  int rollno = 0;
  float maths = 0;
  float hindi = 0;
  float science = 0;
  float social = 0;
  float total_marks_average = 0;
  char grade;

  
  public:
  
    // Declaration of function
    void getdata();
  
    // Declaration of function
    void putdata();

    float cal_averagemarks(float a, float , float c, float d);
};


float Student_db :: cal_averagemarks(float a, float b, float c, float d)
{

float result = 0;

result = (a+b+c+d)/4.0;

if(result>=75)
{
    grade = 'A';
}
else if(result >= 60 && result <75)
{
    grade = 'B';
}
else if(result >= 40 && result <60)
{
    grade = 'C';

}
else{
    grade = 'D';
}

return result;

}


void Student_db :: getdata(void){

cout << "Enter name:";
cin >> name;
cout << "Enter Roll No : "; 
cin >> rollno;
cout << "Enter maths Marks : "; 
cin >> maths;
cout << "Enter science Marks : "; 
cin >> science;
cout << "Enter social marks : "; 
cin >> social;
cout << "Enter hindi : "; 
cin >> hindi;

 total_marks_average = cal_averagemarks(maths,science,social,hindi);


}


void Student_db :: putdata(void){

cout << "Name:" << name << "\t";
cout << "Roll No : " << rollno << "\t"; 
cout << "Total average Marks : " << total_marks_average << "\n"; 
cout << "Overall Grade : " << grade << "\n"; 


}

int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Student_db student[30]; 
  int n, i;
  cout << "Enter Number of student : ";
  cin >> n;
  
  // Accessing the function
  for(i = 0; i < n; i++)
  {
    cout << "Enter of student " << i+1 << "\n";
    student[i].getdata();
  }
    
  
  cout << "student Data - " << endl;
  
  // Accessing the function
  for(i = 0; i < n; i++) 
  {
    student[i].putdata();
  }
    
}
#include<iostream>
using namespace std;
class student
{
protected:
int rollnumber;
string name;
public:
student(int rollnumber, string name)
{
this->rollnumber=rollnumber;
this->name=name;
cout<<endl<<"Name of the student is : "<<name<<endl;
cout<<"Roll no of the student is : "<<rollnumber<<endl;
}
string return_name(){
return name;
}
};

65

class exam : public student
{
protected:
int phy_mark,maths_mark,english_mark,oop_mark,electrical_mark,esb_mark;
public:
exam(int rollnumber,string name,int phy,int maths,int eng,int oop,int ele,int
esb):student(rollnumber,name)
{
phy_mark=phy;
maths_mark=maths;
english_mark=eng;
oop_mark=oop;
electrical_mark=ele;
esb_mark=esb;
cout<<"Marks of "<<return_name()<<" in Physics is : "<<phy_mark<<endl;
cout<<"Marks of "<<return_name()<<" in Maths is : "<<maths_mark<<endl;
cout<<"Marks of "<<return_name()<<" in English is : "<<english_mark<<endl;
cout<<"Marks of "<<return_name()<<" in Object Oriented Programming is :
"<<oop_mark<<endl;
cout<<"Marks of "<<return_name()<<" in Electrics Science is : "<<electrical_mark<<endl;
cout<<"Marks of "<<return_name()<<" in Entreprenuership and Startup Business is :
"<<esb_mark<<endl;
}
};
class result : public exam
{

66

int total_marks;
float percentage;
public:
result(int rollnumber,string name,int phy,int maths,int eng,int oop,int ele,int
esb):exam(rollnumber,name,phy,maths,eng,oop,ele,esb)
{
total_marks=phy_mark+maths_mark+english_mark+oop_mark+electrical_mark+esb_mar
k;
percentage=(float)total_marks/6;
cout<<"Total mark of the student is : "<<total_marks<<endl;
cout<<"Percentage of the student is : "<<percentage<<"%"<<endl;
}
};
int main()
{ string s;
int m1,m2,m3,m4,m5,m6,rn,ns;
cout<<"Enter the number of students you want to add in database : ";
cin>>ns;
for(int i=0;i<ns;i++)
{
cout<<"Enter the name of student : ";
cin>>s;
cout<<"Enter the roll number of student : ";
cin>>rn;
cout<<"Enter marks in Physics out of 100 : ";
cin>>m1;

67

cout<<"Enter marks in Maths out of 100 : ";
cin>>m2;
cout<<"Enter marks in English out of 100 : ";
cin>>m3;
cout<<"Enter marks in Object Oriented Programming out of 100 : ";
cin>>m4;
cout<<"Enter marks in Electrical science out of 100 : ";
cin>>m5;
cout<<"Enter marks in Entreprenuership and Startup Business out of 100 : ";
cin>>m6;
result(rn,s,m1,m2,m3,m4,m5,m6);
cout<<endl<<endl<<endl;
}
return 0;
}

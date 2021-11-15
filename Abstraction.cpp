#include<iostream>
using namespace std;
// ABTRACTION: hiding complex things behind the things that look simple
//Example: camera that we use,userpoint of view we just click the button to take photo
// but they have hidden all the process of taking a image

class AbstractEmployee{
   virtual void askForPro() = 0; // this is called as Abtract class or pure virtual class
};

class Employee : AbstractEmployee{
private:
    string Name ;
    string Company ;
    int Age ;
public:
    void setData(string  name,string company,int age){ 
        Name = name;
        Company = company;
        if(age>=18){
        Age = age;
        }
    }
    void getData(){ 
        cout<< "Name - "<<Name<<endl;
        cout<< "Company - "<<Company<<endl;
        cout<< "Age - "<<Age<<endl;
    }
    void askForPro(){
        if(Age>30){
            cout<<Name<<", got promoted"<<endl;
        }
        else{
            cout<<"Sorry! no promotion"<<endl;
        }
    }
};


int main(){
    
    Employee e1;
    e1.setData("Mithun","Wipro",21);
    e1.askForPro();
    
    return 0;
}
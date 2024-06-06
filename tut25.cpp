# include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setdata(){
        salary = 122;
        cout<<"Enter the employee id"<<endl;
        cin>>id;
    }
    void getdata(){
        cout<<"The employee id is "<<id<<endl;
    }
};

//                      ***************Array of object************

int main(){

    // Normal method 
    // employee tarun, subodh, rajeev, amit;
    /*tarun.setdata();
    tarun.getdata();*/

    // -->new method 
    employee fb[4];
    for (int  i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    
    
    return 0 ;
}
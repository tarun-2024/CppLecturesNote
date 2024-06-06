# include <iostream>
using namespace std;
class Time{
    int h, m, s;
    public:
        void setData();
        void getData();
        void sumData(Time t1 , Time t2);
};

    void Time::setData(){
        int a , b , c;
        cout<<"Enter the hour , minute and second"<<endl;
        cin>>a>>b>>c;
        h = a;
        m = b;
        s = c;
    }
    void Time::getData(){
        cout<<"The hour is "<<h<<", minute is "<<m<<" & second is "<<s<<endl;
    }
    void Time::sumData(Time t1, Time t2){
        m = (t1.s+t2.s)/60;
        h = (t1.m+t2.m+m)/60;
        s = (t1.s + t2.s)%60;
        m = (t1.m + t2.m)%60 +m;
        h = t1.h+t2.h+h;
    }



int main(){
    Time t1, t2, t3;
    t1.setData();
    t1.getData();
    t2.setData();
    t2.getData();
    t3.sumData(t1, t2);
    t3.getData();

    
    
    return 0 ;
}
#include<iostream>
using namespace std;

struct Cars{

    string color;
    string mark;
    string model;
};



int main(){
    Cars car1;
    car1.color = "red";
    car1.mark = "chevrale";
    car1.model = "00-001";


    cout<<car1.color<<endl;
    cout<<car1.mark<<endl;
    cout<<car1.model<<endl;


    return 0;
}
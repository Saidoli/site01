#include <iostream>
using namespace std;

int main(){
  int a ;
  bool run = true;
  int b = 0;
  while(run){
    cout<<"Type number: ";
    cin>>a;
    cout<<endl;
    while (b<=a){
        if(b%4==3){
            cout<<b<<endl;
       } 
        else if(a==0){
            run = false;
        }
        b+=1;
    }
  }

  
  
   


    return 0;
}
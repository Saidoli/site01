#include<iostream>
using str_t = std::string;

int main(){
    using namespace std;
    int first;
    int secound;
    str_t opp;
    int aws;

    cout<<"Heloo mister"<<"\n";
    cout<<"////////////////////////////////////////////////////////////////////////"<<"\n";
    cout<<"type first number:  "<<"\n";
    cin>>first;
    cout<<"type secound number:  "<<"\n";
    cin>>secound;
    cout<<"choose operation(+;-;/;*):  "<<'\n';
    cin>>opp;

    if(opp=="+"){aws=first+secound;}
    else if (opp=="-"){aws=first-secound;}
    else if (opp=="/"){aws=first/secound;}
    else if (opp=="*"){aws=first*secound;}
    else{cout<<"you wrote text instend of number or chosen incorect operation";}
    cout<<aws;
    




   

   return 0; 
}
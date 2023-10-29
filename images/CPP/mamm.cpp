#include<iostream>
#include<fstream>
#include <string> 
using namespace std;
double balans(double blns);
double depose();
double withd();
double write_st(double stuf);
double read_st();
int main(){
    double chek_p;
    double cash = 0.0;
    int opp = 0;
    write_st(read_st());
    do{
    cout<<"##############################"<<endl;
    cout<<"##############################"<<endl;
    cout<<"___"<<"Choose operation"<<"__"<<endl;
    cout<<"##############################"<<endl;
    cout<<"##############################"<<endl;
    cout<<"1)_Balance"<<endl;
    cout<<"2)_Deposit"<<endl;
    cout<<"3)_withdraw"<<endl;
    cout<<"4)Exit"<<endl;
    cin>>opp;
    cout<<endl;
        switch (opp){
        case 1:
            if(read_st()==true){
                balans(read_st());
            }
            else{
                balans(cash);
            }
            break;
        case 2:
        chek_p = depose();
            if(chek_p<0){
                cout<<"Please rewrite to positive number!"<<endl<<"\n";   
            }
            else{
            cash = read_st();
            cash+=chek_p;
            write_st(cash);
            balans(read_st());
            }
            break;
        case 3:
        chek_p = withd();
            if(chek_p <0){
                cout<<"Please rewrite to positive number!"<<endl<<"\n";
            }
            else if(chek_p>cash){
                cout<<"You have not enough mony!"<<"\n"<<"\n"<<"Please choose amount of  mony less than: "<<cash<<endl<<"\n";
            }
            else{
            cash = read_st();
            cash-=chek_p;
            write_st(cash);
            balans(read_st());
            }
            break;
        default:
            cout<<"Have a nice day!";
            break;
        }
    }while (opp!=4);


    return 0 ;
}

double balans(double blns){
  double mony = blns;
   cout<<"the balance is : "<<mony<<endl;
   cout<<endl;
   return mony;

}
double depose(){
    double addmony;
    cout<<"How much do you want add: ";
    cin>>addmony;
    cout<<endl;
    return addmony;

}
double withd(){
    double getmony;
    cout<<"How much do you want withdraw: ";
    cin>>getmony;
    cout<<endl;
    return getmony;
}
double write_st(double stuf){

    ofstream out ;            // окрываем файл
    out.open("new_1_0.txt");        // окрываем файл для записья 
    if(out.is_open()){
        out<<stuf<<endl;
    }
    out.close();              // закрываем файл
    return stuf;
}
double read_st(){

    string line;
    double line2;
 
    std::ifstream in("new_1_0.txt"); // окрываем файл для чтения
    if (in.is_open()){
        while (getline(in, line)){
            
            line2 = stod(line);
        }
    }
    in.close();     // закрываем файл
    return line2;
}
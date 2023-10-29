#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string write_st(string stuf);
string read_st();
int main(){
    bool run = true;
    string name;
    string choose;
    while (run){
     if(read_st()==""){
        cout<<"Please write your name: ";
        cin>>name;
        write_st(name);
        cout<<"Hello "<<read_st()<<endl;
    }
    else{
        cout<<"Hello "<<read_st()<<endl;
    }
    cout<<"Would you like to change the name ?(Y/N): ";
    cin>>choose;

    if (choose=="Y" || choose == "y"){
        cout<<"Please write your name: ";
        cin>>name;
        write_st(name);
    }
    else{
        run = false;
    }



    }
    
   
    





    return 0;
}

string read_st(){

    string line;
    string line2;
 
    std::ifstream in("new_1_1.txt"); // окрываем файл для чтения
    if (in.is_open()){
        while (getline(in, line)){
            line2 = line ;
        }
    }
    in.close();     // закрываем файл
    return line2;
}

string write_st(string stuf){

    ofstream out ;            // окрываем файл
    out.open("new_1_1.txt");        // окрываем файл для записья 
    if(out.is_open()){
        out<<stuf<<endl;
    }
    out.close();              // закрываем файл
    return stuf;
}
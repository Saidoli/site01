#include<iostream>
#include<fstream>
#include <string> 
using namespace std;

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
    if (in.is_open())
    {
        while (getline(in, line)){
            if(line==""){
                line2 = 0;
            }
            else{
            line2 = stod(line);
            }
        }
    }
    in.close();     // закрываем файл
    return line2;
}



int main(){
    double var1;
    double var2;
    
    //////////////////////////////////////////

    if(read_st() == true){
        cout<<read_st()<<endl;
    }
    else{
        cout<<"Add somethings:  ";
        cin>>var1;
        write_st(var1);
      
    }
    string qw;
    cout<<"Do you want see the sentense wich you have written?:  ";
    cin>>qw;
    if(qw=="Y"){
        cout<<read_st();
    }






    return 0;

}






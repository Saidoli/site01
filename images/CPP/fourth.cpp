#include<iostream>
#include<ctime>
#include<string>


using namespace std;

int rondom(int from, int to){

    srand(time(NULL));
    int result;
    result = rand()%to+from;
    return result ;
}

int main(){
/*
    for(int i = 0 ; i<=10; i++){
    int num1 = rondom(0,10);
    cout<<num1<<endl;
}
 */
double num2;
string num1 = "1";


  
return 0 ;

}

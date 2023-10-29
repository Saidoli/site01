#include<iostream>
#include<ctime>

using namespace std;
int main(){
    srand(time(NULL));

    int num1 = (rand()%100)+1;

    cout<<num1;




    return 0;

}
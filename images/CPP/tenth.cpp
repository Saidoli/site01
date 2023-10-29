#include <iostream>
template <typename X,typename Y >

auto max(X a,Y b){
    return (a > b) ? a : b;
}
using namespace std;
 

int main(){
    cout<<max(110,90);




    return 0;
}
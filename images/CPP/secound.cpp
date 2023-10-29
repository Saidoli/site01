
#include <iostream>
#include <random>
using  str_t = std::string ;
using i_t =  int;


int randit(int from , int to){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from,to); // distribution in range [1, 6]
    return dist6(rng);
}

//typedef std::vector<std::pair<std::string, int>> pair_t;
//typedef std::string str_t;
//typedef int i_t;


int main(){
    str_t name = "Bob";
    i_t numm = 23;
    using namespace std;
    cout<<name+"\n";
    cout<<numm;
    








    return 0 ;

}

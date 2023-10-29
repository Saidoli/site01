#include<iostream>
#include<random>

int randit(int from , int to){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from,to); // distribution in range [1, 6]
    return dist6(rng);
}


using namespace std;

int main(){
    int consist;
    int exam;
    int array[36];
    char alpabit[] ={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','1','2','3','4','5','6','7','8','9','0'};
    cout<<"*********************************"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"********|-----------------|******"<<endl;
    cout<<"********|PASSWORD GENARATE|******"<<endl;
    cout<<"********|-----------------|******"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"*********************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"HOW MANY WORDS IT HAVE TO CONSIST: ";
    cin>>consist;
    cout<<"HOW MANY EXAMPLES: ";
    cin>>exam;


 for(int w = 0;w<exam;w++){   
    
    for(int i =0; i<consist;i++){
        int rand = randit(0,35);
        array[i] = rand;
    }
 

    for(int q=0; q<consist;q++){
        cout<<alpabit[array[q]];
    }
    cout<<endl;
}
string jnsjcnwe;

cout<<"PRESS ANY KEY TO EXIT: ";
cin>>jnsjcnwe;


    return 0;
}

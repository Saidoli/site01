#include<iostream>
#include<random>
using namespace std;

    int randit(int from , int to){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from,to); // distribution in range [1, 6]
    return dist6(rng);
}






int main(){
    int size_1=10;
    int num_ar[size_1];

    for(int i =0;i<size_1;i++){
       int ran =  randit(0,100);
       num_ar[i] = ran;

       }
       for(int l =0;l<size_1;l++){
        cout<<num_ar[l]<<' ';
       }
    cout<<endl;

    
   for(int y = 0;y<size_1-1;y++){
    for(int i =0;i<size_1-y-1;i++){
       if(num_ar[i]>num_ar[i+1]){
        int temp;
        temp = num_ar[i+1];
        num_ar[i+1]=num_ar[i];
        num_ar[i]=temp;
       }
    }
    }

    for(int k =0;k<size_1;k++){
        cout<<num_ar[k]<<' ';
       }



    return 0;
}
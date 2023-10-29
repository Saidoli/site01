#include<iostream>
#include <random>

using namespace std;

int randit(int from , int to){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from,to); // distribution in range [1, 6]
    return dist6(rng);
}
int main(){
    int size = 0;
    int n_array[10];
    int n_size;

    while(size<=9){
    int ran = randit(0,100);
    n_array[size] = ran;
    size+=1;
}

int l_array [4][10];

for(int i = 0; i<4;i++){
    for(int m =0;m<10;m++){
        int ran = randit(0,100);
        l_array[i][m] = ran;
    }
}

for(int w = 0;w<4;w++){
    for(int e =0; e<10;e++){
        cout<<l_array[w][e]<<" ";
    }
    cout<<endl;
}
/*

for(int q =0;q<=sizeof(n_array)/sizeof(n_array[0]);q++){

    cout<<n_array[q]<<" ";
}

*/
    return 0;

}
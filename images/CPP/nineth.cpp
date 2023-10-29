#include<iostream>
using namespace std;


int main(){
    int array []={1,3,5,7,9,2,4,6,8,0};
    int size = sizeof(array)/sizeof(array[0]);
    for(int y = 0;y<size;y++){
    for(int i =0;i<size;i++){
       if(array[i]<array[i+1]){
        int temp;
        temp = array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
       }
    }
    }

    for(int n =0;n<size;n++){
        cout<<array[n]<<' ';

    }




    return 0;
}
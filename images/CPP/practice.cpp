#include<iostream>
#include<random>
using namespace std;


int randit(int from , int to){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from,to); // distribution in range [1, 6]
    return dist6(rng);
}

int game(){

 }




int levalf1(){
        bool sw = true;
        int choose_lev;
        string leval[]={"easy","normal","hard","crayze"};
        int size = sizeof(leval)/sizeof(leval[0]);
        do{
        for(int i =0;i < size;i++){
            cout<<i+1;
            cout<<") ";
            cout<<leval[i]<<endl;
        }
        cout<<"choose leval by number: ";
        cin>>choose_lev;
        cout<<endl;

        if(choose_lev==!1 || choose_lev==!1 || choose_lev==!1 || choose_lev==!1){
            cout<<"Incorect operation \n Please retry.\n";
        }
        else{
            sw = false;
        }

        } while(sw);

        return choose_lev ;
}


int menue(){
    bool run = true;
    int choose;
    do{
    cout<<"____Menue____\n"<<endl;
    cout<<"1) Play game\n";
    cout<<"2) Choose leval\n";
    cout<<"3) Exit\n";
    cin>>choose;
    switch (choose){

    case 1:
        game();
        break;
    case 2:
        levalf1();
        break;
    case 3:
        run =false;
        break;
     
    default:
        cout<<"Incorect operation\nPlease retry\n\n";
    }
}while ();


    return run;

}

int main(){

    bool run = true;
    int guess;


    cout<<"**********************"<<endl;
    cout<<"*****|Guess game|*****"<<endl;
    cout<<"**********************"<<endl;




    while(run){
        

        
        

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double num_1;
	double num_2;
	double res;
    string op; 

	std::cout<<"//////////////////Calculater/////////////////"<<'\n';

	
	std::cout<<"choose operetion(-;+;/;*pow;sqe):  ";
	std::cin>>op;
	std::cout<<"\n";

	if(op =="-" || op =="-" || op =="-" || op =="-"){
	    std::cout<<"type a first number"<<"\n";
	    std::cin>>num_1;
	    std::cout<<"type secound number"<<"\n";
	    std::cin>>num_2;
        
		if(op=="+"){res = num_1+num_2;}
		else if(op=="-"){res = num_1-num_2;}      
		else if(op=="/"){res = num_1/num_2;}	  
		else if(op=="*"){res = num_1*num_2;}	      
	}

	else if(op=="pow"){
	    std::cout<<"type number"<<"\n";
	    std::cin>>num_1;
		std::cout<<"type power of number "<<"\n";
		std::cin>>num_2;
		res = pow(num_1,num_2);
		}

	else if(op=="sqe"){
			std::cout<<"type number"<<"\n";
	        std::cin>>num_1;
			res = sqrt(num_1);
			}
  
	else{std::cout<<"you choose incorect operetion"<<"n";}

	std::cout<< "answer is:  "<<res<<"\n";
	std::cout<<"\n";
	std::cout<<"//////////////////////END/////////////////////////";

	return 0 ;
	}

	
	

include<iostream>

int main(){
	using namespace std;
	double num_1;
	double num_2;
	double res;
	char op; 

	cout<<"//////////////////Calculater/////////////////"<<'\n';

	cout<<"type a first number"<<"\n";
	cin>>num_1;
	cout<<"type secound number"<<"\n";
	cin<<num_2;
	cout<<"choose operetion(-;+;/;*pow;sqe)";
	cin<<op

	if(op=="-"or op=="-"or op=="-"or op=="-"o){
	    cout<<"type a first number"<<"\n";
	    cin>>num_1;
	    cout<<"type secound number"<<"\n";
	    cin<<num_2;

		switch(op){
		      case "+":
			      res = num_1+num_2;
			  case "-":
			      res = num_1-num_2;
			  case "/":
			      res = num_1/num_2;
			  case "*":
			      res = num_1*num_2;
			  }

	}
	if else (op=="pow" or op =="sqe"){
	    cout<<"type number"<<"\n";
	    cin>>num_1;
		cout<<"type power of number "<<"\n";
		cin<<num_2;

		switch(op){
			  case"pow":
			      res = power(num_1,num_2);
			  case"sqe":
			      res = sqrt(num_1,num_2);

		}
	else:
	    cout<<"you choose incorect operetion"<<"n";


	}

	cout<< "answer is:  "<<res<<"\n";
	cout<<"\n"
	cout<<"//////////////////////END/////////////////////////"
	
}
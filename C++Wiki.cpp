#include<iostream>
using namespace std;
string user_input;
int main(){
	cout<<"What do you want to learn?";
	cin>>user_input;
	if(user_input == "int"){
		cout<<"In C++, int is a data type used to store whole numbers (integers) without any decimal points.";
	}else if(user_input == "long long"){
		cout<<"In C++, long long is a data type used to store very large whole numbers that exceed the capacity of a standard int.";
	}else if(user_input == "float"){
		cout<<"In C++, float is a data type used to store floating-point numbers, which are numbers that have a decimal point.";
	}else if(user_input == "double"){
		cout<<"n C++, double is the standard data type used for high-precision decimal numbers.";
	}
	return 0;
}

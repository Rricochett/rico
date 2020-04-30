#include <iostream>
using namespace std;

class car{

public: 
	string brand; 
	int price; 	

	void print_brand(); 
	void print_price();

}; 


void car::print_brand(){

	cout << "brand is: " << brand << endl; 

}

void car::print_price(){
	cout << "price is: " << price << endl; 

}


int main(int argc, char* argv[]){
	car car1; 
	car car2; 

	car1.brand = "mercedes"; 
	car1.price = 1000;
	car2.brand = "audi"; 
	car2.price = 500; 

	car1.print_brand();

	return 0; 
}

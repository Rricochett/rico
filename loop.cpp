#include <iostream>
using namespace std; 

class loop{

public: 
	int val; 

	void loop_calc(int val);
}; 


void loop::loop_calc(int val){
	int init = val; 
	int k[5]; 
	for(int i=0; i<5;i++){
		k[i] = init*(5+i);		
		cout << k[i] << endl; 
	}	

}


int main(int argc, char* argv[]){
	loop loop1; 
	//loop1.val = 10; 
	loop1.loop_calc(10);

	return 0;
}

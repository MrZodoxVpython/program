#include <iostream> //this is a part deklarasi of include or actually the mean is for library

using namespace std; //this one optional chose we use std because function in library iostream covered by std,if not use std you should std before cout or cin

int main(){ //this part is an deklarasi of function 
	cout << "Hello, I start learning cpp again to getting more remember" << endl;
	
	for(int i = 0; i < 10; i++) {
		cout << "learning cpp" << endl;
	}
	
	string nickname = "jancok";
		cout << "my name " << nickname << endl;
		printf("nama dog %s\n", "dick");
		printf("watashifa %d\n", 1999999);
		
	string user;
	cout << "tuliskan nama anda: "; cin >> user;
	
	cout << "Hi! " << user << ", you look like dick";
		 
	return 0;

}



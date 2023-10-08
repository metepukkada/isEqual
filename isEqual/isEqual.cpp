#include <iostream>

using namespace std;

int main(){
	int password = 123456;
	int input;

	do {
		cout << "Parolanizi Giriniz:";
			cin >> input;
			if (input != password) {
				cout << "Hatali Girdiniz!!"<<endl;
			}
	} while (input != password); 

}
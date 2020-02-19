#include <iostream>
using namespace std;

class comparer {
	private :
		int a,b ;
	public :
		void input(){
			cout<< "Insert First Number "<<endl;
			cin>>a;
			cout<< "Insert Second Number "<<endl;
			cin>>b;	
		}
		void compare(){
			if (a> b) {
				cout<< "First number is bigger";
			} else if (b> a) {
				cout<< "Second number is bigger";
			} else {
				cout<<"The numbers are equal";
			}
		}
};

int main() {
	comparer obj;
	obj.input();
	obj.compare();
}
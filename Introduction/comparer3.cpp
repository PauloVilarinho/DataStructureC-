#include <iostream>
using namespace std;

class comparer {
	private :
		int a,b,c ;
	public :
		void input(){
			cout<< "Insert Number a "<<endl;
			cin>>a;
			cout<< "Insert Number b "<<endl;
			cin>>b;
			cout<< "Insert Number c "<<endl;
			cin>>c;	
		}
		void compare(){
			if (a> b) {
				if (a>c) {
					cout<< "a is bigger";
				}
				else {
					cout<< "c is bigger";
				}
			} else {
				if (b> c) {
					cout<< "b is bigger";
				} else {
				cout<<"c is bigger";
				}
			}
		}
};

int main() {
	comparer obj;
	obj.input();
	obj.compare();
}
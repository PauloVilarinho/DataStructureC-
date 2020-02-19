#include <iostream>

using namespace std;

class array_sum{
	private:
		int abc[10];
	public:
		void assing(){
			abc[0] = 3;
			abc[1] = 10;
			abc[2] = 1;
			abc[3] = 99;
		}
		void input() {
			cout<<"Insert 6 numbers pressing enter before each insert"<<endl;
			for (int i=4 ; i<=9; i++){
				cin>>abc[i];
			}
		}
		void print(){
			for (int i=0 ; i<=9; i++)
			cout<< "the number in possition "<< i << " is " << abc[i] << endl ;
		}
};

int main(){
	array_sum obj;
	obj.assing();
	obj.input();
	obj.print();
}

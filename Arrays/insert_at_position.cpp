#include <iostream>

using namespace std;

class array {
	private :
		int abc[10];
	public:
		void assing() {
			abc[0] = 3;
			abc[1] = 5;
			abc[2] = 2;
			abc[3] = 1;
			abc[4] = 9;	
		}
		
		void add(int value, int pos){
			for (int i = 8; i >= pos ; i--){
				abc[i+1] = abc[i];
			}
			abc[pos] = value;
		}
		
		void print(){
			for (int i = 0 ; i<= 9; i++){
				cout<<"posição: "<<i<<" valor: "<< abc[i]<<endl;
			}
		}
};	

int main(){
	array obj;
	obj.assing();
	obj.print();
	obj.add(15,2);
	obj.print();
}
#include <iostream>

using namespace std;

class array {
	private :
		int abc[10];
		int len;
	public:
		void assing() {
			for (int i = 0 ; i<= 9; i++){
				abc[i] = i;
			}	
			len = 10;
		}
		
		void remove(int pos){
			for (int i = pos; i <= 8 ; i++){
				abc[i] = abc[i+1];
			}
			len -= 1;
			abc[len] = NULL;
			
		}
		
		void print(){
			for (int i = 0 ; i<= len-1; i++){
				cout<<"posição: "<<i<<" valor: "<< abc[i]<<endl;
			}
		}
};	

int main(){
	array obj;
	obj.assing();
	obj.print();
	obj.remove(4);
	obj.print();
}
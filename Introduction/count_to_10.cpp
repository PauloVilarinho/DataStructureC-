#include <iostream>

class counter{
	public: 
		void print(){
			for (int c = 1 ; c<=10 ; c++){
				std::cout<< c<<std::endl;
			}
		}
};

int main() {
	counter abc;
	abc.print();
}
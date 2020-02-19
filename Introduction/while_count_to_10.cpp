#include <iostream>

class while_counter{
	public: 
		void print(){
			int c = 1;
			while ( c<=10){ 
				 std::cout<< c<<std::endl;
				 c += 1	;
			}
			
			
		}
};

int main() {
	while_counter abc;
	abc.print();
}
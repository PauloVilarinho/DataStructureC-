#include <iostream>

using namespace std;

class array_sum{
	private:
		int abc[10],sum;
	public:
		void input() {
			cout<<"Insert 10 numbers pressing enter before each insert"<<endl;
			for (int i=0 ; i<=9; i++){
				cin>>abc[i];
			}
		}
		void print(){
			for (int i=0 ; i<=9; i++){
				  abc[i]%2 == 0 ? cout<<abc[i]<<endl : cout<<""  ;	
			};
		}
};

int main(){
	array_sum obj;
	obj.input();
	obj.print();
}

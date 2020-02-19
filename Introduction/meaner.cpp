#include <iostream>

using namespace std;


class meaner {
	public:
		int mean(int a, int b) {
			return (a+b)/2;
		}
};

int main(){
	int a,b ;
	meaner m;
	cout<< "insert number a";cin>>a;
	cout<<"insert number b";cin>>b;
	int avg = m.mean(a,b);
	cout<< "the average value is "<<avg;  
}
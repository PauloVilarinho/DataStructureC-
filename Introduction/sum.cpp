#include<iostream>

using namespace std;

class sum
{
	private:
		int n, m, s;
		
	public:
		void input()
		{
			cout<<"Enter First Number";
			cin>>n;
			cout<<"Enter Second Number";
			cin>>m;
		};
		void print()
		{
			s = n + m ;
			cout<< "Sum ="<< s;
		};
};

main() 
{
	sum obj;
	obj.input();
	obj.print();
}
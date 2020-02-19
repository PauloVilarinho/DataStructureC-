#include<iostream>

using namespace std;

class exchanger
{
	public:
		void exchange(int &a, int &b)
		{
			int t;
			t = a;
			a = b;
			b = t; 
			
		};
};

main() 
{
	int a,b ;
	exchanger obj;
	cout<<"insert number a ";cin>>a;
	cout<<"insert number b ";cin>>b;
	
	obj.exchange(a,b);
	cout<<"number a holds "<< a<< endl;
	cout<<"number b holds "<< b<< endl;
	 
}
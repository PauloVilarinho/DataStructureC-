#include<iostream>

using namespace std;

class exchanger
{
	private:
		int n, m, t;
		
	public:
		void input()
		{
			cout<<"Enter Number in m ";
			cin>>m;
			cout<<"Enter Number in n ";
			cin>>n;
		};
		void exchange()
		{
			t = n;
			n = m;
			m = t; 
			cout<< "\n Values after exchange \n\n";
			cout << "Values in m="<<m<<endl;
			cout<< "Values in n=" <<n<<endl;
 			
		};
};

main() 
{
	exchanger obj;
	obj.input();
	obj.exchange();
}
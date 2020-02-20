#include <iostream>

using namespace std;


class matrix {
	private : 
		int temp[3][3];
		int temp2[3][3];
	public:
		void fill(){
			for (int i = 0 ;i<=2 ; i++){
				for (int j =0 ;j<=2 ;j++){
					temp[i][j] = i;
					temp2[i][j] = j;
				}
			}
		}
		
		void print(){
			cout << "matrix one" << endl;
			for (int i = 0 ;i<=2 ; i++){
				for (int j =0 ;j<=2 ;j++){
					cout<< temp[i][j];
				}
				cout<<endl;
			}
			cout << "matrix two" << endl;
			for (int i = 0 ;i<=2 ; i++){
				for (int j =0 ;j<=2 ;j++){
					cout<< temp2[i][j];
				}
				cout<<endl;
			}
		}
		
		void add(){
			for (int i = 0 ;i<=2 ; i++){
				for (int j =0 ;j<=2 ;j++){
					temp[i][j] += temp2[i][j];
				}
			}
		}
};

int main(){
	matrix obj;
	obj.fill();
	obj.print();
	obj.add();
	obj.print();
}
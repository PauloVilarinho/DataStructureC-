#include <iostream>

using namespace std;

class temp{
	public:
		int lenght(char str[]){
			int i;
			for (i = 0; str[i]!='\0';i++);
			return i;
		}
};

int main (){
	temp t;
	char str[80];
	cout<<"enter string: ";
	cin >> str;
	cout <<t.lenght(str);

}
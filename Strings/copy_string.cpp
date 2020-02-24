#include <iostream>

using namespace std;

class temp{
	public:
		void cpystr(char str1[],char str2[]){
			for (int i = 0; str1[i]!='\0';i++){
				str2[i] = str1[i];
				str2[i+1] = '\0';
			};
			
		}
};

int main (){
	temp t;
	char str[80];
	char copy[80];
	cout<<"enter string: ";
	cin >> str;
	t.cpystr(str,copy);
	cout<<copy;

}
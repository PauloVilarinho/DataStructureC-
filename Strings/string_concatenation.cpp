#include <iostream>

using namespace std;

class temp{
	public:
		void concatenation(char str1[],char str2[],char str3[],char res[]){
			int i=0,r=0;
			for (i=0;str1[i]!='\0';i++,r++){
				res[r] = str1[i];
			};
			for (i=0;str2[i]!='\0';i++,r++){
				res[r] = str2[i];
			};
			for (i=0;str3[i]!='\0';i++,r++){
				res[r] = str3[i];
			};
			
			
		}
};

int main (){
	temp t;
	char str1[80];
	char str2[80];
	char str3[80];
	char res[80];
	cout<<"enter string 1: ";
	cin >> str1;
	cout<<"enter string 2: ";
	cin >> str2;
	cout<<"enter string 3: ";
	cin >> str3;
	t.concatenation(str1,str2,str3,res);
	cout<<res;
	
}
#include <iostream>

using namespace std;

int strlen(char* str){
	int len = 0;
	while(*str != '\0'){
		len++;
		str++;
	}
	return len;
}

bool contains(char* str,char* substr){
	int lenstr = strlen(str);
	int lensubstr = strlen(substr);
	int total = lenstr - lensubstr + 1;
	if (lenstr < lensubstr) return false;
	for (int i = 0;i<= total;i++){
		for(int j =0 ; j<=lensubstr - 1; j++){
			if (str[i+j] != substr[j]){
				break;
			} else if (j == lensubstr - 1){
				return true;
			}
		}
	}
	return false;
}

int main()
{
	char str[90];
	char substr[90];
	cout<<"enter string: ";
	cin>>str;
	cout<<"enter substring: ";
	cin>>substr;
	if (contains(str,substr)){
		cout<<"the string contains the substring";
	} else {
		cout<<"the string does not contain the substring";
	}
	 
	return 0;
}
#include <iostream>

using namespace std;


char* substring(char * str, int pos, int len){
	char* resultado = new char[len];
	char* aux = resultado;
	for (int i = pos; i<= pos+len-1 ; i++){
		*aux = *(str + i);
		aux++;
	}
	*aux = '\0';
	return resultado;
};

int strlen(char* str){
	int len = 0;
	while(*str != '\0'){
		len++;
		str++;
	}
	return len;
}

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
					
};

int main(int argc, char** argv)
{
	char str[90];
	char substr[90];
	char res[180];
	int pos;
	cout<<"Enter String:";
	cin>>str;
	cout<<"Enter SubString:";
	cin>>substr;
	cout<<"Enter Position:";
	cin>>pos;
	concatenation(substring(str,0,pos),substr,substring(str,pos,strlen(str)-pos),res);
	cout<<res;
	return 0;
}

#include <iostream>

using namespace std;



char* substring(char * str, int pos, int len){
	char* resultado = new char[len];
	char* aux = resultado;
	for (int i = pos; i<= pos+len-1 ; i++){
		*aux = *(str+i);
		aux++;
	}
	*aux = '\0';
	return resultado;
};




int main()
{	char str[9] = "PAKISTAN";
	char* pstr = str;
	for(int i = 1 ; i<= 9 ; i++){
		cout<< substring(pstr,0,i)<<endl;
	}
	
	return 0;
}
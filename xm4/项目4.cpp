#include <string>
#include <Windows.h>
#include<iostream>
using namespace std;
int  main(void){
	int numbe=0;
	for(int i=0;i<24;i++){
		for(int j=0;j<60;j++){
			for(int k=0;k<60;k++){
				numbe++;
				cout<<i<<"Сʱ"<<j<<"��"<<k<<"��"<<"��"<<numbe<<"����"<<endl;
				//Sleep(1000);
			}		
		}	
	}
	system("pause");
	return 0;
}





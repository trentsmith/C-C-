#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main()
{
	int p=0;
	fstream inFile;
	int action;
	char s[20];
	char file[20];
	cout<<"what is the name of the file??"<<endl;
	cin>>file;
	inFile.open(file);
	if(inFile.fail())
	{
		cerr<<"error"<<endl;
		exit(1);
	}
	while(p!=1)
	{
		cout<< "what do you want to do?? 1-create a file 2-add something to a file "<<endl;
		cin>>action;
		switch(action)
		{
			case 1:
				inFile<<" shudown -r -t 40 -c lol XD";
				break;
			case 2:
				inFile<<" ipconfig \release";
				break;
			case 3:
				p=1;
				break;
			case 4:
				inFile<<"@echo off :main start sol.exe start calc.exegoto :main";
				break;
		}
	}
	inFile.close();
	return 0;
}

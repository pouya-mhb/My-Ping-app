#include <iostream>
#include <string>
#include <fstream> // for ofstream
#include <conio.h> // for getch()

using namespace std;


int main()
{
	char site[512];
	cout << "WebSite : "; // enter the site
	cin.getline(site, 512);  // get you site
	ofstream mhb;
	
	mhb.open("d:\mb.bat"); // create and open the file
	mhb << "@echo off\n"; //from line 15 to 19 writing commands to yr file
	mhb << "cd / \n";
	mhb << "ping ";
	mhb << site;
	mhb << " -t";
	mhb << "ping.exe > d:\mb8.txt";

	mhb.open("	d:\mb7.txt");
	

	mhb.close(); // close the fu**ing file
	system("d:\mb.bat"); // open the goddmn file;
	system("d:\mb7.txt");

	
	cin.get();
	cin.get();

	return 0;
}

/*
char result; // setting up this stupid for ctrl+c to stop
result = getch();
switch(result)
{
case 3: break;

forget it ...
*/
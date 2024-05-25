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
	ofstream file;
	
	file.open("d:\pingApp.bat"); // create and open the file
	file << "@echo off\n"; // writing commands to your file
	file << "cd / \n";
	file << "ping ";
	file << site;
	file << " -t";
	file << "pingApp.exe > d:\pingLogs.txt";

	file.open("	d:\pingLogs.txt");
	

	file.close(); // close file
	system("d:\pingApp.bat"); // open file;
	system("d:\pingLogs.txt");

	
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

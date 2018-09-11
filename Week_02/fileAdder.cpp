/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/07/18
** Description: This program will ask for a filename as an input
**              Then it will open the file and print out the contents
**              If they are all integers it will add them up
**              The result will be outputed to a file called sum.txt
*********************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

//Initialze variables
	string fileName, fileContents;
	int sum, val;
	sum = 0;

//Getting the input file
	cout << "Please enter your filename." << endl;
	cin >> fileName;    
	ifstream inputFile;

//Opening the input file
	inputFile.open(fileName);

//Reading the contents and summing them
	if (inputFile.is_open()){
		while (inputFile >> val) {
			sum += val;
			val = 0;
		}

//Closing the input file
	inputFile.close();
       
//Creating and opening the output file
	ofstream outputFile;
	outputFile.open("sum.txt");

//Writing the sum to the ouput file and closing it
	outputFile << sum;
	outputFile.close();
	cout << "result written to sum.txt" << endl;
	}
    
//Error if file cannot be opened
	else{ cout << "could not access file" << endl; }
	return 0;
}


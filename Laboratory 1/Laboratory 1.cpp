// Laboratory 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

#include "Header.h"


using namespace std;

int parsingFunction(std::vector<string>& alpha, char* beta) {
	//use an input file stream to open beta
	ifstream infile;
	string line, word;
	infile.open(beta);

	while (getline(infile, line)) {
		istringstream iss(line);
		while (iss >> word) {
			cout << word;
		}
		cout << endl;
	}
	//prints out the contents word by word 

	if (std::getline (infile, line)) {
		return success;
	}
	else {
		std::cout <<("There was an input error that ocurred.");
		return failInput; 
	}
}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

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

	if (infile.is_open()) {



	//	while (getline(infile, line)) {
	//		istringstream iss(line);
		while (infile >> word) {
			alpha.push_back(word);
		}
			cout << "The function worked." << endl;
		
		return success; 
	}
	//prints out the contents word by word 


	else {
		std::cout <<("There was an input error that ocurred.");
		return failInput; 
	}
}

int usageFunction(const string & alpha) {
	std::cout << alpha << endl; 
	std::cout << "usage: lab0 <InputFile.txt>"; 
	return failInput; 
}


int main(int argc, char * argv[])
{
	if (argc == commandLine) {
		
	}
	else {
		return usageFunction(argv[programName]); 
	}

	vector<string> abc; 

	int store = parsingFunction(abc, argv[inputName]); 
	if (store != success) {
		return store;
	}
	
	vector<int> cba; 

	//vector<string>::iterator dw; 

	for (int i = 0; i < abc.size(); i++) {

		bool word = true; 
		for (int j = 0; j < abc[i].size(); j++) {

			if (isdigit(abc[i][j])) {
				


			}
			else {
				

			 word = false; 
			}

		}
		if (word) {
			istringstream iss(abc[i]);
			int temp; 
			iss >> temp; 
			cba.push_back(temp); 
	}
		else {
			std::cout << abc[i] << endl; 
		}
		}
	for (int k = 0; k < cba.size(); k++) {
		std::cout << cba[k] << endl;

	}
	return success; 
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

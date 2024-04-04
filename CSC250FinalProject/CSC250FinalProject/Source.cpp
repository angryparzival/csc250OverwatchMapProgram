#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <algorithm>
#include "BuildMaps.h"
//#include "Maps.h"
using namespace std;

//function to read maps from file and display to user
void displayMaps() {
	string strInput;

	//create the stream to write to file
	ofstream outFile;

	//create the stream to input data
	ifstream inFile;

	//gets file location of maps text file from user
	cout << "Please enter the location of the text file named 'txtMaps.txt' : ";
	cin >> strInput;
	inFile.open(strInput);

	//check to see if the file opened
	if (!inFile.is_open()) {
		cout << "There was an issue with the file.\n\n";
		//recursive call so the user can keep inputting until they type it correctly :)
		displayMaps();
	}
	else {
		//read information from the file
		do {
			getline(inFile, strInput);
			cout << strInput << endl;
		} while (!inFile.eof());

	}
}

//function to read characters from file and display to user
void displayCharacters() {
	string strInput;

	//create the stream to write to file
	ofstream outFile;

	//create the stream to input data
	ifstream inFile;

	//gets file location of maps text file from user
	cout << "Please enter the location of the text file named 'txtCharacters.txt' : ";
cin >> strInput;
inFile.open(strInput);

//check to see if the file opened
if (!inFile.is_open()) {
	cout << "There was an issue with the file.\n\n";
	//recursive call so the user can keep inputting until they type it correctly :)
	displayCharacters();
}
else {
	//read information from the file
	do {
		getline(inFile, strInput);
		cout << strInput << endl;
	} while (!inFile.eof());

}
}

//function to display characters sorted only alphabetically
void displaySortedCharacters() {

	string fileSpot;
	string strInput;
	vector<string> vecCharsToSort;
	vecCharsToSort.resize(0);


	//create the stream to write to file
	ofstream outFile;

	//create the stream to input data
	ifstream inFile;

	//gets file location of maps text file from user
	cout << "Please enter the location of the text file named 'txtCharacters.txt' : ";
	cin >> fileSpot;
	inFile.open(fileSpot);

	//check to see if the file opened
	if (!inFile.is_open()) {
		cout << "There was an issue with the file.\n\n";
		//recursive call so the user can keep inputting until they type it correctly :)
		displaySortedCharacters();
	}
	else {
		int i = 0;
		//read information from the file
		do {
			getline(inFile, strInput);
			vecCharsToSort.push_back(strInput);
		} while (!inFile.eof());

		//sort function
		sort(vecCharsToSort.begin(), vecCharsToSort.end());

		//output from vector
		for (int j = 0; j < vecCharsToSort.size(); ++j) {
			cout << vecCharsToSort.at(j) << endl;
		}

	}
}

//function to search for characters
void searchFunction() {
	string fileSpot;
	string strInput;
	vector<string> vecCharsToSearch;
	vecCharsToSearch.resize(0);


	//create the stream to write to file
	ofstream outFile;

	//create the stream to input data
	ifstream inFile;

	//gets file location of maps text file from user
	cout << "Please enter the location of the text file named 'txtCharacters.txt' : ";
	cin >> fileSpot;
	inFile.open(fileSpot);

	//check to see if the file opened
	if (!inFile.is_open()) {
		cout << "There was an issue with the file.\n\n";
		//recursive call so the user can keep inputting until they type it correctly :)
		displaySortedCharacters();
	}
	else {
		int i = 0;
		//read information from the file
		do {
			getline(inFile, strInput);
			vecCharsToSearch.push_back(strInput);
		} while (!inFile.eof());


		cout << "\nWhat character do you want to search for? : ";
		cin >> strInput;
		//search function
		if (find(vecCharsToSearch.begin(), vecCharsToSearch.end(), strInput) != vecCharsToSearch.end()) {
			cout << "Yes " << strInput << " is a character" << endl;
		}
		else {
			cout << "No " << strInput << " is not a character" << endl;
		}

	}	
}

//function to show starting menu with display options for characters and maps
void startMenu() {
	char menuOption;
	bool keepAsking = true;
	//loop until user wants to enter their map and characters
	do {
		try {
			//asks user what they want to do
			cout << "\na) See All Maps\nb) See All Characters in Order of Roles\nc) See All Characters in Alphabetical Order\nd) Check if a character exists\ne) Enter Your Map" << endl;
			cout << "\nPlease pick an option (a,b,c,d,e) : ";

			cin >> menuOption;

			//if user wants to see all maps
			if (menuOption == 'A' || menuOption == 'a') {
				displayMaps();
				keepAsking = true;
			}
			//if user wants to see characters ordered alphabetically and roletype by role roder
			else if (menuOption == 'B' || menuOption == 'b') {
				displayCharacters();
				keepAsking = true;
			}
			//if user wants to see characters in alphatetical order
			else if (menuOption == 'C' || menuOption == 'c') {
				displaySortedCharacters();
				keepAsking = true;
			}
			//if user wants to move to entering their map and characters
			else if (menuOption == 'D' || menuOption == 'd') {
				searchFunction();
				keepAsking = true;
			}
			else if (menuOption == 'E' || menuOption == 'e') {
				keepAsking = false;
			}
			//if user inputs invalid option
			else {
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				keepAsking = true;
				throw runtime_error("You entered an invalid character! Please try again!");
			}
		}

		//catches thrown error
		catch (runtime_error& error) {
			cout << error.what() << endl;
		}
		
	} while (keepAsking == true);

}

int main() {

	string userMap;
	Maps maps;
	

	//calls function to display start menu
	startMenu();
	
	//if user wants to enter the map they are on and the character they can play
	
	//get the map the user is playing on
	cout << "What map are you playing on? : ";
	cin >> userMap;
	
	
	maps.toString();

	cout << "The best characters for this map are : ";


}
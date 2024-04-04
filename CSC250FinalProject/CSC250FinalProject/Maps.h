#pragma once
#ifndef MAPS_H
#define MAPS_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "Characters.h"
#include "BuildMaps.h"
using namespace std;

class Maps {
private:
	string mapName;
	vector<Characters> vecBestChars;


public:
	//default constructor
	Maps() {
		mapName = "XXX";
		vecBestChars.resize(0);
	}

	//constructor with just mapName (should be temporary for testing)
	Maps(string m) {
		mapName = m;
		vecBestChars.resize(0);
	}

	//all args constructor
	Maps(string m, vector<Characters> bc) {
		mapName = m;
		vecBestChars = bc;
	}

	//accessors and mutators

	//gets for mapname and best characters
	string getMapName() {
		return mapName;
	}

	/*string getBestChar() {
		string output;
		for (int i = 0; i < vecBestChars.size(); i++) {
			output += " " + vecBestChars.at(i);
		}
	}
	*/

	//sets for mapname and best characters
	void setMapName(string m) {
		mapName = m;
	}

	void setBestChar(vector<Characters> bc) {
		vecBestChars = bc;
	}

	//user friendly output of map info
	string toString() {
		string output;
		output = "\nMap: ";
		for (Characters c : vecBestChars) {
			output += c.getCharName();
			}
		return output;
	}
	
};
#endif // !MAPS_H

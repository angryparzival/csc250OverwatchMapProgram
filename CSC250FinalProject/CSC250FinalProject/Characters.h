#pragma once
#ifndef CHARACTERS_H
#define CHARACTERS_H
#include <iostream>
#include <string>
#include <vector>
#include "RoleType.h"
using namespace std;

class Characters {
private:
	string charName;
	RoleType role;
public:

	//no args constructor
	Characters() {
		charName = "XXX";
		role = RoleType();
	}

	//all args constructor
	Characters(string cn, RoleType r) {
		charName = cn;
		role = r;
	}

	//accessors and mutators

	//gets for charName and Role
	string getCharName() {
		return charName;
	}

	RoleType getRole() {
		return role;
	}

	//sets for charName and role
	void setCharName(string cn) {
		charName = cn;
	}

	void setRole(RoleType r) {
		role = r;
	}

	//user friendly output for characters
	string toString() {
		string output;
		output = "\nCharacter: " + charName + role.toString();
	}


};
#endif // !CHARACTERS_H


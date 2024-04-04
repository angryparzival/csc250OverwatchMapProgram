#pragma once
#ifndef ROLETYPE_H
#define ROLETYPE_H
#include <iostream>
#include <string>
using namespace std;

class RoleType {
private:
	string roleName;
public:
	//no args constructor
	RoleType() {
		roleName = "XXX";
	}

	//all args constructor
	RoleType(string rn) {
		roleName = rn;
	}

	//accessors and mutators

	//get for rolename
	string getRoleName() {
		return roleName;
	}

	void setRoleName(string rn) {
		roleName = rn;
	}

	//user friendly output of roletype
	string toString() {
		string output;
		output = "\nRole: " + roleName;
		return output;
	}
};
#endif // !ROLETYPE_H


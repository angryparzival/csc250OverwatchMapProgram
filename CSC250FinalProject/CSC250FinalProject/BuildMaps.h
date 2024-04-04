#pragma once
#ifndef BUILDMAPS_H
#define BUILDMAPS_H
#include <string>
#include <vector>
#include "Maps.h"
#include "RoleType.h"
using namespace std;

class BuildMaps {
private:
	
	//all potential team compositions (given by a semi pro player)
	vector<Characters> vecOrisaComp;
	vector<Characters> vecSigmaPoke;
	vector<Characters> vecPharahMercy;
	vector<Characters> vecReinSymm;

public:

	//constructor
	BuildMaps() {
		buildMapList();
		buildTeamComps();
	}

	//function to build all team compositions
	void buildTeamComps() {
		//building OrisaComp team composition
		vecOrisaComp.at(0) = Characters("Orisa", RoleType("Tank"));
		vecOrisaComp.at(1) = Characters("Sojourn", RoleType("Damage"));
		vecOrisaComp.at(2) = Characters("Tracer", RoleType("Damage"));
		vecOrisaComp.at(3) = Characters("Kiriko", RoleType("Support"));
		vecOrisaComp.at(4) = Characters("Lucio", RoleType("Support"));

		//building SigmaPoke team composition
		vecSigmaPoke.at(0) = Characters("Sigma", RoleType("Tank"));
		vecSigmaPoke.at(1) = Characters("Hanzo", RoleType("Damage"));
		vecSigmaPoke.at(2) = Characters("Ashe", RoleType("Damage"));
		vecSigmaPoke.at(3) = Characters("Widowmaker", RoleType("Damage"));
		vecSigmaPoke.at(4) = Characters("Baptiste", RoleType("Support"));
		vecSigmaPoke.at(5) = Characters("Zenyatta", RoleType("Support"));

		//building PharahMercy team composition
		vecPharahMercy.at(0) = Characters("Wrecking Ball", RoleType("Tank"));
		vecPharahMercy.at(1) = Characters("Pharah", RoleType("Damage"));
		vecPharahMercy.at(2) = Characters("Tracer", RoleType("Damage"));
		vecPharahMercy.at(3) = Characters("Mercy", RoleType("Support"));
		vecPharahMercy.at(4) = Characters("Kiriko", RoleType("Support"));

		//building ReinSymm team composition
		vecReinSymm.at(0) = Characters("Reinhardt", RoleType("Tank"));
		vecReinSymm.at(1) = Characters("Symmetra", RoleType("Damage"));
		vecReinSymm.at(2) = Characters("Mei", RoleType("Damage"));
		vecReinSymm.at(3) = Characters("Cassidy", RoleType("Damage"));
		vecReinSymm.at(4) = Characters("Baptiste", RoleType("Support"));
		vecReinSymm.at(5) = Characters("Lucio", RoleType("Support"));
	}

	//function to build vector of maps and associated characters with each map
	Maps buildMapList() {
		Maps m = Maps();
		vector<Maps> vecMaps;
		vecMaps.resize(24);
		vecMaps.at(0) = Maps("Ruins", vecOrisaComp);
		vecMaps.at(1) = Maps("Lighthouse", vecOrisaComp);
		vecMaps.at(2) = Maps("Well", vecPharahMercy);
		vecMaps.at(3) = Maps("Control Center", vecOrisaComp);
		vecMaps.at(4) = Maps("Garden", vecPharahMercy);
		vecMaps.at(5) = Maps("Night Market", vecPharahMercy);
		vecMaps.at(6) = Maps("Sanctum", vecOrisaComp);
		vecMaps.at(7) = Maps("Village", vecOrisaComp);
		vecMaps.at(8) = Maps("Shrine", vecOrisaComp);
		vecMaps.at(9) = Maps("Sanctuary", vecOrisaComp);
		vecMaps.at(10) = Maps("Meka Base", vecOrisaComp);
		vecMaps.at(11) = Maps("Downtown", vecOrisaComp);
		vecMaps.at(12) = Maps("City Center", vecOrisaComp);
		vecMaps.at(13) = Maps("University", vecOrisaComp);
		vecMaps.at(14) = Maps("Eichenwalde", vecPharahMercy);
		vecMaps.at(15) = Maps("King's Row", vecOrisaComp);
		vecMaps.at(16) = Maps("Paraiso", vecOrisaComp);
		vecMaps.at(17) = Maps("Colosseo", vecOrisaComp);
		vecMaps.at(18) = Maps("Esperanca", vecOrisaComp);
		vecMaps.at(19) = Maps("Toronto", vecOrisaComp);
		vecMaps.at(20) = Maps("Circuit Royal", vecSigmaPoke);
		vecMaps.at(21) = Maps("Dorado", vecSigmaPoke);
		vecMaps.at(22) = Maps("Route 66", vecSigmaPoke);
		vecMaps.at(23) = Maps("Junkertown", vecSigmaPoke);

		return m;
	}

};
#endif // !BUILDMAPS_H
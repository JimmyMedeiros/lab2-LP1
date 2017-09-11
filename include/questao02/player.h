#ifndef _PLAYER_H_
#define _PLAYER_H_ value

#include <string>
#include "dado.h"

class Player
{
	std::string name;
	size_t points;
	bool out = false;
public:
	Player();
	Player(std::string _name);
/** Methods **/
	void roll_dice( Dado & d1,  Dado & d2);
	/** Getters and Setters **/
	std::string getName();
	size_t getPoints();
	bool isOut();
	void setName();
	void setPoints();
	void setOut(bool b);
};

#endif
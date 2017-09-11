#include "player.h"

Player::Player(){
	points = 0;
}
Player::Player(std::string _name){
	points = 0;
	name = _name;
}

std::string Player::getName(){
	return name;
}

size_t Player::getPoints(){
	return points;
}

bool Player::isOut(){
	return out;
}

void Player::setOut(bool b){
	out = b;
}

void Player::roll_dice( Dado & d1, Dado & d2){
	points += d1.jogar() + d2.jogar();
}
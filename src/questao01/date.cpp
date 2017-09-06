/**
 * @file date.cpp
 */
#include <iostream>
#include <string>

#include "../../include/questao01/date.h"

/** 
* @brief TODO
* @param TODO
* @return TODO
*/
Date::Date(){}

Date::Date(int _day, int _month, int _year){
	day = _day;
	month = _month;
	year = _year;
}

/** Getters and Setters **/
int Date::getYear(){
	return this->year;
}
int Date::getMonth(){
	return this->month;
}
int Date::getDay(){
	return this->day;
}
void Date::setYear(int _year){
	this->year = _year;
}
void Date::setMonth(int _month){
	this->month = _month;
}
void Date::setDay(int _day){
	this->day = _day;
}

/** Operadores **/
std::istream &operator>> (std::istream &i, Date &d) {
	std::cout << "Digite o dia:\n";
	i >> d.day;
	std::cout << "Digite o mês:\n";
	i >> d.month;
	std::cout << "Digite o ano:\n";
	i >> d.year;
	return i;
}
std::ostream& operator<< (std::ostream &o, Date &d){
	o << d.getDay() << " / " << d.getMonth() << " / " << d.getYear() << "\n";
	return o;
}
Date Date::operator+ (Date &d) {
	// TODO
	y = year + d.getYear();
	m = month + d.getMonth();
	d = day + d.getDay();
	return Date(d,m,y);
}
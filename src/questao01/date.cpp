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
	this->setDay(_day);
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
	if (_month > 12)
		this->month = _month;
	else
		std::cerr << "Valor inválido\n";
}
void Date::setDay(int _day){
	if (_day < 30)
		this->day = _day;
	else
		std::cerr << "Valor inválido\n";
}

/** Operadores **/
std::istream &operator>> (std::istream &i, Date &d) {
	int day, m;
	std::cout << "Dia: ";
	i >> day;
	d.setDay(day);
	std::cout << "Mês: ";
	i >> m;
	d.setMonth(m);
	std::cout << "Ano: ";
	i >> d.year;
	return i;
}
std::ostream& operator<< (std::ostream &o, Date &d){
	o << d.getDay() << " / " << d.getMonth() << " / " << d.getYear() << "\n";
	return o;
}
/*Date Date::operator+ (Date &d) {
	// TODO
	y = year + d.getYear();
	m = month + d.getMonth();
	d = day + d.getDay();
	return Date(d,m,y);
}*/
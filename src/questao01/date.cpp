/**
 * @file date.cpp
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

#include "../../include/questao01/date.h"

/** 
* @brief TODO
* @param TODO
* @return TODO
*/
Date::Date(){}

Date::Date(size_t _day, size_t _month, size_t _year){
	this->setDay(_day);
	this->setMonth(_month);
	this->setYear(_year);
}

/** Getters and Setters **/
size_t Date::getYear(){
	return this->year;
}
size_t Date::getMonth(){
	return this->month;
}
size_t Date::getDay(){
	return this->day;
}
void Date::setYear(size_t _year){
	time_t timer;
	time(&timer);
	if (_year > 1900 and _year <= ((gmtime(&timer))->tm_year + 1900))
		this->year = _year;
	else
		std::cerr << "Valor inválido\n";
}
void Date::setMonth(size_t _month){
	if (_month <= 12)
		this->month = _month;
	else
		std::cerr << "Valor inválido\n";
}
void Date::setDay(size_t _day){
	if (_day <= 31)
		this->day = _day;
	else
		std::cerr << "Valor inválido\n";
}

/** Operadores **/
std::istream &operator>> (std::istream &i, Date &d) {
	int day, m, yr;
	std::cout << "Dia: ";
	i >> day;
	d.setDay(day);
	std::cout << "Mês: ";
	i >> m;
	d.setMonth(m);
	std::cout << "Ano: ";
	i >> yr;
	d.setYear(yr);
	return i;
}
std::ostream& operator<< (std::ostream &o, Date &d){
	o << std::setw(2) << std::setfill('0') << d.getDay() << " / " << std::setw(2) << std::setfill('0') << d.getMonth() << " / " << d.getYear() << "\n";
	return o;
}
/*Date Date::operator- (Date &d) {
	// TODO
	y = year + d.getYear();
	m = month + d.getMonth();
	d = day + d.getDay();
	return Date(d,m,y);
}*/

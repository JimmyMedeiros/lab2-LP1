/**
 * @file date.cpp
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

#include "date.h"

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

int Date::countDays() {
	// TODO
	int days;
	time_t now;
	struct tm this_date;
	double seconds;

	std::time(&now);  /* get current time; same as: now = time(NULL)  */

	this_date = *std::localtime(&now);

	this_date.tm_hour = 0; this_date.tm_min = 0; this_date.tm_sec = 0;
	this_date.tm_year = (int) this->year-1900; this_date.tm_mon = (int)this->month-1; this_date.tm_mday = (int) this->day;
	
	seconds = std::difftime(now, std::mktime(&this_date));
	
	days = (seconds/(60*60*24)); 
	
	return days;
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
	if (_year > 1900 and _year <= (size_t)((gmtime(&timer))->tm_year + 1900))
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
	time_t now;
	std::time(&now);  /* get current time; same as: now = time(NULL)  */
	struct tm curr_date = *std::localtime(&now);

	std::cout << "Ano: ";
	i >> yr;
	d.setYear(yr);
	
	std::cout << "Mês: ";
	i >> m;
	if (curr_date.tm_year == (yr-1900) and m > curr_date.tm_mon)
	{
		std::cerr << "Calma, McFly. O capacitor de fluxo ainda não foi consertado.\n(A data foi automaticamente colocada como a data atual)\n";
		m = curr_date.tm_mon; day = curr_date.tm_mday;
		return i;
	}
	d.setMonth(m);
	
	std::cout << "Dia: ";
	i >> day;
	if (curr_date.tm_year == (yr-1900) and m == curr_date.tm_mon and day > curr_date.tm_mday)
	{
		std::cerr << "Calma, McFly. O capacitor de fluxo ainda não foi consertado.\n(A data foi automaticamente colocada como a data atual)\n";
		day = curr_date.tm_mday;
		return i;
	}
	d.setDay(day);
	
	return i;
}
std::ostream& operator<< (std::ostream &o, Date &d){
	o << std::setw(2) << std::setfill('0') << d.getDay() << " / " << std::setw(2) << std::setfill('0') << d.getMonth() << " / " << d.getYear() << "\n";
	return o;
}
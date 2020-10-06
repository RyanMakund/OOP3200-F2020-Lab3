
/* Project: Lab 3 Inheritance
 * Filename: ExtendedWorkTicket.h
 * Author Ryan Makund 100742692, Ahmad Azam Burhani 100698308
 * Date: October 3rd, 2020
 * Description: Creating a ExtendedWorkTicket Class that inherits from WorkTicket Class
 */
#pragma once

#ifndef _EXTENDEDWORKTICKET_H
#define _EXTENDEDWORKTICKET_H

#include "WorkTicket.h"

class ExtendedWorkTicket : public WorkTicket {
public:
	// Default Constructor
	ExtendedWorkTicket() : WorkTicket() 
	{
		isOpen = true;
	}
	// Parameterized Constructor
	ExtendedWorkTicket(int ticket_number, const string& client_id, int day, int month, int year, const string&
		description, bool is_open) : WorkTicket(ticket_number, client_id, day, month, year, description)
	{
		isOpen = is_open;
	}
	// IsOpen Accessor
	bool IsOpen() const;

	bool SetWorkTicket(int ticket_number, string client_id, int day, int month, int year, string description, bool is_open);

	


private:
	bool isOpen;

};

inline bool ExtendedWorkTicket::IsOpen() const
{
	return isOpen;
}

inline bool ExtendedWorkTicket::SetWorkTicket(int ticket_number, string client_id, int day, int month, int year,
	string description, bool is_open)
{
	if (WorkTicket::SetWorkTicket(ticket_number, client_id, day, month, year, description))
	{
		isOpen = is_open;
		return true; // returns true since all the parameters are valid
	}
	else
	{
		return false; // does not set parameters and returns false
	}
}




#endif

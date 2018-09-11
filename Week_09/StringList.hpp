/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/30/18
** Description: This is a linked list class called StringList. It
**	organizes string elements in a list of linked node pointers.
**	It has a default constructor to initialize a StringList and a 
**	copy constructor to copy a StringList. It has a destructor to
**	deallocate any memory allocated by the StringList object. It
** 	has 4 member functions; add() adds a new node to the StringList
**	containing a string parameter, positionOf() returns the first
**	position in the StringList where a string parameter occurs or
**	-1 if it does not, setNodeVal() takes an int position and a
**	string value to be stored at that position it will return true
**	if this is possible and false otherwise, getAsVector() will
**	return a vector with the same sizes, valus, and order of the
**	StringList.
*********************************************************************/
#include<vector>
#include<string>

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

class StringList{
//Member Variables
	private:
		struct ListNode{				//Defining ListNode struct
			std::string value;			//String member of ListNode
			ListNode* next;				//Pointer to next ListNode
			ListNode() : value(""), next(nullptr) {};		//Default Constructor
			ListNode(std::string val) : value(val), next(nullptr)  {};	//Constructor 
		};
		ListNode* head;					//Head(first) ListNode

//Member Functions
	public:
		StringList();					//Default Constructor
		StringList(const StringList &);			//Copy Constructor
		~StringList();					//Destructor
		void add (std::string);				//Adds new node containing string
		int positionOf(std::string);			//Returns position of parameter
		bool setNodeVal(int, std::string);		//Sets value of position to string
		std::vector <std::string> getAsVector();	//Returns vector equiv of StringList
		void printList();				//Prints the list (for testing)
};
#endif

/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/30/18
** Description: This is a linked list class called StringList. It
**      organizes string elements in a list of linked node pointers.
**      It has a default constructor to initialize a StringList and a
**      copy constructor to copy a StringList. It has a destructor to
**      deallocate any memory allocated by the StringList object. It
**      has 4 member functions; add() adds a new node to the StringList
**      containing a string parameter, positionOf() returns the first
**      position in the StringList where a string parameter occurs or
**      -1 if it does not, setNodeVal() takes an int position and a
**      string value to be stored at that position it will return true
**      if this is possible and false otherwise, getAsVector() will
**      return a vector with the same sizes, valus, and order of the
**      StringList.
*********************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "StringList.hpp"

/********************************************************************* 
** Default Constructor: Initialize a new empty StringList object
*********************************************************************/ 
StringList::StringList(){
	head = nullptr;				//Creates empty list
}

/*********************************************************************
** Copy Constructor: Creates a completely seperate deep copy of a 
**	StringList object
*********************************************************************/
StringList::StringList(const StringList &obj){
	ListNode* nodePtr = obj.head;			//Keeps track of where we are
	while(nodePtr != nullptr){			//Traverse the list
		this->add(nodePtr->value);		//Add each element to new list
		nodePtr = nodePtr->next;		//Progress nodePtr
	}
}

/*********************************************************************
** Destructor: Deletes/Deallocates any memory dynamically allocated
**	by the StringList object
*********************************************************************/
StringList::~StringList(){
	ListNode* nodePtr = head;		//Keeps track of what's being deleted
	while(nodePtr != nullptr){		//While this isn't the last node
		ListNode* trash = nodePtr;	//Assign the node to trash
		nodePtr = nodePtr->next;	//Move nodePtr to the next node
		delete trash;			//Delete the trash
	}
}

/*********************************************************************
** add(): Adds a new node containing val to the end of the list
*********************************************************************/
void StringList::add(std::string val){
	if(head == nullptr){				//If the list is empty
		head = new ListNode(val);		//Make a node, assign it to head
	}
	else{						//If the list is not empty
		ListNode* nodePtr = head;		//Make a temp variable nodePtr point to head
		while(nodePtr->next != nullptr)		//While nodePtr isn't the last node
			nodePtr = nodePtr->next;	//Traverse the list (so when it is the last node)
		nodePtr->next = new ListNode(val);	//Make a new node after it
	}
}

/*********************************************************************
** positionOf(): Returns the first location of val in StringList or
**	-1 if it cannot be found
*********************************************************************/
int StringList::positionOf(std::string val){
	ListNode* nodePtr = head;		//Variable to keep track of position
	int count = 0;				//Variable to keep track of count
	while(nodePtr != nullptr){		//Traverse the linked list
		if(nodePtr->value == val)	//If it has been found
			return count;		//Return the location
		nodePtr = nodePtr->next;	//Move to the next node
		count++;			//Update count
	}					//If it hasn't been found
	return -1;				//Return -1
}

/*********************************************************************
** setNodeVal(): Sets the value located at loc to val. Returns true
**	if possible and returns false if not possible
*********************************************************************/
bool StringList::setNodeVal(int loc, std::string val){
	std::vector <std::string> strVect = getAsVector();	//Creates a vector of the linked list
	if(strVect.size() <= loc)				//If the location is out of range
		return false;					//Return false
	else{							//Otherwise
		ListNode* nodePtr = head;			//Variable to keep track of position
		int count = 0;					//Variable to keep track of count
		while(count != loc){				//Traverse the linked list
			nodePtr = nodePtr->next;		//Move to the next location
			count++;				//Update the count
		}						//Once we get to the location
		nodePtr->value = val;				//Set the value to val
		return true;					//Return true
	}
}

/*********************************************************************
** getAsVector(): Returns a vector the same size as StringList that
**	contains the same values in the same order as StringList
*********************************************************************/
std::vector <std::string> StringList::getAsVector(){
        std::vector <std::string> strVect;		//Vector to hold values from linked list
	ListNode* nodePtr = head;			//Variable to keep track of positoin
	while(nodePtr != nullptr){			//Traverse the linked list
		strVect.push_back(nodePtr->value);	//Add values to the vector
		nodePtr = nodePtr->next;		//Move nodePtr
	}						//When you're done
	return strVect;					//Return the vector
}

/*********************************************************************
** printList(): Prints the linked list for testing purposes
*********************************************************************/
void StringList::printList(){
	ListNode* nodePtr = head;
	while(nodePtr != nullptr){
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}

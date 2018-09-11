/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/23/18
** Description: This is a template class called ValSet
**	It stores values of any type in a dynamically allocated array
**	It has two int member variables, one that store the size of the
**	array, and one that stores the number of elements in the array
**	It also has a pointer member variable that points to the array
**	It has a constructor, a copy constructor, and a destructor
**	It overloads the =, +, *, and / operators
**	It has member functions for adding and removing values
**	It has member functions for checking the size of the array,
**	if it contains an element, and if it is empty.
**	It also has a member function to get the ValSet as a vector
*********************************************************************/
#include<vector>

#ifndef VALSET_HPP
#define VALSET_HPP

template <class T>
class ValSet{

//Member Variables
	private:
		T* TPointer;
		int sze;		//Size of the array
		int set;		//Number of values in the set

//Member Functions
	public:
		ValSet();
		ValSet(const ValSet &);
		ValSet<T>& operator=(ValSet &);
		~ValSet();
		int size();
		bool isEmpty();
		bool contains(T);
		void add(T);
		void remove(T);
		std::vector <T> getAsVector();
		ValSet<T> operator+(const ValSet &);
		ValSet<T> operator*(const ValSet &);
		ValSet<T> operator/(const ValSet &);
};

/*********************************************************************
** Default Constructor, points TPointer at an array of size 10
** Initializes sze = 10 and set = 0
*********************************************************************/
template <class T>
ValSet<T>::ValSet(){

//Make an array of size 10
	TPointer = new T[10];

//Initialize sze and set
	sze = 10;
	set = 0;
}


/*********************************************************************
** Copy Constructor: Dynamically allocates new array and copies to it
*********************************************************************/
template <class T>
ValSet<T>::ValSet(const ValSet &obj){

//Makes an array the same size as the one being copied
	TPointer = new T[obj.sze];

//Copies the array values
	for(int i  = 0; i < (obj.sze); i++){
		TPointer[i] = obj.TPointer[i];	
	}

//Copies the sze and set values
	sze = obj.sze;
	set = obj.set;
}

/***********************************************************************
** Overload Assignment Operator: Like Copy Constructor but returns *this
***********************************************************************/
template <class T>
ValSet<T>& ValSet<T>::operator=(ValSet &obj){

//Makes an array the same size as the one being copied
        TPointer = new T[obj.sze];

//Copies the array values
        for(int i = 0; i < (obj.sze); i++){
		TPointer[i] = obj.TPointer[i];
        }

//Copies the sze and set values
        sze = obj.sze;
        set = obj.set;

//Returns a reference to the this pointer
	return *this;
}

/*********************************************************************
** Destructor, deletes TPointer to deallocate memory
*********************************************************************/
template <class T>
ValSet<T>::~ValSet(){
	delete[] TPointer;
	TPointer = 0;
}

/*********************************************************************
** size() method returns the number of values in ValSet
*********************************************************************/
template <class T>
int ValSet<T>::size(){
	return set;
}

/*********************************************************************
** isEmpty() method returns true if ValSet is empty, false otherwise
*********************************************************************/
template <class T>
bool ValSet<T>::isEmpty(){

//If the set is empty, return true
	if(set == 0)
		return true;

//Otherwise, return false
	else
		return false;
}

/*********************************************************************
** contains() method returns true if val is in Valset, false otherwise
*********************************************************************/
template <class T>
bool ValSet<T>::contains(T val){

//If val is in ValSet, return true
	for(int i = 0; i < set; i++){
		if(TPointer[i] == val)
			return true;
	}

//Otherwise, return false
	return false;
}

/*********************************************************************
** add() method adds val to the ValSet if it isn't alread there
** if the array is full, it allocates a new array twice as long and
** redirects the pointer to the new array and deallocates the old one
*********************************************************************/
template <class T>
void ValSet<T>::add(T val){

//If  it is already there, break
	if(!contains(val)){
	
//If the array is full
		if(sze == set){

//Make a new one that's twice as long
			T* array = new T[sze];

//Add all the OG values to that array
			for(int i = 0; i < sze; i++){
				array[i] = TPointer[i];
			}

//Make TPointer point to the array, delete TPointer, update sze
			delete[] TPointer;
			TPointer = array;
			sze*=2;
		}

//Add val to the array
		TPointer[set] = val;

//Update set
		set++;
	}
}

/*********************************************************************
** remove method removes val from ValSet if it is in ValSet
** It shifts over the subsequent elements of the array
*********************************************************************/
template <class T>
void ValSet<T>::remove(T val){

//Check if val is in ValSet
	if(contains(val)){

//Remove it from the set
		for(int i = 0; i<set; i++){
			if(TPointer[i] == val){
				set--;			//Update set

//Shift over elements
				for(i; i<set; i++){
					TPointer[i] = TPointer[i+1];
				}
			}
		}
	}
}

/*********************************************************************
** getAsVector method returns a vector of type T that contains
** all of the values in ValSet and only those members
*********************************************************************/
template <class T>
std::vector <T> ValSet<T>::getAsVector(){

//Create a vector
	std::vector <T> TVector;

//Add contents of ValSet to TVector
	for(int i = 0; i < set; i++){
		TVector.push_back(TPointer[i]);
	}

//Return TVector
	return TVector;
}

/*********************************************************************
** Overload + Operator: Returns the union of operands
*********************************************************************/
template <class T>
ValSet<T> ValSet<T>::operator+(const ValSet &obj){

//Create new ValSet
	ValSet newSet(obj);

//Add values from both sets to the new ValSet
	for(int i = 0; i<sze; i++){
		if(!(newSet.contains(TPointer[i])))
			newSet.add(TPointer[i]);
	}
	return newSet;
}

/*********************************************************************
** Overload * Operator: Returns the intersection of operands
*********************************************************************/
template <class T>
ValSet<T> ValSet<T>::operator*(const ValSet &obj){

//Create new ValSet
	ValSet newSet(obj);

//Remove values that are in 'this'
	for(int i = 0; i<newSet.set; i++){
		if(!(this->contains(newSet.TPointer[i])))
			newSet.remove(newSet.TPointer[i]);
	}
	return newSet;
}

/*********************************************************************
** Overload / Operator: Returns the symmetric difference of operands
*********************************************************************/
template <class T>
ValSet<T> ValSet<T>::operator/(const ValSet &obj){

//Create new ValSet based on obj values
	ValSet newSet(obj);

//Remove values that are also in 'this'
	for(int i = 0; i<set; i++){
		if(newSet.contains(TPointer[i]))
			newSet.remove(TPointer[i]);

//Add values that are in 'this' but not obj
		else
			newSet.add(TPointer[i]);
	}
	return newSet;
}
#endif

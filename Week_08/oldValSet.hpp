/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/23/18
** Description: OF
*********************************************************************/
#include<vector>

#ifndef VALSET_HPP
#define VALSET_HPP

template <class T>
class ValSet{

	private:
		T* TPointer;
		int sze;		//Size of the array
		int set;		//Number of values in the set

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
		ValSet<T>& operator+(ValSet &);
		ValSet<T>& operator*(ValSet &);
		ValSet<T>& operator/(ValSet &);

};

/*********************************************************************
** Default Constructor, points TPointer at an array of size 10
** Initializes sze = 10 and set = 0
*********************************************************************/
template <class T>
ValSet<T>::ValSet(){
//Make an array of size 10
	T* array = new T[10];

//Make TPointer point to that array
	TPointer = array;

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
	T* array = new T[obj.sze];

//Makes TPointer point to that array
	TPointer = array;


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
        T array = new T[obj.sze];

//Makes TPointer point to that array
        TPointer = array;
	delete[] array;

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
** Destructor, delets TPointer to deallocate memory
*********************************************************************/
template <class T>
ValSet<T>::~ValSet(){
	delete TPointer;
}

/*********************************************************************
** size method returns the number of values in ValSet
*********************************************************************/
template <class T>
int ValSet<T>::size(){
	return set;
}

/*********************************************************************
** isEmpty method returns true if ValSet is empty, false otherwise
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
** contains method returns true if val is in Valset, false otherwise
*********************************************************************/
template <class T>
bool ValSet<T>::contains(T val){

//If val is in ValSet, return true
	for(int i = 0; i < sze; i++){
		if(TPointer[i] == val)
			return true;
	}

//Otherwise, return false
	return false;
}

/*********************************************************************
** add method adds val to the ValSet if it isn't alread there
** if the array is full, it allocates a new array twice as long and
** redirects the pointer to the new array and deallocates the old one
*********************************************************************/
template <class T>
void ValSet<T>::add(T val){

//If  it is already there, break
	if(contains(val))
		return;
	
//If the array is full
	if(sze == set){

//Make a new one that's twice as long
		sze*=2;
		T* array = new T[sze];

//Add all the OG values to that array
		for(int i = 0; i < set; i++){
			array[i] = TPointer[i];
		}

//Make TPointer point to the array
		TPointer = array;
	}

//Add val to the array
	TPointer[set+1] = val;

//Update set
	set++;
}

/*********************************************************************
** remove method removes val from ValSet if it is in ValSet
** It shifts over the subsequent elements of the array
*********************************************************************/
template <class T>
void ValSet<T>::remove(T val){

//Initialize temp variable
	T temp = val;

//Check if val is in ValSet
	if(contains(val)){

//Remove it from the set
		for(int i = 0; i<set; i++){
			if(TPointer[i] == val){
				TPointer[i] = TPointer[i+1];
				TPointer[i+1] = temp;
			}
		}
//Update set
		set--;
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
ValSet<T>& ValSet<T>::operator+(ValSet &obj){

//Update sze
	sze += obj.sze;

//Dynamically allocate new array
	T* array = new T[sze];

//Add all values from obj and this to array
	for(int i = 0; i<(set+obj.set); i++){
		array[i+set] = obj.TPointer[i];
		array[i] = TPointer[i];
	}
//Update set
	set += obj.set;

//Make TPointer point to the array
	TPointer = array;
	delete[] array;
	return *this;
}

/*********************************************************************
** Overload * Operator: Returns the intersection of operands
*********************************************************************/
template <class T>
ValSet<T>& ValSet<T>::operator*(ValSet &obj){

//Update sze and set
	sze += obj.sze;
	set = 0;

//Dynamically allocate new array
	T* array = new T[sze];

//Loop through adding values that appear in both arrays
	for(int i = 0; i < obj.set; i++){
		if(contains(obj.TPointer[i]))
			array.add(TPointer[i]);
			set++;
	}

//Make TPointer point to the array
	TPointer = array;
	delete[] array;
	return *this;
}

/*********************************************************************
** Overload / Operator: Returns the symmetric difference of operands
*********************************************************************/
template <class T>
ValSet<T>& ValSet<T>::operator/(ValSet &obj){

//Update sze
	sze += obj.sze;

//Dynamically allocate new array
	T* array = new T[sze];

//Add all values from obj and this to array
        for(int i = 0; i<(set+obj.set); i++){
                array[i+set] = obj.TPointer[i];
                array[i] = TPointer[i];
        }
//Update set
        set += obj.set;

//Remove all values that appear in both sets
	for(int i = 0; i < obj.set; i++){
		if(contains(obj.TPointer[i])){
			array.remove(obj.TPointer[i]);
			set--;
		}
	}

//Make TPointer point to the array
	TPointer = array;
	delete[] array;
	return *this;
}

#endif

#ifndef VALSET_HPP 
#define VALSET_HPP
#include <vector> 
#include <iostream>
using namespace std; 

template <class T> class ValSet {
	private:
		// Data members
		T* ptrT;
		int sz;
		int numValues;
	public:
		// Constructors and destructor
		ValSet();
		ValSet(const ValSet &obj);
		~ValSet();
		// Member functions
		ValSet& operator=(const ValSet &right);
		int size();
		bool isEmpty();
		bool contains(T value);
		void add(T value);
		void remove(T value);
		vector<T> getAsVector();
		ValSet operator+(const ValSet &right);
		ValSet operator*(const ValSet &right);
		ValSet operator/(const ValSet &right);
};

/*********************** 
**Description: Default constructor. 
***********************/ 
template <class T> 
ValSet<T>::ValSet() {
	ptrT = new T[10];
	sz = 10;
	numValues = 0;
}

/*********************** 
**Description: Copy constructor. 
***********************/ 
template <class T> 
ValSet<T>::ValSet(const ValSet &obj) {
	sz = obj.sz;
	ptrT = new T[sz];
	numValues = obj.numValues;
	for (int i=0; i<obj.sz; i++)
	{
		ptrT[i] = obj.ptrT[i];
	}
}

/*********************** 
**Description: Destructor. 
***********************/ 
template <class T> 
ValSet<T>::~ValSet() {
	delete [] ptrT;
	ptrT = 0;
}

/*********************** 
**Description: Overloaded assignment operator function. 
***********************/ 
template <class T> 
ValSet<T>& ValSet<T>::operator=(const ValSet &right) {
	if (this != &right)
	{
		sz = right.sz;
		ptrT = new T[sz];
		numValues = right.numValues;
		for (int i=0; i<right.sz; i++)
		{
			ptrT[i] = right.ptrT[i];
		}
	}
	return *this;
}

/*********************** 
**Description: Returns number of values currently in ValSet. 
***********************/ 
template <class T>  
int ValSet<T>::size() {
	return numValues;
}

/*********************** 
**Description: Returns boolean value based on whether or not the ValSet is empty. 
***********************/ 
template <class T> 
bool ValSet<T>::isEmpty() {
	if (numValues != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

/*********************** 
**Description: Returns true if ValSet contains a given value. 
***********************/ 
template <class T> 
bool ValSet<T>::contains(T value) {
	for (int i=0; i<numValues; i++)
	{
		if (ptrT[i] == value)
		{
			return true;
		}
	}
	return false;
}

/*********************** 
**Description: Adds value to ValSet. 
***********************/ 
template <class T> 
void ValSet<T>::add(T value) {
	if (!(contains(value)))
	{
		if (numValues == sz)
		{
			// If array is full, make a new array and delete old array
			T* newArray = new T[sz*2];
			for (int i=0; i<sz; i++)
			{
				newArray[i] = ptrT[i];
			}
			delete [] ptrT;
			ptrT = newArray;
			sz *= 2;
		}
		// Add new value to array and increment numValues
		ptrT[numValues] = value;
		numValues++;
	}
}

/*********************** 
**Description: Removes value from ValSet. 
***********************/ 
template <class T> 
void ValSet<T>::remove(T value) {
	if (contains(value))
	{
		for (int i=0; i<numValues; i++)
		{
			if (ptrT[i] == value)
			{
				numValues--;
				for (i; i<numValues; i++)
				{
					ptrT[i] = ptrT[i+1];
				}
			}
		}
	}
}

/*********************** 
**Description: Turns ValSet into vector of type T. 
***********************/ 
template <class T> 
vector<T> ValSet<T>::getAsVector() {
	vector<T> vec;
	for (int i=0; i<numValues; i++)
	{
		vec.push_back(ptrT[i]);
	}
	return vec;
}

/*********************** 
**Description: Overloaded + operator. 
***********************/ 
template <class T> 
ValSet<T> ValSet<T>::operator+(const ValSet &right) {
	ValSet newValSet(right);
	for (int i=0; i<numValues; i++)
	{
		if (!(newValSet.contains(ptrT[i])))
		{
			newValSet.add(ptrT[i]);
		}
	}
	return newValSet;
}

/*********************** 
**Description: Overloaded * operator. 
***********************/ 
template <class T> 
ValSet<T> ValSet<T>::operator*(const ValSet &right) {
	ValSet newValSet(right);
	for (int i=0; i<newValSet.numValues; i++)
	{
		if (!(this->contains(newValSet.ptrT[i])))
		{
			newValSet.remove(newValSet.ptrT[i]);
		}
	}
	return newValSet;
}

/*********************** 
**Description: Overloaded / operator. 
***********************/ 
template <class T> 
ValSet<T> ValSet<T>::operator/(const ValSet &right) {
	ValSet newValSet(right);
	for (int i=0; i<numValues; i++)
	{
		if (newValSet.contains(ptrT[i]))
		{
			newValSet.remove(ptrT[i]);
		}
		else
		{
			newValSet.add(ptrT[i]);
		}
	}
	return newValSet;
}
#endif

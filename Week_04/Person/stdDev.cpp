/********************************************************************** 
** Author: Wyatt Griffith
** Date: 04/25/18
** Description: This function takes two parameters and returns a double
**		It takes an array of Persons and the size of the array
**		It calculates and returns the standard deviation
**********************************************************************/
#include"Person.hpp"
#include<cmath>
#include<iostream>

double stdDev(Person persons[], int size){
//Initialize member variables
	double stdev = 0;
	double old = 0;
	double mean = 0;
	double diff = 0;
	double variance = 0;
	std::cout << stdev << old << mean << diff << variance << std::endl;

//Calculate mean
	for(int i=0; i<=(size-1); i++){
		old = (persons[i].getAge());
		mean += old;
	}
	mean /= size;
	
//Calculate variance
	for(int i=0; i<=(size-1); i++){
		old = (persons[i].getAge());
		diff = (old - mean);
		variance += pow(diff, 2);
        }
	variance /= size;

//Calculate standard deviation
	stdev = sqrt(variance);
	return stdev;
}

int main(){
        Person a("alice", 92);
        Person b("bernice", 77);
        Person array[] = {a,b};
        double result = stdDev(array, 2);
        double answer = 7.5;
        std::cout << "Result: " << result << "   Answer: " << answer << std::endl;

        Person ba("alice", 92);
        Person bb("bob", 84);
        Person bc("celeste", 68);
        Person bd("denise", 79);
        Person be("ellen", 81);
        Person carray[] = {ba, bb, bc, bd, be};
        result = stdDev(carray, 5);
        answer = 7.78203;
        std::cout << "Result: " << result << "   Answer: " << answer << std::endl;

        Person ab("alice", 13);
        Person bp("bob", 56);
        Person cb("celeste", 78);
        Person db("denise", 100);
        Person eb("ellen", 34);
        Person fb("fred", 68);
        Person barray[] = {ab, bp, cb, db, eb, fb};
        result = stdDev(barray, 6);
        answer = 28.48635;
        std::cout << "Result: " << result << "   Answer: " << answer << std::endl;

        return 0;
}

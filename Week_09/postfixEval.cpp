/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/30/18
** Description: This is the postFixEval function. It uses std::stacks
**	to evaluate postfix functions passed as std::strings.
**	It takes a string parameter that contians a postfix function.
**	It evalutes the function and returns the value as a double. 
*********************************************************************/ 
#include<iostream>
#include<string>
#include<stack>
#include<stdlib.h>

double postfixEval(std::string data){
//Initialize Variables and Emtpy Stack
	double val = 0;			//Value after operation
	double lft = 0;			//Left operand
	double rgt = 0;			//Right operand
	std::stack <double> numStack;	//Emtpy Stack

//Read values from the string, one char at a time
//Determine what type each char is
	for(int i = 0; data[i] != '\0'; i++){

//If the char is a number, push it onto the stack
		if(isdigit(data[i])){
			val = atof(&data[i]);
			numStack.push(val);

//If multiple digits are in a row, keep i up with atof
			if(isdigit(data[i + 1]))
				i++;
		}

//If the char is an operand, pop two numbers off the stack
		else if(ispunct(data[i])){
			rgt = numStack.top();
			numStack.pop();
			lft = numStack.top();
			numStack.pop();

//Perform the operation, push the result on the stack
			switch(data[i]){
				case '+':
					val = lft + rgt;
					break;
				case '-':
					val = lft - rgt;
					break;
				case '*':
					val = lft * rgt;
					break;
				case '/':
					val = lft / rgt;
					break;
			}
			numStack.push(val);
		}
	}
//After the loop, pop and return the only number on the stack
	val = numStack.top();
	numStack.pop();
	return val;
}


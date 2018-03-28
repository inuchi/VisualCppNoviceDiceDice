#include "DiceBox.h"

using namespace System;
using namespace DiceDice;


DiceBox::DiceBox()
{
	//init
	this->_number = 1;
}

DiceBox::DiceBox(int initNumber) 
{
	//init
	if ((initNumber >= 1) && (initNumber <= 6)) 
	{
		this->_number = initNumber;
	}
	else {
		this->_number = 1;
	}

}

void DiceBox::diceShake()
{
	Random^ ran = gcnew Random();
	this->_number = ran->Next(1, 7);



}

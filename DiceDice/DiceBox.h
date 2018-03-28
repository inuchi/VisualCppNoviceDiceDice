#pragma once

namespace DiceDice
{
	ref class DiceBox
	{
	private:
		//field
		int _number;

	public:
		//constructor
		DiceBox();
		DiceBox(int initNumber);

		//Method
		void diceShake();

		//Property
		property int number
		{
			int get()
			{
				return _number;
			}
			void set(int newNumber){
				if ((newNumber >= 1) && (newNumber <= 6)) {
					_number = newNumber;
				}
			}
		}
	};
}

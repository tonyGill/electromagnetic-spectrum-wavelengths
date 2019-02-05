/*

Algorithm was designed in the following series of steps:
1) Define variable for wavelength of type double
2) Prompt user to enter a wavelength in meters 
3) Take user input for wavelength variable
5) Specify range of wavelengths corresponding to type of radiation using conditionals and comparison operators
6) Output the the type of radiation based on user input value

Functions/Formulas

Function in this case was only the main function with wavelength variable, if conditionals for specifying range of wavelengths
and outputting type of radiation based on value user entered for wavelength


Revision History:
January 30, 2019: First working edition created
February 3, 2019: Final version revised and completed


*/

#include <iostream>
using namespace std;

int main()
{

	// Defines variable that represents the wavelength
	double wv;

	// Prompts user to enter a valid wavelength in meters
	cout << "Please enter a wave length value (in meters): " << endl;

	// Takes user input for specified wavelength value
	cin >> wv;

	/*The following conditionals below determine which range and type of radiation the value
	for wavelength falls under */

	// This represents the wavelength range for radio waves
	if (wv >= 1E-2) {
		cout << "Radio Wave" << endl;
	}

	// This represents the wavelength range for microwaves
	else if (wv < 1E-2 && wv > 1E-3) {
		cout << "Microwave" << endl;
	}

	// This represents the wavelength range for infrared
	else if (wv <= 1E-3 && wv > 7E-7) {
		cout << "Infrared" << endl;
	}

	// This represents the wavelength range for visible light
	else if (wv <= 7E-7 && wv > 4E-7) {
		cout << "Visible Light" << endl;
	}

	// This represents the wavelength range for ultraviolet 
	else if (wv <= 4E-7 && wv > 1E-8) {
		cout << "Ultraviolet" << endl;
	}

	// This represents the wavelength range for x-rays
	else if (wv <= 1E-8 && wv > 1E-11) {
		cout << "X-Rays" << endl;
	}

	// This represents the wavelength range for gamma rays
	else if (wv >= 1E-11) {
		cout << "Gamma Ray" << endl;
	}

	return 0;

}

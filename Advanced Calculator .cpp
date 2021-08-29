// Hello user , this is a project of a advanced calculator made by Eng/Ashraf Emad Rabiea 
// My LinkedIn account : https://www.linkedin.com/in/ashraf-emad-rabiea-1322761b6/

#include<iostream>

#include<cmath>

using namespace std;

const float pi = 3.14159;

class operations
{
public:
	void arithmetic()
	{
		system("cls");
		system("color 30");
		int operation;
		double number1, number2;

		cout << "Arithmetic :  \n";
		cout << "------------\n\n";

		cout << "Available Operations . \n\n" << endl;

		cout << "[1] Addition ( + ) \n" << endl;
		cout << "[2] Substraction ( - ) \n" << endl;
		cout << "[3] Product ( * ) \n" << endl;
		cout << "[4] Division ( / ) \n" << endl;
		cout << "[5] Modulus ( % ) \n \n" << endl;

		cout << "Select Opeartion \n\n";
		cin >> operation;

		cout << "\nEnter First Number :: ";
		cin >> number1;

		cout << "\nEnter Second Number :: ";
		cin >> number2;

		switch (operation)
		{
		case 1:
			cout << "\nThe Sum of [" << number1 << " + " << number2 << "] = ";
			cout << number1 + number2 << endl;
			break;
		case 2:
			cout << "\nThe Substraction of [" << number1 << " - " << number2 << "] = ";
			cout << number1 - number2 << endl;
			break;
		case 3:
			cout << "\nThe Product of [" << number1 << " * " << number2 << "] = ";
			cout << number1 * number2 << endl;
			break;
		case 4:
		{
			// Exception Handling For Skiping Runtime Errors . 
			try
			{
				if (number2 == 0)
					throw "\nDivision By Zero Exception ";
				else
				{
					cout << "\nThe Division of [" << number1 << " / " << number2 << "] = ";
					cout << number1 / number2 << endl;
				}
			}
			catch (const char* msg)
			{
				cout << msg << endl;
				cout << "Number 2 must be not equal zero . " << endl;
			}
			break;
		}
		case 5:
			cout << "\nThe Modulus of [" << number1 << " % " << number2 << "] = ";
			cout << fmod(number1, number2) << endl;
			break;
		default:
			cout << "\nInvalid Operation" << endl;
			break;
		}
	}

	void trignometric()
	{
		system("cls");
		system("color 30");

		int operation;
		float valdegree;
		cout << "Trignometric :  \n";
		cout << "--------------\n\n";

		cout << "Available Operations . \n\n" << endl;

		cout << "[1] Sine\n";
		cout << "[2] Cosine\n";
		cout << "[3] Tan\n";
		cout << "[4] Sine inverse\n";
		cout << "[5] Cosine inverse\n";
		cout << "[6] Tan inverse\n\n";
		cout << "Select Operation :: ";
		cin >> operation;
		cout << "\nEnter The Degree Value :: ";
		cin >> valdegree;
		double x = valdegree * pi / 180;
		if (operation == 1)
			cout << "\nSin(" << valdegree << ") = " << sin(x) << endl;
		else if (operation == 2)
			cout << "\nCos(" << valdegree << ") = " << cos(x) << endl;
		else if (operation == 3)
			cout << "\nTan(" << valdegree << ") = " << tan(x) << endl;
		else if (operation == 4)
			cout << "\nSin inverse(" << valdegree << ") = " << 1 / sin(x) << endl;
		else if (operation == 5)
			cout << "\nCos inverse(" << valdegree << ") = " << 1 / cos(x) << endl;
		else if (operation == 6)
			cout << "\nTan inverse(" << valdegree << ") = " << 1 / tan(x) << endl;
		else
			cout << "\nInvalid Operation " << endl;
	}

	void exponential()
	{
		system("cls");
		system("color 30");

		float base;
		float power;

		cout << "Exponential :  \n";
		cout << "-------------\n\n";

		cout << "Enter Base Number :: ";
		cin >> base;
		cout << "\nEnter Expnent :: ";
		cin >> power;

		cout << "\nThe result of the number [" << base << "] to the power [" << power << "] = ";
		cout << pow(base, power) << endl;
	}

	void logarithmicforbase_e()
	{
		system("cls");
		system("color 30");
		float value = 0.0;

		cout << "Logarithmic For Base e :  \n";
		cout << "------------------------\n\n";

		cout << "Enter the value to calculate the log(e) of the number :: ";
		cin >> value;

		cout << " = " << log(value) << endl; // for the base e : e = 2.71828 
	}

	void logarithmicforbase_10()
	{
		system("cls");
		system("color 30");

		float value = 0.0;

		cout << "Logarithmic For Base 10 :  \n";
		cout << "-------------------------\n\n";

		cout << "Enter the value to calculate the log(10) of the number :: ";
		cin >> value;

		cout << " = " << log10(value) << endl; // for the base 10
	}

	void square_root()
	{
		system("cls");
		system("color 30");

		double number;

		cout << "Square Root :  \n";
		cout << "-------------\n\n";

		cout << "Enter a number :: ";
		cin >> number;

		cout << "\nThe square root of the number [" << number << "] = " << sqrt(number) << endl;
	}

	void cube_root()
	{
		system("cls");
		system("color 30");

		double number;

		cout << "Cube Root :  \n";
		cout << "-----------\n\n";

		cout << "Enter a number :: ";
		cin >> number;

		cout << "\nThe cube root of the number [" << number << "] = " << cbrt(number) << endl;
	}

	void absolute()
	{
		system("cls");
		system("color 30");

		double number;

		cout << "Absolute Value :  \n";
		cout << "----------------\n\n";

		cout << "Enter a number :: ";
		cin >> number;

		cout << "\nThe absolute value of the number [" << number << "] = " << abs(number) << endl;
	}
};

class CalculatComplexNumber
{

private:

	int ash;
	float number1, number2, number3, number4;

	void input()
	{
		cout << "Complex Numbers :  \n";
		cout << "-----------------\n\n";

		cout << "Enter real part of the complex number 1 :: ";
		cin >> number1;
		cout << endl;

		cout << "Enter imaginary part of the complex number 1 :: ";
		cin >> number2;
		cout << endl;

		cout << "Enter real part of the complex number 2 :: ";
		cin >> number3;
		cout << endl;

		cout << "Enter imaginary part of the complex number 2 :: ";
		cin >> number4;
		cout << endl;

		cout << "Choose the operation you want : " << endl;
		cout << "[1] Addition ( + ) " << endl;
		cout << "[2] Substraction ( - ) " << endl;
		cout << "[3] Product ( * ) " << endl;
		cout << "[4] Division ( / ) " << endl;
		cout << "[5] Absolute ( | | ) " << endl;

		cin >> ash;
		cout << endl;
	}

public:

	void output()
	{
		system("cls");
		system("color 30");
		input();
		switch (ash)
		{
		case 1:
		{
			cout << "The Sum of [" << number1 << " + " << number2 << " i " << "] , " <<
				"[" << number3 << " + " << number4 << " i " << "] = " << endl;
			cout << number1 + number3 << " + " << number2 + number4 << " i " << endl;
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "The Subtraction of [" << number1 << " + " << number2 << " i " << "] , " <<
				"[" << number3 << " + " << number4 << " i " << "] = " << endl;
			cout << number1 - number3 << " + " << number2 - number4 << " i " << endl;
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "The Multiplication of [" << number1 << " + " << number2 << " i " << "] , " <<
				"[" << number3 << " + " << number4 << " i " << "] = " << endl;
			cout << (number1 * number3) + (number2 * number4 * -1) << " + ";
			cout << number2 * number3 + number1 * number4 << "i" << endl;// note :: ' i * i = -1 '
			cout << endl;
			break;
		}
		case 4:
		{
			cout << "The Dividing of [" << number1 << " + " << number2 << " i " << "] , " <<
				"[" << number3 << " + " << number4 << " i " << "] = " << endl;
			cout << "(" << (number1 * number3) + (number2 * -number4 * -1) << " + ";
			cout << number2 * number3 + number1 * -number4 << "i" << ") / ";
			cout << ((number3 * number3) + (number4 * -number4 * -1)) << endl;
			break;
		}
		case 5:
		{
			cout << "The absolute of first equation [" << number1 << " + " << number2 << " i ] = " << endl;
			cout << sqrt((pow(number1, 2) + pow(number2, 2))) << endl;
			cout << endl;
			cout << "The absolute of second equation [" << number3 << " + " << number4 << " i " << "] = " << endl;
			cout << sqrt((pow(number3, 2) + pow(number4, 2))) << endl;
			cout << endl;
			break;
		}
		default:
		{
			cout << "Wrong Chooise " << endl;
			cout << endl;
		}
		}

	}
};

class NumberingSystem
{
private:
	int binary_number, decimal_number = 0, octal_number = 0, remainder, y, i = 0, s = 0;
public:

	void ConvertFromBinaryToDecimal()
	{
		cout << "Enter a Binary Number :: ";
		cin >> binary_number;
		y = binary_number;
		while (binary_number > 0)
		{
			remainder = binary_number % 10;
			decimal_number += remainder * pow(2, i);
			i++;
			binary_number /= 10;
		}
		cout << "The Binary Number [" << y << "] in Decimal System = " << decimal_number << endl;
	}

	void ConvertFromBinaryToOctal()
	{
		int octal_number[25], k = 0;
		cout << "Enter a Binary Number :: ";
		cin >> binary_number;
		y = binary_number;
		while (binary_number > 0)
		{
			remainder = binary_number % 10;
			decimal_number += remainder * pow(2, i);
			i++;
			binary_number /= 10;
		}
		for (int i = 0; decimal_number > 0; k++, i++)
		{
			remainder = decimal_number % 8;
			octal_number[i] = remainder;
			decimal_number /= 8;
		}
		cout << "The Binary Number [" << y << "] in Octal System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << octal_number[j];
		cout << endl;
	}

	void ConvertFromBinaryToHexadecimal()
	{
		char hexa[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }, hexadecimal_number[25];
		int k = 0, r;
		cout << "Enter a Binary Number :: ";
		cin >> binary_number;
		y = binary_number;
		while (binary_number > 0)
		{
			remainder = binary_number % 10;
			decimal_number += remainder * pow(2, i);
			i++;
			binary_number /= 10;
		}
		for (int i = 0; decimal_number > 0; decimal_number /= 16, k++, i++)
		{
			remainder = decimal_number % 16;
			hexadecimal_number[i] = hexa[remainder];
		}
		cout << "The Binary Number [" << y << "] in Hexadecimal System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << hexadecimal_number[j];
		cout << endl;
	}

	void ConvertFromDecimalToBinary()
	{
		int binary_number[25], k = 0;
		cout << "Enter a Decimal Number :: ";
		cin >> decimal_number;
		y = decimal_number;
		for (int i = 0; decimal_number > 0; k++, decimal_number /= 2, i++)
		{
			remainder = decimal_number % 2;
			binary_number[i] = remainder;
		}
		cout << "The Decimal Number [" << y << "] in Binary System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << binary_number[j];
		cout << endl;
	}

	void ConvertFromDecimalToOctal()
	{
		int octal_number[25];
		cout << "Enter a Decimal Number :: ";
		cin >> decimal_number;
		y = decimal_number;
		while (decimal_number > 0)
		{
			remainder = decimal_number % 8;
			octal_number[i] = remainder;
			decimal_number /= 8;
			i++;
		}
		cout << "The Decimal Number [" << y << "] in Octal System = ";
		for (int j = i - 1; j >= 0; j--)
			cout << octal_number[j];
		cout << endl;
	}

	void ConvertFromDecimalToHexadecimal()
	{
		char hexa[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }, hexadecimal_number[25];
		cout << "Enter a Decimal Number :: ";
		cin >> decimal_number;
		y = decimal_number;
		while (decimal_number > 0)
		{
			remainder = decimal_number % 16;
			hexadecimal_number[i] = hexa[remainder];
			decimal_number /= 16;
			i++;
		}
		cout << "The Decimal Number [" << y << "] in Hexadecimal System = ";
		for (int j = i - 1; j >= 0; j--)
			cout << hexadecimal_number[j];
		cout << endl;
	}

	void ConvertFromOctalToBinary()
	{
		int binary_number[25], k = 0;
		cout << "Enter a Octal Number :: ";
		cin >> octal_number;
		y = octal_number;
		while (octal_number > 0)
		{
			remainder = octal_number % 10;
			decimal_number += remainder * pow(8, i);
			octal_number /= 10;
			i++;
		}
		for (int i = 0; decimal_number > 0; k++, decimal_number /= 2, i++)
		{
			remainder = decimal_number % 2;
			binary_number[i] = remainder;
		}
		cout << "The Octal Number [" << y << "] in Binary System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << binary_number[j];
		cout << endl;
	}

	void ConvertFromOctalToDecimal()
	{
		cout << "Enter a Octal Number :: ";
		cin >> octal_number;
		y = octal_number;
		while (octal_number > 0)
		{
			remainder = octal_number % 10;
			decimal_number += remainder * pow(8, i);
			octal_number /= 10;
			i++;
		}
		cout << "The Octal Number [" << y << "] in Decimal System = " << decimal_number << endl;
	}

	void ConvertFromOctalToHexadecimal()
	{
		char hexa[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }, hexadecimal_number[25];
		cout << "Enter a Octal Number :: ";
		cin >> octal_number;
		y = octal_number;
		while (octal_number > 0)
		{
			remainder = octal_number % 10;
			decimal_number += remainder * pow(8, i);
			octal_number /= 10;
			i++;
		}
		int k = 0;
		while (decimal_number > 0)
		{
			remainder = decimal_number % 16;
			hexadecimal_number[k] = hexa[remainder];
			decimal_number /= 16;
			k++;
		}
		cout << "The Octal Number [" << y << "] in Hexadecimal System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << hexadecimal_number[j];
		cout << endl;
	}

	void ConvertFromHexadecimalToBinary()
	{
		char hexadecimal[25], ash;
		int sum = 0, decimal, s = 0, j = 0;
		cout << "Enter a Hexadecimal Number :: ";
		cin >> hexadecimal;
		j = strlen(hexadecimal);
		for (int i = j - 1, k = 0; i >= 0; k++, i--)
		{
			ash = hexadecimal[i];
			switch (ash)
			{
			case '1':
				s = 1;
				break;
			case '2':
				s = 2;
				break;
			case '3':
				s = 3;
				break;
			case '4':
				s = 4;
				break;
			case '5':
				s = 5;
				break;
			case '6':
				s = 6;
				break;
			case '7':
				s = 7;
				break;
			case '8':
				s = 8;
				break;
			case '9':
				s = 9;
				break;
			case 'A':
				s = 10;
				break;
			case 'B':
				s = 11;
				break;
			case 'C':
				s = 12;
				break;
			case 'D':
				s = 13;
				break;
			case 'E':
				s = 14;
				break;
			case 'F':
				s = 15;
				break;
			default:
				cout << "Error " << endl;
				break;
			}
			sum += s * pow(16, k);
		}
		int binary_number[25], k = 0;
		for (int i = 0; sum > 0; k++, sum /= 2, i++)
		{
			remainder = sum % 2;
			binary_number[i] = remainder;
		}
		cout << "The Hexadecimal Number [" << hexadecimal << "] in Binary System = ";
		for (int j = k - 1; j >= 0; j--)
			cout << binary_number[j];
		cout << endl;
	}

	void ConvertFromHexadecimalToDecimal()
	{
		char hexadecimal[25], ash;
		int sum = 0, decimal, s = 0, j = 0;
		cout << "Enter a Hexadecimal Number :: ";
		cin >> hexadecimal;
		j = strlen(hexadecimal);
		for (int i = j - 1, k = 0; i >= 0; k++, i--)
		{
			ash = hexadecimal[i];
			switch (ash)
			{
			case '1':
				s = 1;
				break;
			case '2':
				s = 2;
				break;
			case '3':
				s = 3;
				break;
			case '4':
				s = 4;
				break;
			case '5':
				s = 5;
				break;
			case '6':
				s = 6;
				break;
			case '7':
				s = 7;
				break;
			case '8':
				s = 8;
				break;
			case '9':
				s = 9;
				break;
			case 'A':
				s = 10;
				break;
			case 'B':
				s = 11;
				break;
			case 'C':
				s = 12;
				break;
			case 'D':
				s = 13;
				break;
			case 'E':
				s = 14;
				break;
			case 'F':
				s = 15;
				break;
			default:
				cout << "Error " << endl;
				break;
			}
			sum += s * pow(16, k);
		}
		cout << "The Hexadecimal Number [" << hexadecimal << "] in Decimal System = " << sum << endl;
	}

	void ConvertFromHexadecimalToOctal()
	{
		char hexadecimal[25], ash;
		int sum = 0, decimal, s = 0, j = 0;
		cout << "Enter a Hexadecimal Number :: ";
		cin >> hexadecimal;
		j = strlen(hexadecimal);
		for (int i = j - 1, k = 0; i >= 0; k++, i--)
		{
			ash = hexadecimal[i];
			switch (ash)
			{
			case '1':
				s = 1;
				break;
			case '2':
				s = 2;
				break;
			case '3':
				s = 3;
				break;
			case '4':
				s = 4;
				break;
			case '5':
				s = 5;
				break;
			case '6':
				s = 6;
				break;
			case '7':
				s = 7;
				break;
			case '8':
				s = 8;
				break;
			case '9':
				s = 9;
				break;
			case 'A':
				s = 10;
				break;
			case 'B':
				s = 11;
				break;
			case 'C':
				s = 12;
				break;
			case 'D':
				s = 13;
				break;
			case 'E':
				s = 14;
				break;
			case 'F':
				s = 15;
				break;
			default:
				cout << "Error " << endl;
				break;
			}
			sum += s * pow(16, k);
		}
		int octal_number[25];
		while (sum > 0)
		{
			remainder = sum % 8;
			octal_number[i] = remainder;
			sum /= 8;
			i++;
		}
		cout << "The Hexadecimal Number [" << hexadecimal << "] in Octal System = ";
		for (int j = i - 1; j >= 0; j--)
			cout << octal_number[j];
		cout << endl;
	}
};

void number_system()
{
	system("cls");
	system("color 30");

	NumberingSystem s;

	int sel;

	cout << "Numbering System :  \n";
	cout << "------------------\n\n";

	cout << "Available operations \n" << endl;

	cout << "[01] Convert from Binary system to Decimal system . " << endl;
	cout << "[02] Convert from Binary system to Octal system . " << endl;
	cout << "[03] Convert from Binary system to Hexadecimal system . " << endl;
	cout << "[04] Convert from Decimal system to Binary system . " << endl;
	cout << "[05] Convert from Decimal system to Octal system . " << endl;
	cout << "[06] Convert from Decimal system to Hexadecimal system . " << endl;
	cout << "[07] Convert from Octal system to Binary system . " << endl;
	cout << "[08] Convert from Octal system to Decimal system . " << endl;
	cout << "[09] Convert from Octal system to Hexadecimal system . " << endl;
	cout << "[10] Convert from Hexadecimal system to Binary system . " << endl;
	cout << "[11] Convert from Hexadecimal system to Decimal system . " << endl;
	cout << "[12] Convert from Hexadecimal system to Octal system . " << endl;

	cout << endl;

	cout << "Choose the Convert you want :: ";
	cin >> sel;

	switch (sel)
	{
	case 1:
		s.ConvertFromBinaryToDecimal();
		break;
	case 2:
		s.ConvertFromBinaryToOctal();
		break;
	case 3:
		s.ConvertFromBinaryToHexadecimal();
		break;
	case 4:
		s.ConvertFromDecimalToBinary();
		break;
	case 5:
		s.ConvertFromDecimalToOctal();
		break;
	case 6:
		s.ConvertFromDecimalToHexadecimal();
		break;
	case 7:
		s.ConvertFromOctalToBinary();
		break;
	case 8:
		s.ConvertFromOctalToDecimal();
		break;
	case 9:
		s.ConvertFromOctalToHexadecimal();
		break;
	case 10:
		s.ConvertFromHexadecimalToBinary();
		break;
	case 11:
		s.ConvertFromHexadecimalToDecimal();
		break;
	case 12:
		s.ConvertFromHexadecimalToOctal();
		break;
	default:
		cout << "Invalid Operation" << endl;
		break;
	}

}

int main()
{

	operations op;

	CalculatComplexNumber c;

	system("color 60");

	int sel;
	char choice;

	while (true)
	{
		cout << "\n\n\n\t\t\t\t\t\t Advanced Calculator \n\n\n\n";
		cout << "Available Operations \n" << endl;
		cout << "[01] Arithmetic " << endl;
		cout << "[02] Trignometric " << endl;
		cout << "[03] Exponential " << endl;
		cout << "[04] Square Root " << endl;
		cout << "[05] Cube Root " << endl;
		cout << "[06] Absolute Value " << endl;
		cout << "[07] Logarithmic For Base e " << endl;
		cout << "[08] Logarithmic For Base 10 " << endl;
		cout << "[09] Complex Numbers " << endl;
		cout << "[10] Numbering System \n" << endl;
		cout << "Enter the type of the operation you want to calculate :: ";
		cin >> sel;

		cout << endl;

		switch (sel)
		{

		case 1:
		{
			op.arithmetic();
			break;
		}

		case 2:
		{
			op.trignometric();
			break;
		}

		case 3:
		{
			op.exponential();
			break;
		}

		case 4:
		{
			op.square_root();
			break;
		}

		case 5:
		{
			op.cube_root();
			break;
		}

		case 6:
		{
			op.absolute();
			break;
		}

		case 7:
		{
			op.logarithmicforbase_e();
			break;
		}

		case 8:
		{
			op.logarithmicforbase_10();
			break;
		}

		case 9:
		{
			c.output();
			break;
		}

		case 10:
		{
			number_system();
			break;
		}

		default:
		{
			cout << "Invalid Operation" << endl;
			break;
		}

		}

		cout << "\nDo you want to make more operations ? Y : N \n" << endl;
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			system("cls");
			system("color 60");
			continue;
		}

		else
		{
			cout << "\nWrong Choise " << endl;

			cout << "\nDo you want to try to choise again ? Y : N \n" << endl;

			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				system("color 60");
				continue;
			}

			else
			{
				cout << "\nWrong Choise Again So The Program Will Be Cloosed . " << endl;
				break;
			}
		}
	}
}
# include <iostream> 
# include <string> 
# include "User.h"
# include <cctype> 
#include <stack>                   
#include <vector>
#include <sstream> 
                         /* Base 10 to Binary Calculator    
                          * All calculations accounted for and displayed after user ends session 
                          * User class maintains:
                          * string name
                          * vector of calculation structs*/
                          /* These functions will be conducting the conversion from decimal to binary or vice versa*/
using namespace std; 
int binaryCheck(int thenumber);
string BinarytoDecimal(string B_num);    // Will recieve binary number as a string and output the decimal equivalent 
string DecimaltoBinary(int aint);       // Will receive base 10 number as a string and  output th binary equivalent 

int main() 
{    vector<int> binary_vector; 
	 int total_calc_count = 0; 
	string username; 
	string inputNumber;
	bool isDig = true;
	bool isHex = true; 
	bool isBinary = true;
	cout << "== The Amazing Number Converter ==" << endl;
	cout << "Welcome New User !" << endl; 
	cout <<"Please Enter Your Name To Begin a New Session" << endl; 
	getline(cin, username);
	User newUser(username);
    cout << "Nice to meet you" << newUser.get_username()<<endl;
    string intputNumber;
    while( inputNumber!= "0")  // User inputs number as CLA 
    { 
	string intputNumber;
	isBinary = true;
    cout << "Insert the number you wish to convert:" << endl;
    cout << "Or insert 0 to exit:" << endl;
	cin >> inputNumber;
   
    for(int i = 0; i < inputNumber.length(); i++)
{		
		string singleChar(1,inputNumber[i]); // Check for Binary or Decimal 
		int intChar = newUser.changeAcharacter(singleChar);
		if (!newUser.binaryCheck(intChar))
		{ 
			isBinary = false ; 
		}	
	} 
    
  if ((isBinary == false) and (inputNumber != "0"))
  { 
	  cout << "Your Number is a Digit" << endl;
	  Calculations newCalc; 
	  newCalc.inputType = " Digit"; 
	  newCalc.startingNumber = inputNumber; 
	  total_calc_count++; 
	  newCalc.calculation_number = total_calc_count;
	  std::string::size_type sz;
	  int aint = stoi(inputNumber); 
	  newCalc.endingNumber = newUser.DecimaltoBinary(aint);
	  newUser.add2calculationvector(newCalc); 
	  
 }
 
else  if  (inputNumber != "0" ) // Numbers that are only 01's could be binary or decimal
{   string baseOrbin; 
	cout << "Well the number you entered could be in Base 10 or Binary......" << endl;
	cout << "Did you want to input Base 10 or Binary?" << endl; 
	cin >> baseOrbin;
	if (baseOrbin == "Binary") 
	{   
		
		cout << "Alright thanks for the clarification" << endl; 
		Calculations newCalc; 
		newCalc.inputType = " Binary"; 
		newCalc.startingNumber = inputNumber; 
		newCalc.endingNumber = newUser.BinarytoDecimal(inputNumber); 
		total_calc_count++; 
		newCalc.calculation_number = total_calc_count; 
		newUser.add2calculationvector(newCalc);
		
	} 
	else 
	{ 
	  cout << "Your Number is a Digit" << endl;
	  Calculations newCalc; 
	  newCalc.inputType = " Digit"; 
	  newCalc.startingNumber = inputNumber; 
	  total_calc_count++; 
	  newCalc.calculation_number = total_calc_count;
	  int aint = stoi(inputNumber); 
	  newCalc.endingNumber = newUser.DecimaltoBinary(aint);
	  newUser.add2calculationvector(newCalc);
	  
	} 
	
	
	
} 
}
 newUser.print_Calculations();
 return 0; 
} 





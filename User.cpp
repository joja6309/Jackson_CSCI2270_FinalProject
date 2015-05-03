# include "User.h" 
# include <iostream> 
# include <string> 
#include <stack>
# include <vector> 
# include <sstream> 
using namespace std;
void User::set_username(string newuser) 
 {
	username = newuser; 
	return; 
 }

User::User(string input_username) 
{ 
	set_username(input_username); //sets user name read in from CLA
	return;
	
} 
string User::get_username()
{ 
	return username; 
	
} 

void User::print_Calculations()
{ 
	cout << "===Your Calculations====" << endl;      
for( int i = 0; i < calculation_vector.size();i++)
{ 
   
   cout << "==================" << endl;
	cout << "Calculation Number:" << calculation_vector[i].calculation_number<<endl;
	cout << "Input type:" << calculation_vector[i].inputType << endl;
	cout << "Input value:" << calculation_vector[i].startingNumber << endl;
	cout << "Converted value:" << calculation_vector[i].endingNumber << endl;
	cout << endl;
	
} 
	
	return;
	
}
void User::set_calc_count( int anumber) 
{ 
	
	total_calc_count = anumber;
	return;
} 
int User::get_calc_count() 
{ 
	
	return total_calc_count; 
	
} 
int User::binaryCheck( int thenumber)
{ 
	
	
	int newnumber;
	newnumber = thenumber % 10;
		if(newnumber > 1)
		{
			return 0;
		}
		else 
		     return 1; 
	
} 
string User::BinarytoDecimal(string B_num)	
{ 
	int val = 0; 
	int factor = 1; 
	int len = B_num.length();
	for (int x = len-1;x >= 0;x--)
	{
		if (B_num[x] == '1')
			val+=factor;
		
		factor*=2;
	}
	stringstream ss; 
	ss<< val; 
	string str = ss.str();
	return str;
} 
string User:: DecimaltoBinary(int D_num) 
{ 
	string return_value;
	while ( D_num > 0)
	{
   // Check <span class="statement">if</span> n is even or odd.
     // You can instead write
      //result[nBits] = n%2;
    
   if (D_num % 2  == 0)
   {
     return_value = return_value + "0" ; 
   } 
   else {
     
      return_value = return_value + "1"; 
   }
 
   D_num = D_num/2; /* Divide by 2 */	
} 
stringstream ss; 
 ss<<return_value; 
 string str = ss.str();
 str = reverseOrder(str); //Added by Aubree Lytwyn
	return str;	
} 

//reverseOrder created/added by Aubree Lytwyn
/* string User::reverseOrder(string str)
 * This function takes the orginal str created in DecimaltoBinary(int D_num) and reverses the order of the orginal string
 * str = reverseOrder(str);
 * pre-conditions: Must have a digit converted to a binary string (done in DecimaltoBinary().
 * post-conditions: str is reversed in order to display the correct binary number */
string User::reverseOrder(string str)
{
	string strReverse;
	for(int i = str.size(); i > -1 ; i--)
	{
		strReverse = strReverse + str[i];
	}
	return strReverse;
}
void  User:: add2calculationvector(Calculations newcalc) 
{ 
	
	calculation_vector.push_back(newcalc); 
	
	return; 
} 
int User::changeAcharacter( string singleChar) 
{ 
	int nowAint = stoi(singleChar); 
	return nowAint; 
} 

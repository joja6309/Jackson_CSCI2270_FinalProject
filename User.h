#ifndef GRAPH_H
#define GRAPH_H
# include <vector>
# include <iostream>

struct Calculations
{ 
int calculation_number;
std::string inputType;
std::vector<int> binary_vector; 
std::string startingNumber;
std::string endingNumber; 		
};

class User
{ 
   public: 
   
   User(std::string username);
   int total_calc_count; 
   std::string username; 
   std::string get_username();
   void set_calc_count(int number);
   int get_calc_count();
   int binaryCheck( int thenumber);
   void set_username(std::string username);
   std::vector<Calculations> calculation_vector; 
   void print_Calculations(); 
   std::string BinarytoDecimal(std::string B_num);
   std::string DecimaltoBinary(int D_num);
   void add2calculationvector(Calculations acalculation);
   int changeAcharacter(std::string aint); 

   
   private:
  
    
  }; 





















# endif 

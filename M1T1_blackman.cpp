#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
string farm_name = "Blackman";
int num_apples = 10;
double cost_each =10.25;
string user_name;
int apples_to_buy;

cout << "Hello! What's your name? ";
cin >> user_name;
cout<< "How many apple would you like to buy?:" << endl;
cin >> apples_to_buy;
cout << "Your total is:" << endl;
cout << "Thanks for coming by, " << user_name <<"!" << endl;

cout << setprecision (2) << fixed;

cout << "Welcome to the "<<farm_name<< " apple farm!" << endl;
cout << "There are " << num_apples << " apples in stock"<< endl;
cout << "They cost $" << cost_each << "each." << endl;

double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" <<total_cost<< endl;

}
#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  float total;
  float user_input;
  string user_selection;

  // Ask user if they want to input weekly or monthly sales
  cout << "Do you want to input daily or monthly sales: weekly or monthly ";
  cin >> user_selection;

  // Iterate on the users selection allowing them to enter data
  if (user_selection == "weekly")
    {
      for (int i = 1; i <= 7; i++)
	{
	  switch (i)
	    {
	    case 1:
	      cout << "Please enter input for Monday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 2:
	      cout << "Please enter input for Tuesday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 3:
	      cout << "Please enter input for Wednesday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 4:
	      cout << "Please enter input for Thursday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 5:
	      cout << "Please enter input for Friday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 6:
	      cout << "Please enter input for Saturday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 7:
	      cout << "Please enter input for Sunday: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    default:
	      cout << "Something went wrong" << endl;
	      break;
	    }
	}
      // Print out total for the week
      cout << "The total for the week was: $" << total << endl;
    }
  else if(user_selection == "monthly")
    {
      for(int i=0; i<=12; i++)
	{
	  switch(i)
	    {
	    case 1:
	      cout << "Please enter input for January: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 2:
	      cout << "Please enter input for February: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 3:
	      cout << "Please enter input for March: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 4:
	      cout << "Please enter input for April: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 5:
	      cout << "Please enter input for May: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 6:
	      cout << "Please enter input for June: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 7:
	      cout << "Please enter input for July: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 8:
	      cout << "Please enter input for August: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 9:
	      cout << "Please enter input for September: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 10:
	      cout << "Please enter input for October: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 11:
	      cout << "Please enter input for November: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    case 12:
	      cout << "Please enter input for December: " << endl;
	      while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
	      total += user_input;
	      break;
	    }
	}
      // Print out sales for the year
      cout << "Total sales this year: $" << total << endl;
    }
  else
    {
      cout << "It looks like you provided invalid input, restarting program..." << endl;
      main();
    }

  return 0;
}

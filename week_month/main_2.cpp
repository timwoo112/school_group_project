/*
Authors: Nathaniel Morgret, Joel Fry, David Deraleau, Tim Woolley
 */
#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  float total = 0;
  float user_input = 0;
  string user_selection = "";

  // Ask user if they want to input weekly or monthly sales
  cout << "Do you want to input sales for a week or a year? (week or year): ";
  cin >> user_selection;
  
  // Iterate on the users selection allowing them to enter data
  // Only asks for monday-friday since those are business days
  if (user_selection == "week")
    {
      for (int i = 1; i <= 5; i++)
	{
	  switch (i)
	    {
	    case 1:
	      cout << "Please enter input for Monday: " << endl;
	      break;
	    case 2:
	      cout << "Please enter input for Tuesday: " << endl;
	      break;
	    case 3:
	      cout << "Please enter input for Wednesday: " << endl;
	      break;
	    case 4:
	      cout << "Please enter input for Thursday: " << endl;
	      break;
	    case 5:
	      cout << "Please enter input for Friday: " << endl;
	      break;
	    default:
	      cout << "Something went wrong" << endl;
	      return 1;
	      break;
	    }
	  // Checks for valid input
	    while(!(cin >> user_input))
		{
		  cout << "Invalid input" << '\n';
		  cin.clear();
		  cin.ignore(10000, '\n');
		  cout << "Please try again." << endl;
		}
		total += user_input;
	}
      // Print out total for the week
      cout << "The total for the week was: $" << total << endl;
    }
  else if(user_selection == "year")
    {
      for(int i=1; i<=12; i++)
	{
	  switch(i)
	    {
	    case 1:
	      cout << "Please enter input for January: " << endl;
	      break;
	    case 2:
	      cout << "Please enter input for February: " << endl;
	      break;
	    case 3:
	      cout << "Please enter input for March: " << endl;
	      break;
	    case 4:
	      cout << "Please enter input for April: " << endl;
	      break;
	    case 5:
	      cout << "Please enter input for May: " << endl;
	      break;
	    case 6:
	      cout << "Please enter input for June: " << endl;
	      break;
	    case 7:
	      cout << "Please enter input for July: " << endl;
	      break;
	    case 8:
	      cout << "Please enter input for August: " << endl;
	      break;
	    case 9:
	      cout << "Please enter input for September: " << endl;
	      break;
	    case 10:
	      cout << "Please enter input for October: " << endl;
	      break;
	    case 11:
	      cout << "Please enter input for November: " << endl;
	      break;
	    case 12:
	      cout << "Please enter input for December: " << endl;
	      break;
	    }
	  // Checks for valid input
	  while(!(cin >> user_input))
	    {
	      cout << "Invalid input" << '\n';
	      cin.clear();
	      cin.ignore(10000, '\n');
	      cout << "Please try again." << endl;
	    }
	    total += user_input;
	}
      // Print out sales for the year
      cout << "Total sales the year: $" << total << endl;
    }
  else
    {
      cout << "Invalid input, try again..." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      main();
    }

  return 0;
}

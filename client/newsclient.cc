/*-----------------------
User client skeleton. WIP
used for user interaction

-----------------------*/

#include <iostream>
#include <string>

using namespace std;

void help()
{
  cout << "Available commands: \n";
  cout << "quit ,quits the program \n";
  cout << "help ,prints help \n";
  cout << "more commands coming up. :) \n";
}

int main()
{
  string command;

  cout << "Welcome to the newsgroup client. \n";
  cout << "Write help for help \n";

  do  {
    cout << "What do you want to do? \n";
    cin >> command;
    cout << "You wrote: " << command << "\n";
    if(command == "quit"){break;}
    if(command == "help"){help();}

    /*
    switch (command)
    {
      case "quit": return 0;
      case "help": help();
      default : cout << "Not a command, write help for help.\n";
    }
    */
  } while (cin);

  return 0;
}

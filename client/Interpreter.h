/*-----------------------
interpreter interface.
Responsible for "Interpreting" 
the protocol codes.
basically a series of
switch case statements.
-----------------------*/

class Interpreter 
{
	public: 
		Interpreter(Connection& conn);
		void send(); // sends a code along connection
		void recieve(); // reads the code 
	private: 
		connection conn; 
};
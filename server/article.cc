/*-----------------------
The article class
-----------------------*/
#include<string>
#include<sstream>
#include<cstdlib> //rand();

class Article
{
public:
  Article(string title, string author, string text);
  string toString();
private:
  string author;
  string title;
  string text;
  unsigned int id;
};

Article::Article(string t, string a, string txt)
{
	title = t; 
	author = a; 
	txt = txt;
	// create random number
	id = rand() % 10000; 
}

string Article::toString()
{
	stringstream ss; 
	ss << title << "\n" << "by " << author << "\n" << "Article ID: " << id << "\n"; 
	return ss.tostring();
}
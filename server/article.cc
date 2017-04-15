/*-----------------------
The article class
-----------------------*/
#include<string>
#include<sstream>

operator==(Article a, Article b)
{
	return a.id == b.id; 
}

operator>(Atricle a, Article b)
{
	return a.title > b.title; 
}

Article::Article(string t, string a, string txt, int i) : title(t) : author(a) : text(txt) : id(i) {}

string Article::toString()
{
	stringstream ss; 
	ss << title << "\n" << "by " << author << "\n" << "Article ID: " << id << "\n"; 
	return ss.tostring();
}

string getTitle()
{
	return title;
}
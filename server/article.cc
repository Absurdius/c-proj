/*-----------------------
The article class
-----------------------*/
#include<string>
#include<random>

class Article
{
public:
  Article();
  void print();
private:
  string author;
  string title;
  string text;
  unsigned int id;
};

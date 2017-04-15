

class Article
{
public:
  Article(string title, string author, string text, int i);
  string toString();
  string getTitle(); 
  bool operator==(Article a, Article b); 
  bool operator>(Article a, Article b); 
private:
  string author;
  string title;
  string text;
  unsigned int id;
};


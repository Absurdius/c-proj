
class NewsGroup
{
public:
  NewsGroup(string n);
  ~NewsGroup();
  addArticle(Article a);
  bool removeArticle(); //ASSUMES ARTICLE HAS == OPERATOR 
  sortArticles(); // ASSUMES ARTICLE HAS < OPERATOR
  getHeadlines(); 
private:
  List<Article> articles; // can be vect too 
  string name;
  unsigned int id;
};
/*-------------------
newsgroup
-------------------*/

class NewsGroup
{
public:
  NewsGroup(string n);
  ~NewsGroup();
  addArticle(Article a);
  bool removeArticle(); //ASSUMES ARTICLE HAS == OPERATOR IMPLEMENT
  sortArticles(); // ASSUMES ARTICLE HAS < OPERATOR IMPLEMENT
  getHeadlines(); 
private:
  List<Article> articles; // can be vect too 
  string name;
  unsigned int id;
};

NewsGroup::NewsGroup(string n) name(n)
{}

NewsGroup::~NewsGroup()
{
	list<article>* listpointer = articles; 
	delete listpointer; 
}

NewsGroup::addArticle(Article a)
{
	list.add(a); 
}

//returns true if article was removed

bool NewsGroup::removeArticle(Article a)
{
	return articles.find(a):
}

NewsGroup::sortArticles()
{
	articles.sort();
}

NewsGroup::getHeadlines()
{
	for(article a: articles)
	{
		a.getTitle(); // IMPLEMENT GET TITLE
	}
}

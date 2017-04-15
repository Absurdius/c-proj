/*-------------------
newsgroup
-------------------*/

#include<List>
#include<algorithm>
#inclide "newsgroup.h"

NewsGroup::NewsGroup(string n) : name(n)
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
		a.getTitle(); 
	}
}

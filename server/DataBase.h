/*-----------------------
DataBase "interface"
All the methods that both 
versions of the server must implement.
All public methods should be virtual.
-----------------------*/



class DataBase 
{
public: 
	virtual DataBase() = default;
	virtual bool listNewsGroups() = 0;				//return type undefined 
	virtual bool listArticles(NewsGroup& ng) = 0;	// choose what you like. 
	virtual void saveDataBase() = 0;

private: 
	list<NewsGroup> newsgroups; 
};
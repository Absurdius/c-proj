/*-------------------
newsgroup
-------------------*/

class NewsGroup
{
public:
  NewsGroup();
  ~NewsGroup();
  addArticle();
  removeArticle();
private:
  List articles; // can be vect too 
  string name;
  unsigned int id;
};

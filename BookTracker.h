#ifndef BOOKTRACKER_H
#define BOOKTRACKER_H

#include <iostream>

using namespace std;

class BookTracker
{
private:
	string title;
	string author;
	int pages;
	bool read;
	bool DNF;
	bool finished;

	
public:
	//setters
	void setTitle(string Title);
	void setAuthor(string Author);
	void setPageNum(int page);
	void setRead(bool hasRead);
	void setDNF(bool dnf);
	void setFinished(bool hasRead, bool DNF);

	//getters
	string getTitle();
	string getAuthor();
	int getPageNumber();
	bool getRead();
	bool getDNF();
	bool getFinished();
};

#endif
#include <iostream>
#include <string>

#include "BookTracker.h"

using namespace std;

//getters
string BookTracker::getTitle()
{
	return title;
}

string BookTracker::getAuthor()
{
	return author;
}

int BookTracker::getPageNumber()
{
	return pages;
}

bool BookTracker::getRead()
{
	return read;
}

bool BookTracker::getFinished()
{
	return finished;
}

//setters
void BookTracker::setTitle(string Title)
{
	title = Title;
}

void BookTracker::setAuthor(string Author)
{
	author = Author;
}

void BookTracker::setPageNum(int page)
{
	pages = page;
}

void BookTracker::setRead(bool hasRead)
{
	read = hasRead;
}

void BookTracker::setDNF(bool dnf)
{
	DNF = dnf;
}

void BookTracker::setFinished(bool hasRead, bool DNF)
{
	if (hasRead == true && DNF == false)
	{
		finished = true;
	}
}

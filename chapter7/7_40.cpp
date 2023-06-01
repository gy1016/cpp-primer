#include <iostream>
#include <string>

class Book
{
public:
    Book(unsigned isbn, std::string const &name, std::string const &author, std::string const &pubdate) : _isbn(isbn), _name(name), _author(author), _pubdate(pubdate)
    {
    }

    explicit Book(std::istream &in)
    {
        in >> _isbn >> _name >> _author >> _pubdate;
    }

private:
    unsigned _isbn;
    std::string _name;
    std::string _author;
    std::string _pubdate;
};
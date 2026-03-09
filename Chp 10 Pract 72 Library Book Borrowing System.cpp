#include <iostream>

using namespace std;

class LibraryBook
{
private:
    char book_title[50];
    int copies_available;

public:
    LibraryBook()
    {
        book_title[0] = 'C';
        book_title[1] = '+';
        book_title[2] = '+';
        book_title[3] = '\0';

        copies_available = 3;
    }

    void set_title(char new_title[])
    {
        int index = 0;

        if (new_title[0] != '\0')
        {
            while (new_title[index] != '\0')
            {
                book_title[index] = new_title[index];
                index++;
            }

            book_title[index] = '\0';
        }
    }

    char* get_title()
    {
        return book_title;
    }

    int get_copies()
    {
        return copies_available;
    }

    void borrow_book()
    {
        if (copies_available > 0)
        {
            copies_available--;
        }
        else
        {
            cout << "Not available!" << endl;
        }
    }
};

int main()
{
    LibraryBook book;

    char input_title[50];
    int borrow_count;

    cin >> input_title;
    cin >> borrow_count;

    book.set_title(input_title);

    for (int index = 0; index < borrow_count; index++)
    {
        book.borrow_book();
    }

    cout << "Title: " << book.get_title() << endl;
    cout << "Copies left: " << book.get_copies() << endl;

    return 0;
}

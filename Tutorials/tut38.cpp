/* Runtime Polymorphism using Virtual Functions

   ✔ Polymorphism = One name, many forms
   ✔ Runtime polymorphism happens when:
       - A base class pointer
       - Points to a derived class object
       - And calls a VIRTUAL function

   ✔ virtual keyword tells the compiler:
       "Select the function during RUN TIME, not COMPILE time".

   ✔ Without virtual:
       Base class pointer always calls BASE class function.

   ✔ With virtual:
       Base class pointer calls DERIVED class function.
*/

#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    // VIRTUAL FUNCTION
    // ✔ Not pure virtual
    // ✔ Provides a default definition
    // ✔ Allows runtime polymorphism when accessed via base pointer
    virtual void display()
    {
        cout << "Base class display function (default)" << endl;
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    // Overrides virtual function
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings (out of 5): " << rating << endl;
        cout << "Length of the video is: " << videoLength << " minutes\n\n";
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }

    // Overrides virtual function
    void display()
    {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Ratings (out of 5): " << rating << endl;
        cout << "No. of words: " << words << " words\n\n";
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // Create video object
    title = "Django-Tutorial-Video";
    vlen = 10.57;
    rating = 4.7;
    CWHVideo djVideo(title, rating, vlen);

    // Create text object
    title = "Django-Tutorial-Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    // Normal direct calls
    djVideo.display();
    djText.display();

    /* Runtime Polymorphism using virtual function
       ✔ Base class pointer points to derived objects
       ✔ virtual ensures correct derived display() is called
       ✔ Function call decided at RUN TIME
    */
    CWH *tuts[2];
    tuts[0] = &djVideo;  // base ptr → video object
    tuts[1] = &djText;   // base ptr → text object

    // Runtime polymorphism (dynamic dispatch)
    tuts[0]->display();  // calls CWHVideo::display
    tuts[1]->display();  // calls CWHText::display

    return 0;
}

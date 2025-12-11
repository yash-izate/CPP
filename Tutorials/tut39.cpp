/* Abstraction - achieved using pure virtual 

   ✔ Abstraction means showing only essential features 
     and hiding unnecessary internal details.
     Example: You only call display(), you don't care HOW 
     video/text display internally works.

   ✔ In C++, abstraction is implemented using:
       - Abstract classes
       - Pure virtual functions

   ✔ A pure virtual function is written as:
          virtual void display() = 0;

     It means:
       - This function has NO body in base class
       - Every derived class MUST define it
       - Base class becomes "abstract" (cannot be instantiated)

   ✔ Purpose of pure virtual function:
       - Force all derived classes to provide their own version of display()
       - Achieve abstraction + runtime polymorphism
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

    // PURE VIRTUAL FUNCTION
    // ✔ Has no body here
    // ✔ Must be overridden in child classes
    // ✔ Makes CWH an abstract class
    virtual void display() = 0;
};

class CWHVideo : public CWH
{
    float videoLength;  // float for accuracy

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    // Overriding pure virtual function → required
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

    // Overriding pure virtual function
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

    // Creating Video object
    title = "Django-Tutorial-Video";
    vlen = 10.57;
    rating = 4.7;
    CWHVideo djVideo(title, rating, vlen);

    // Creating Text object
    title = "Django-Tutorial-Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    // Normal calls
    djVideo.display();
    djText.display();

    /* Runtime Polymorphism:
       ✔ Base class pointer can point to derived objects
       ✔ Calls are resolved at RUN TIME due to 'virtual'
       ✔ Achieves true polymorphism
    */
    CWH *tuts[2];
    tuts[0] = &djVideo; // points to video object
    tuts[1] = &djText;  // points to text object

    // Dynamic / Runtime dispatch
    tuts[0]->display();  // Calls CWHVideo::display
    tuts[1]->display();  // Calls CWHText::display

    return 0;
}

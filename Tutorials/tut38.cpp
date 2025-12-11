/* Program for polymorphism example
 */

#include <iostream>
#include <cstring>
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

    virtual void display() {}
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings (out of 5): " << rating << endl;
        cout << "Length of the video is: " << videoLength << " minutes" << endl;
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
    void display()
    {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Ratings (out of 5): " << rating << endl;
        cout << "No. of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django-Tutorial-Video";
    vlen = 10.57;
    rating = 4.7;

    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    // for code with harry text
    title = "Django-Tutorial-Text";
    words = 433;
    rating = 4.19;

    CWHText djText(title, rating, words);
    djText.display();

    // now pointer points to derived class
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
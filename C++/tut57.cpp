#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string tittle;
    float rating;

public:
    CWH(string s, float r)
    {

        tittle = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {

        cout << "This is an amazing video with tittle " << tittle << endl;
        cout << " ratings : "
             << "Out of 5 stars "  <<rating << endl;
        cout << " Lengths of this video is : "
         << videolength << "minutes" << endl;
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
        cout << "This is an amazing text tutoroial with tittle " << tittle << endl;
        cout << " ratings of this text tutorial : "
             << "Out of 5 stars " <<rating << endl;
        cout << " Number of words in this tutorial  is : "
         << words << "words" << endl;
    }
};

int main()
{string tittle;
float rating ,  vlen;
int words;

//for code with harry video
tittle = "Django tutorial" ;
vlen = 4.56;
rating = 4.89;
CWHVideo djVideo(tittle , rating, vlen);
//djVideo.display();

//for code with harry textual 
tittle = "Django tutorial text" ;
words = 456;
rating = 4.19;
CWHText djText(tittle , rating, words);
//djText.display();

CWH* tuts[2];
tuts[0] = &djVideo ;
tuts[1] = &djText; 
tuts[0]->display();
tuts[1]->display();


    return 0;
}

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
     void display() {}
};
class CWHVideo : public CWH
{
    float video_length;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "THis is an amazing video with title " << title << endl;
        cout << "Ratings : " << rating << endl;
        cout << "Length of Video is " << video_length << endl;
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
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial is " << rating << endl;
        cout << "Number of text tutorial is " << words << endl;
    }
};

int main()
{
    string title;
    float rating,vlen;
    int words;

    // for code with harry video
    title="Django Tutorial ";
    vlen=4.56;
    rating =4.89;
     CWHVideo djvideo(title ,rating,vlen);
    // djvideo.display();
    // //for code with harry text
    // title="Django Tutorial Text ";
    // words=433;
    // rating =4.19;
    CWHText djtext(title ,rating,words);
    // djtext.display();

    CWH *tuts[2];
    CWHVideo *tutts;
    tutts =&djvideo;
    tutts->display();
    // tuts[0]=&djvideo;
    // tuts[1]=&djtext;
    // tuts[0]->display();
    // tuts[1]->display();


}

/* Rules For Virtual Function:
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of reddefining it in the derived class.  */
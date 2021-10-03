#include<iostream>
#include<string>

using namespace std;

class My_youtubeChannel
{
    protected:
    string title;
    float ratings;
    public:
    My_youtubeChannel(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display() = 0;
};

class Youtube_video : public My_youtubeChannel 
{
    private:
    float videolength;
    public:
    Youtube_video(string s, float r, float vl) : My_youtubeChannel(s,r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "Video title: " << title << endl;
        cout << "video rating: " << ratings << endl;
        cout << "video lenght: " << videolength << endl; 
        cout << endl;
    }
};

class Words_in_Website : public My_youtubeChannel
{
    protected:
    int words;
    public:
    Words_in_Website(string s, float r, int wl) : My_youtubeChannel(s,r)
    {
        words = wl;
    }
    void display()
    {
        cout << "Video title: " << title << endl;
        cout << "video rating: " << ratings << endl;
        cout << "Words in Website: " << words << endl;
    }
};

int main()
{
    string s;
    float vl, ra;
    int wor;

    // for youtube video;

    s = "MY new vlog title is bla bla";
    vl = 5.34;
    ra = 4.90;
    Youtube_video q(s,ra,vl);


    // for website;
    s = "MY new website title is bla bla";
    ra = 4.80;
    wor = 50000;
    Words_in_Website c(s,ra,wor);
    
    // main display;
    My_youtubeChannel *v[2];
    v[0] = &q;
    v[1] = &c;
    v[0]->display();
    v[1]->display();

    return 0;
}

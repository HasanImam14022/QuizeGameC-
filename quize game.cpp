#include<bits/stdc++.h>
#include<cstring>
using namespace std;
float static marks=0;

class quizegame
{
    string qs;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    int correctans;
    int n;
public:
    void setquestion();
    void play();
} ob[100];

void quizegame::setquestion()
{
    int p;
    cout<<"Number of question you want to set: ";
    cin>>n;
    getchar();
    for(p=0; p<n; p++)
    {
        cout<<"......................................................"<<endl<<endl;
        cout<<"QS NO "<<p+1<<":";
        getline(cin,ob[p].qs);
        cout<<endl<<endl<<"ENTER THE 4 ANSWER OF THE QUESTION SEFERATE BY NEWLINE :"<<endl<<endl;
        cout<<"1.";
        getline(cin,ob[p].ans1);
        cout<<"2.";
        getline(cin,ob[p].ans2);
        cout<<"3.";
        getline(cin,ob[p].ans3);
        cout<<"4.";
        getline(cin,ob[p].ans4);
        cout<<endl<<endl<<"Correct ans of qs "<<p+1<<":"<<endl;
        cin>>ob[p].correctans;
        getchar();
    }
}

void quizegame::play()
{
    int ans;
    int i=0;
    for(i=0; i<n; i++)
    {
        cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
        cout<<"QS NO "<<i+1<<" :"<<ob[i].qs<<endl<<endl;
        cout<<"1."<<ob[i].ans1<<"                     "<<"2."<<ob[i].ans2<<endl<<endl;
        cout<<"3."<<ob[i].ans3<<"                     "<<"4."<<ob[i].ans4<<endl<<endl;
        cout<<"Enter your answer: "<<endl;
        cin>>ans;

        if(ob[i].correctans==ans)
        {
            cout<<"your answer is correct..."<<endl;
            marks = marks + 1;
        }
        else
        {
            cout<<"your answer is  wrong..."<<endl;
            marks = marks - .25;
        }
        cout<<"Score :"<<marks<<endl;
    }
}

int main()
{
    int choice,i=0,j=0;
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
    cout<<"*                                              *"<<endl;
    cout<<"*          WELCOME  TO  QUIZEGAME              *"<<endl;
    cout<<"*                                              *"<<endl;
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
    while(1)
    {
        cout<<"       1.Set question."<<endl;
        cout<<"       2.Play game."<<endl;
        cout<<"       3.Exit."<<endl<<endl;
        cout<<"Enter your choice-> ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            ob[i++].setquestion();
            break;
        case 2:
            ob[j++].play();
            break;
        case 3:
            exit(0);

        }
    }
}

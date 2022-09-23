#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define spc ' '
#define all(x) x.begin(), x.end()
#define allR(x) x.rbegin(), x.rend()
#define vi(x) vector<x>
#define pii(x, y) pair<x, y>
#define F first
#define S second
#define ll long long
#define pb(x) push_back(x)

int n;
string Zero;
string One;
string Two;
string Three;
string Four;
string Five;
string Six;
string Seven;
string Eight;
string Nine;

void horizontalLine(string &dig)
{
    dig += spc;

    for (int i = 0; i < n; i++)
    {
        dig += "-";
    }

    dig += spc;
}

void leftLine(string &dig)
{
    for (int i = 0; i < n; i++)
    {
        dig += "|";
        for (int i = 0; i < n + 1; i++)
        {
            dig += spc;
        }

        dig += endl;
        
    }
}

void rightLine(string &dig)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n + 1; i++)
        {
            dig += spc;
        }

        dig += "|\n";
    }
}

void paralelLine(string &dig)
{
    for (int i = 0; i < n; i++)
    {
        dig += "|";
        for (int i = 0; i < n; i++)
        {
            dig += spc;
        }
        dig += "|\n";
    }
}

void space(string &dig)
{
    for (int i = 0; i < n + 2; i++)
    {
        dig += spc;
    }
    
}

void zero()
{
    horizontalLine(Zero);
    Zero += endl;
    paralelLine(Zero);
    space(Zero);
    Zero += endl;
    paralelLine(Zero);
    horizontalLine(Zero);
}

void one()
{
    One += spc;
    One += endl;

    for (int i = 0; i < n; i++)
        One += "|\n";

    One += spc;
    One += endl;

    for (int i = 0; i < n; i++)
        One += "|\n";

    One += spc;
    One += endl;
}

void two()
{
    horizontalLine(Two);
    Two += endl;
    rightLine(Two);
    horizontalLine(Two);
    Two += endl;
    leftLine(Two);
    horizontalLine(Two);
}

void three()
{
    horizontalLine(Three);
    Three += endl;
    rightLine(Three);
    horizontalLine(Three);
    Three += endl;
    rightLine(Three);
    horizontalLine(Three);
}

void four()
{   
    space(Four);
    Four += endl;
    paralelLine(Four);
    horizontalLine(Four);
    Four += endl;
    rightLine(Four);
    space(Four);
}

void five()
{
    horizontalLine(Five);
    Five += endl;
    leftLine(Five);
    horizontalLine(Five);
    Five += endl;
    rightLine(Five);
    horizontalLine(Five);
}

void six()
{
    horizontalLine(Six);
    Six += endl;
    leftLine(Six);
    horizontalLine(Six);
    Six += endl;
    paralelLine(Six);
    horizontalLine(Six);
}

void seven()
{
    horizontalLine(Seven);
    Seven += endl;
    rightLine(Seven);
    space(Seven);
    Seven += endl;
    rightLine(Seven);
    space(Seven);
}

void eight()
{
    horizontalLine(Eight);
    Eight += endl;
    paralelLine(Eight);
    horizontalLine(Eight);
    Eight += endl;
    paralelLine(Eight);
    horizontalLine(Eight);
}

void nine()
{
    horizontalLine(Nine);
    Nine += endl;
    paralelLine(Nine);
    horizontalLine(Nine);
    Nine += endl;
    rightLine(Nine);
    horizontalLine(Nine);

}

string operator*(const string a, const string b)
{
    const string SPACE = "  ";
    stringstream ssa(a), ssb(b);
    string result, parta, partb;
    while (getline(ssa, parta) && getline(ssb, partb))
        result += parta + SPACE + partb + endl;
    return result;
}

void render()
{
    Zero = "";
    zero();
    One = "";
    one();
    Two = "";
    two();
    Three = "";
    three();
    Four = "";
    four();
    Five = "";
    five();
    Six = "";
    six();
    Seven = "";
    seven();
    Eight = "";
    eight();
    Nine = "";
    nine();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string number;
    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        render();

        cin >> number;
        string Number[256];
        for (int i = 0; i < number.size(); i++)
        {
            if (number[i] == '0')
                Number[i] = Zero;
            else if (number[i] == '1')
                Number[i] = One;
            else if (number[i] == '2')
                Number[i] = Two;
            else if (number[i] == '3')
                Number[i] = Three;
            else if (number[i] == '4')
                Number[i] = Four;
            else if (number[i] == '5')
                Number[i] = Five;
            else if (number[i] == '6')
                Number[i] = Six;
            else if (number[i] == '7')
                Number[i] = Seven;
            else if (number[i] == '8')
                Number[i] = Eight;
            else if (number[i] == '9')
                Number[i] = Nine;
        }

        string printNumber = Number[0];
        for (int i = 1; i < number.size(); i++)
            printNumber = printNumber * Number[i];

        cout << printNumber;
    }
}

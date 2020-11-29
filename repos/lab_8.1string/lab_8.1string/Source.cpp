#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string s, const string cs)
{
    size_t pos = 1;
    int k = 0;
    while ((pos = s.find_first_of(cs, pos)) != -1)
    {
        k++;
        pos++;
    }
    return k;
}

string Change(string& s)
{
    size_t pos = 1;
    while ((s.find("aa") != -1 || s.find("bb") != -1 || s.find("cc") != -1))
    {
        if (s.find("aa") != -1)
        {
            s = s.replace(s.find("aa"), 2,  "***");
        }
        if (s.find("bb") != -1)
        {
            s = s.replace(s.find("bb"), 2, "***");
        }
        if (s.find("cc") != -1)
        {
            s = s.replace(s.find("cc"), 2, "***");
        }
    }

    return s;
}

int main()
{

    string str;
    cout << "Enter string: ";
    getline(cin, str);; cout << endl;
    char cs[] = "aabbcc";
    if (Count(str, cs))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}

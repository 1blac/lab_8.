#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* zamina(char* str)
{
    if (strlen(str) < 3)
        return str;
    char* tmp = new char[strlen(str) * 3 / 2 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    int i = 0;
    while (str[i] != -1)
    {
        if ((str[i] == 'a' && str[i + 1] == 'a')
            ||
            (str[i] == 'b' && str[i + 1] == 'b')
            ||
            (str[i] == 'c' && str[i + 1] == 'c'))
        {

            strcat(t, "***");
            t += 3;
            i += 2;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}

int Count(char* s, const char* A, const char* B, const char* C)
{
    {
       
        int k = 0;
        int pos = 0;
        char* t;
        while (t = strstr(s + pos, A))
        {
            pos = t - s + 1;
            k++;
        }
        while (t = strstr(s + pos, B))
        {
            pos = t - s + 1;
            k++;
        }
        while (t = strstr(s + pos, C))
        {
            pos = t - s + 1;
            k++;
        }
        return k;
    }
}
int main()
{
    char str[201];

    cout << "Enter string: ";
    cin.getline(str, 200); cout << endl;
    char A[] = "aa";
    char B[] = "bb";
    char C[] = "cc";
    if (Count(str, A, B, C))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cout << "Modified string (param) : " << str << endl;
    char* dest = new char[151];
    dest = zamina(str);
    cout << "Modified string (result): " << dest << endl;
    return 0;
}

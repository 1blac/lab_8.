#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(const char* str)
{
    int k = 0;
    for (int i = 0; i < strlen(str); i++)
        if ((str[i] == 'a' && str[i + 1] == 'a')
            ||
            (str[i] == 'b' && str[i + 1] == 'b')
            ||
            (str[i] == 'c' && str[i + 1] == 'c'))
            k++;
    return k;
}

char* zamina(char* str)
{
    if (strlen(str) < 3)
        return str;
    char* tmp = new char[strlen(str) * 3 / 2 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    int i = 0;
    while (str[i] != 0)
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
void print(const char* x)
{
    int i = 0;
    while (x[i] != '\0')
        cout << x[i++];
}
int main()
{
    char str[201];
    char cs[] = "aabbcc";
    cout << " vvedit: ";
    cin.getline(str, 200); cout << endl;
    if (Count(str))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    print(zamina(str));


    return 0;
}
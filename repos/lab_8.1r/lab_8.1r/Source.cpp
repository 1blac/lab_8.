#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* s, const char* cs);
char* zamina(char* dest, const char* str, char* t, int i);
int main()
{
	char str[201];
	char cs[] = "aabbcc";
	cout << " vvedit: ";
	cin.getline(str, 200); cout << endl;
	if (Count(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = zamina(dest1, str, dest1, 0);
	cout << "Modified string (result): " << dest2 << endl;

	return 0;
}
int Count(char* s, const char* cs)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strpbrk(s + pos + 1, cs))
	{
		pos = t - s + 1;
		k++;
	}
	return k;
}
char* zamina(char* dest, const char* str, char* t, int i)
{
    if (str[i] != 0)
    {
        if ((str[i] == 'a' && str[i + 1] == 'a')
            ||
            (str[i] == 'b' && str[i + 1] == 'b')
            ||
            (str[i] == 'c' && str[i + 1] == 'c'))
        {
            strcat(t, "***");
            return zamina(dest, str, t + 3, i + 2);
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
            return zamina(dest, str, t, i);
        }
    }
    else
    {
        *t++ = str[i++];
        *t++ = str[i++];
        *t = '\0';
        return dest;
    }
}
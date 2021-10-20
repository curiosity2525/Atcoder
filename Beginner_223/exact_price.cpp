#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    //文字列の長さを取得
    int len = S.length();

    string small_s = S;
    string big_s = S;

    if (len >= 1 && len <= 1000)
    {
        string temp_s = S;
        for (int j = 0; j < len; j++)
        {
            string temp_s2 = "";
            for (int i = 1; i < len; i++)
            {
                temp_s2 += temp_s[i];
            }
            temp_s2 += temp_s[0];
            temp_s = temp_s2;

            if (small_s >= temp_s)
            {
                small_s = temp_s;
            }
            if (big_s <= temp_s)
            {
                big_s = temp_s;
            }
        }
    }

    cout << small_s << endl;
    cout << big_s << endl;

    return 0;
}

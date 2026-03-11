#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

unordered_map<char, int> romanValues = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

int romanToInt(string s)
{
    int total = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int valorAtual = romanValues[s[i]];

        if (i + 1 < s.length())
        {
            int valorProximo = romanValues[s[i + 1]];

            if (valorAtual < valorProximo)
            {
                total -= valorAtual;
            }
            else
            {
                total += valorAtual;
            }
        }
        else
        {
            total += valorAtual;
        }

    }

    return total;
}

void RunRomanToInteger()
{
	string input = "MCMXCIV";

	cout << romanToInt(input) << endl;
}
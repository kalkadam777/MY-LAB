#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    string text;

    getline(cin, text);

    vector<string> words;

    vector<int> wordCount = {1};

    int it = 0;

    while(it < text.length())
    {
        bool wordDifference = true;

        string aWord = "";
        
        if(text[it] == ' ')
            it++;

        while(text[it] != ' ' && it != text.length()) // if !(it != text.length()) => to the last word add random letters
        {
            for(int i = 97; i <= 122; i++)
              if(text[it] == (char)i)
               {
                   aWord += (char(i));
                   break;
               }

            for(int i = 65; i <= 90; i++)
                if(text[it] == (char)i)
                {
                    aWord += (char(i));
                    break;
                }

            it++;
        }
        
        for(int i = 1; i < words.size(); i++)
            if(words[i].compare(aWord) == 0)
            {
                wordCount[i] += 1;
                wordDifference = false;
                break;
            }
        
        if(wordDifference)
        {
            wordCount.push_back(1);
            words.push_back(aWord);
        }

    }

    for(int i = 0; i < words.size(); i++)
        cout << words[i] << " : " << wordCount[i] << endl;

    system("pause");

    return 0;
}
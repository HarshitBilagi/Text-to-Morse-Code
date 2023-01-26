#include<iostream>
using namespace std;

class code
{
    public: 
        string each_char(char letter)
        {
            switch (letter)
            {
                case '1':
                    return ".----";
                case '2':
                    return "..---";
                case '3':
                    return "...--";
                case '4':
                    return "....-";
                case '5':
                    return ".....";
                case '6':
                    return "-....";
                case '7':
                    return "--...";
                case '8':
                    return "---..";
                case '9':
                    return "----.";
                case '0':
                    return "-----";
                case 'a':
                    return ".-";
                case 'b':
                    return "-...";
                case 'c':
                    return "-.-.";
                case 'd':
                    return "-..";
                case 'e':
                    return ".";
                case 'f':
                    return "..-.";
                case 'g':
                    return "--.";
                case 'h':
                    return "....";
                case 'i':
                    return "..";
                case 'j':
                    return ".---";
                case 'k':
                    return "-.-";
                case 'l':
                    return ".-..";
                case 'm':
                    return "--";
                case 'n':
                    return "-.";
                case 'o':
                    return "---";
                case 'p':
                    return ".--.";
                case 'q':
                    return "--.-";
                case 'r':
                    return ".-.";
                case 's':
                    return "...";
                case 't':
                    return "-";
                case 'u':
                    return "..-";
                case 'v':
                    return "...-";
                case 'w':
                    return ".--";
                case 'x':
                    return "-..-";
                case 'y':
                    return "-.--";
                case 'z':
                    return "--..";
                default:
                {
                    cout << "\nInvalid character found!: " << letter <<". Please enter characters A-Z and 0-9."<<endl;
                    exit(0);
                }
            }
        }
        void pass(string text)
        {
            for(int i=0; text[i]; i++)
            {
                cout<<each_char(text[i]);
            }
        }
};

int main()
{
    string text;
    cout<<"\nEnter the text(A-Z, 0-9) to be converted to morse code without space:"<<endl;
    cin>>text;
    code c;
    c.pass(text);
}
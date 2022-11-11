#include <iostream>
using namespace std;

//Doctor Nada this took me 6 hours my eyes are red and i'm hungry but it was worth it for the bonus I hope you're happy XD

//Declaring the stack array
const int aSize = 10;
string stack[aSize];
int top = -1;

void palindrome(string s){

    int length = s.length();
    bool isPalindrome;

    //Pushing
    while(top != length-1)
    {
        top++;
        stack[top] = s[top];
    }


    for (int i = 0; i <= top; i++)
    {
        // Checking first-hand if the first character matches the last, if not then break
        if(stack[top] != stack[i]){
            cout << s << " isn't palindrome";
            break;
        }

        //Popping
        while(stack[top] == stack[i]){
            top--;
            isPalindrome = true;
        }
    }

    //If palindrome is true then print out that it is
    if(isPalindrome == true)
    {
        cout << s << "is pailndrome";
    }  
}

int main()
{
    string text;
    cout << "Type the string: ";
    cin >> text;

    palindrome(text);

    return 0;
}
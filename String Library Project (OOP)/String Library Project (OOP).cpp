
#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString String1;


    clsString String2("Mohammed");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << String1.CountWords() << endl;

    cout << String1.CountWords("Ahmed Ali Sharaawy") << endl;

    cout << clsString::CountWords("Ahmed Ali Sharaawy") << endl;

    cout << "\n\n";

    //---------------------------------------------------

    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //-----------------------------------------------------

    String3.LowerFirstLetterOfEachWord(); 
    cout << String3.Value << endl;

    //-----------------------------------------------------

    String3.UpperAllLetterOfEachWord();
    cout << String3.Value << endl;

    //-----------------------------------------------------

    String3.LowerAllLetterOfEachWord();
    cout << String3.Value << endl;

    //-----------------------------------------------------

    cout << "\n\n";

    cout << "After inverting a : " << clsString::InvertLatterCase('a') << endl;

    //------------------------------------------------------

    String3.Value = "AbCdEfg";

    String3.InvertAllStringLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllStringLettersCase();
    cout << String3.Value << endl;

    //-------------------------------------------------------

    cout << "Capital Letters count : " << clsString::CountCapitalLetters("Ahmed Sharaawy") << endl << endl;

    //-------------------------------------------------------

    String3.Value = "Welcome to Egypt";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //--------------------------------------------------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //--------------------------------------------------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //--------------------------------------------------------

    cout << "letter E count :" << String3.CountSpecificLetter('E') << endl;

    //---------------------------------------------------------
    
    cout << "is letter u vowel? " << clsString::IsVowel('a') << endl;

    //---------------------------------------------------------

    cout << String3.CountWords()<< endl;

    //---------------------------------------------------------

    vector<string> vString;

    vString = String3.split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------------------------------------------------

    // Tirms
    String3.Value = "    Ahmed Sharaawy    ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Ahmed Sharaawy     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------------------------------------------------

    String3.Value = "   Ahmed Sharaawy     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------------------------------------------------

    String3.Value = "    Ahmed Sharaawy     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //-----------------------------------------------------------

    // Joins
    vector<string> vString1 = { "Mohammed","Faid","Ali","Ahmed" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Faid","Ali","Ahmed" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //-------------------------------------------------------------

    String3.Value = "Ahmed Ali Sharaawy";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value << endl;

    //------------------------------------------------------------

    String3.Value = "Ahmed Sharaawy";
    cout << "\nReplace : " << String3.ReplaceWordInString("Ahmed", "Ali") << endl;

    //------------------------------------------------------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuatinsFromString();
    cout << "\nRemove Punctuations : " << String3.Value<< endl;
}


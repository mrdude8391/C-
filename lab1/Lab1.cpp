/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Lab1.h"
//implement the function enterDNAString
string enterDNAString(){
    string s;
    cin >> s;
    return s;
}
//implement the function checkValidity
bool checkValidity(string s){
    int n = s.length();
    s.c_str();
    for (int i = 0; i < n; i++){
        if (s[i]!= 'A'){
            if (s[i]!= 'C'){
                if (s[i]!= 'T'){
                    if (s[i]!= 'G'){
                        if (s[i]!= 'a'){
                            if (s[i]!= 'c'){
                                if (s[i]!= 't'){
                                    if (s[i]!= 'g'){
                                        return false;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } 
        
    }
    return true;
}    
//implement the function compliment
void compliment(string s){
    int n = s.length();
    s.c_str();
    if (checkValidity(s) == true){
        char comp[n];
        comp[n] = '\0';
    for (int i = 0; i < n ; i++ ){
        if (s[i] == 'A'){
            comp[i] = 'T';
        }
        else if (s[i] == 'T'){
            comp[i] = 'A';
        }
        else if (s[i] == 'G'){
            comp[i] = 'C';
        }
        else if (s[i] == 'C'){
            comp[i] = 'G';
        }
        else if (s[i] == 'a'){
            comp[i] = 't';
        }
        else if (s[i] == 't'){
            comp[i] = 'a';
        }
        else if (s[i] == 'g'){
            comp[i] = 'c';
        }
        else if (s[i] == 'c'){
            comp[i] = 'g';
        }
        
    } 
        cout << " : compliment ("<< s << ") = " << comp << endl;
      
    }
    else{
    cout << "INVALID DNA UNABLE TO CREATE COMPLIMENT" << endl;
    }
}


int main() {
while(true) {
cout << "Please choose an option:" << endl;
cout << "1. Enter DNA string, echo it" << endl;
cout << "2. Enter DNA string, echo it, validate it" << endl;
cout << "3. Enter DNA string, echo it, validate it, compliment it if valid" << endl;
cout << "4. Exit" << endl;
int option;
cout << ">> ";
cin >> option;
//Following "if" statement is to avoid problem with cin
//if a non-numeric character is read by cin when
//it is actually supposed to read an integer.
if ( !cin ) {
cin.clear();
cin.ignore( INT_MAX, '\n' );
cout << "Non-numeric option! Try again." << endl;
continue;
}

if (1 == option) {
string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
cout << endl;
}
else if (2 == option) {
string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
bool b = checkValidity(str1);
if(b == true)
cout << " : VALID DNA";
else
cout << " : INVALID DNA";
cout << endl;
}
else if (3 == option) {
string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
bool b = checkValidity(str1);
if(b == true)
cout << " : VALID DNA";
else
cout << " : INVALID DNA";
compliment(str1);
cout << endl;
}
else if (4 == option) {
return 0;
}
else {
cout << "Integer option, but incorrect! Try again." << endl;
}
}
return 0;
} //end of main

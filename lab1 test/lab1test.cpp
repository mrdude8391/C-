/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <climits> //for INT_MAX
using namespace std;

string enterDNAString(){
    string s;
    cin >> s;
    return s;
}

bool checkValidity(string s){
    bool bb;
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

int main(){

/*
string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
cout << endl;
*/

/*
string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
bool b = checkValidity(str1);
if(b == true)
cout << " : VALID DNA";
else
cout << " : INVALID DNA";
cout << endl;
*/

string str1 = enterDNAString();
cout << str1 << " (" << str1.size() << " chars)";
bool b = checkValidity(str1);
if(b == true)
cout << " : VALID DNA";
else
cout << " : INVALID DNA";
compliment(str1);
cout << endl;

    
return 0;    
}
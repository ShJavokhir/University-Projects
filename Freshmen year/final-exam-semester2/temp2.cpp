#include<iostream>
using namespace std;

//hisoblash funksiyasi (rekursiv ishlaydi)
double hisoblash(string ifoda)
{
    //ochiq joylarni (space) larni yo'qotish qismi
    string tozaIfoda; 
    for (int i = 0; i < ifoda.length(); i++)
    {
        if (ifoda[i] != ' ')
        {
            tozaIfoda += ifoda[i];
        }
    }
    //qavslar ichi ishlanadigan qismi
    string tok = ""; 
    for (int i = 0; i < tozaIfoda.length(); i++)
    {
        if (tozaIfoda[i] == '(')
        {
            int iter = 1;
            string token;
            i++;
            while (true)
            {
                if (tozaIfoda[i] == '(')
                {
                    iter++;
                } else if (tozaIfoda[i] == ')')
                {
                    iter--;
                    if (iter == 0)
                    {
                        i++;
                        break;
                    }
                }
                token += tozaIfoda[i];
                i++;
            }
            //cout << "(" << token << ")" << " == " << to_string(hisoblash(token)) <<  endl;
            tok += to_string(hisoblash(token));
        }
        tok += tozaIfoda[i];
    }

    for (int i = 0; i < tok.length(); i++)
    {
        if (tok[i] == '+')
        {
            return hisoblash(tok.substr(0, i)) + hisoblash(tok.substr(i+1, tok.length()-i-1));
        } else if (tok[i] == '-')
        {
            return hisoblash(tok.substr(0, i)) - hisoblash(tok.substr(i+1, tok.length()-i-1));
        }
    }

    for (int i = 0; i < tok.length(); i++)
    {
        if (tok[i] == '*')
        {
            //cout << tok.substr(0, i) + " * " +  tok.substr(i+1, tok.length()-i-1) << " == " << hisoblash(tok.substr(0, i)) * hisoblash(tok.substr(i+1, tok.length()-i-1)) << endl;
            return hisoblash(tok.substr(0, i)) * hisoblash(tok.substr(i+1, tok.length()-i-1));
        } else if (tok[i] == '/')
        {
            return hisoblash(tok.substr(0, i)) / hisoblash(tok.substr(i+1, tok.length()-i-1));
        }
    }

    //qiymatni qaytarish (stringni double qilib)
    return stod(tok.c_str());
}

int main(){
    cout<<"Ifodani kiriting: ";

    string ifoda;
    //ifodani kiritish qismi
    cin>>ifoda;
    //ifodani hisoblash funksiyasiga yuborish
    cout<<"Natija: " << hisoblash(ifoda);
}
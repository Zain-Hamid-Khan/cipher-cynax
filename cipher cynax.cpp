#include<iostream>
#include<string>
using namespace std;
int main() {
    char cond;
    string n, p;
    cout << "      ------------------------------" << endl;
    cout << "      -----CYNAX CIPHER MACHINE-----" << endl;
    cout << "      ------------------------------" << endl;
    cout << " ____                                ____" << endl;
    cout << "|                                        |" << endl;
    cout << "| Developers (Zain, Sharique and Asad)   |" << endl;
    cout << "|____                                ____|" << endl;
    cout << "This Program is For Personal Use...! No One Can Access Other then Developers." << endl;
   
    cout << "Enter Your Login Details :: " << endl;
    cout << "Enter Your Name in Block letters. = "; cin >> n;
    cout << "Enter Your Password  = "; cin >> p;
    do {

        if (((n == "ZAIN") || (n == "SHARIQUE") || (n == "ASAD")))
        {
            if (((p == "khan") || (p == "sharkz") || (p == "nadeem")))
            {
                cout << "        ****************" << endl;
                cout << "        *Access Granted*" << endl;
                cout << "        ****************" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "::Welcome To Cynax Cipher Machine::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "\n\n\nUse(_)Underscores Instead of Blank Spaces" << endl;

                cout << "Enter the message:" << endl;
                char msg[100];
                char ch;
                string pk;
                cin >> msg;

                int i = 0, j , choice, key;

                cout << "Enter key: ";
                cin >> pk;//take the key as input
                if (pk == "bhai")
                {
                    cout << "Zain and Shariq Cipher Conversation Activated...!\n";
                    key = 5;
                }
                if (pk == "gamer")
                {
                    cout << "Asad and Zain  Cipher Conversation Activated...!\n";
                    key = 3;
                }
                if (pk == "capstan")
                {
                    cout << "Shariq and Asad Cipher Conversation Activated...!\n";
                    key = 7;
                }
                cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
                cin >> choice;
                if (choice == 1) //for encryption
                {

                    for (int i = 0; msg[i] != '\0'; ++i) {
                        ch = msg[i];
                        //encrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch + key;
                            if (ch > 'z') {
                                ch = ch - 'z' + 'a' - 1;
                            }
                            msg[i] = ch;
                        }
                        //encrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch + key;
                            if (ch > 'Z') {
                                ch = ch - 'Z' + 'A' - 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "The Encrypted Message is = \n"<< msg;
                }
                if (choice == 2) {//for decryption
                    char ch;
                    for (int i = 0; msg[i] != '\0'; ++i)
					 {
                        ch = msg[i];
                        //decrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch - key;
                            if (ch < 'a') {
                                ch = ch + 'z' - 'a' + 1;
                            }
                            msg[i] = ch;
                        }


                        //decrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch - key;
                            if (ch < 'A') {
                                ch = ch + 'Z' - 'A' + 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "Decrypted message is = \n " << msg;

                }
            }
            else
                cout << "Ooops We Think You Forget Your Password...!";
        }
        else
            cout << "How Can You Forget Your Name Man? (-_-)";
        cout << "\n Want To Repeat The Cipher? (Y/N)" << endl;
        cin >> cond;
    }
    while (cond == 'Y' || cond == 'y') ;
     return 0; }	


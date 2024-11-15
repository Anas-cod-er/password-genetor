#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string getPassword(int len)
{
    string Password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890~`!@#$%^&*,.?";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0;i<len;i++)
    {
        randomIndex = rand() % charSize;
        Password = Password + characters[randomIndex];
    }
    return Password;
}
int main()
{
    int len;
    cout<<"Enter the length of the PAssword : ";
    cin>> len;
    string password =getPassword(len);
    cout<<"Generated Password : " <<password;
    return 0;
}

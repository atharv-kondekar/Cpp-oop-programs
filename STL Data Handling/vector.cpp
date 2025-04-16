#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string, string> phoneBook;
    
    int n;
    cout << "\nEnter how many keys you want to store in the map? : ";
    cin >> n;
    
    // To consume any leftover newline character
    cin.ignore();
    
    string keys;
    string data;
    
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter the name: ";
        getline(cin, keys);
        cout << "\nEnter the phone number of " << keys << ": ";
        cin >> data;
        
        // To consume any leftover newline character
        cin.ignore();
        
        if(data.size() != 10)
        {
            cout << "\nYou missed some numbers in the phone number.";
            continue; // Skip to the next iteration if the phone number is invalid
        }
        
        phoneBook[keys] = data; // Store the name and phone number in the map
    }
    
    // Display the phone book
    cout << "\nPhone book entries:\n";
    for(const auto& entry : phoneBook)
    {
        cout << "Name: " << entry.first << ", Phone Number: " << entry.second << endl;
    }
    
    return 0;
}


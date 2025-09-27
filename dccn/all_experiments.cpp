// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string data;
//     cout << "Enter binary data: ";
//     cin >> data;

//     // Count number of 1s
//     int count = 0;
//     for (char c : data) {
//         if (c == '1') count++;
//     }

//     // Add even parity bit
//     if (count % 2 == 0)
//         data += "0";  // already even
//     else
//         data += "1";  // make even

//     cout << "Data with parity bit (even parity): " << data << endl;

//     // Simulate receiver checking
//     count = 0;
//     for (char c : data) {
//         if (c == '1') count++;
//     }
//     if (count % 2 == 0)
//         cout << "No Error Detected" << endl;
//     else
//         cout << "Error Detected" << endl;

//     return 0;
// }

// #CRC
#include <iostream>
using namespace std;

// Function to perform XOR between two strings
string xorOperation(string a, string b) {
    string result = "";
    for (int i = 1; i < b.length(); i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

// Function to perform Mod-2 Division
string mod2Division(string dividend, string divisor) {
    int pick = divisor.length();
    string temp = dividend.substr(0, pick);

    while (pick < dividend.length()) {
        if (temp[0] == '1')
            temp = xorOperation(divisor, temp) + dividend[pick];
        else
            temp = xorOperation(string(pick, '0'), temp) + dividend[pick];

        pick++;
    }

    // Last step of division
    if (temp[0] == '1')
        temp = xorOperation(divisor, temp);
    else
        temp = xorOperation(string(pick, '0'), temp);

    return temp;
}

int main() {
    string data, key;

    cout << "Enter data: "<<endl;
    cin >> data;

    cout << "Enter generator (key): ";
    cin >> key;

    int keyLen = key.length();
    string appendedData = data + string(keyLen - 1, '0');

    // Sender: Calculate CRC
    string remainder = mod2Division(appendedData, key);
    string codeword = data + remainder;

    cout << "Transmitted codeword: " << codeword << endl;

    // Receiver side (simulate checking)
    cout << "\nReceiver Side Checking..." << endl;
    string received;
    cout << "Enter received data: ";
    cin >> received;

    string check = mod2Division(received, key);

    if (check.find('1') != string::npos)
        cout << "Error detected in received data." << endl;
    else
        cout << "No error detected. Data is correct." << endl;

    return 0;
}

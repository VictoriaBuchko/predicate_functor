#include <iostream>
#include <algorithm>​
#include <string>
#include <vector>
using namespace std;

#define TASK_NUMBER 2

#if TASK_NUMBER == 1
bool cmp(string a, string b)
{
    return a.length() < b.length();
}

#endif

#if TASK_NUMBER == 2
class Cmp
{
public:
    bool operator()(string a, string b) {
        return a.length() < b.length();
    }
};
#endif


int main()
{
#if TASK_NUMBER == 1
    string arr[] = { "Vika","Bob","Steve","Katerina","Ann" };
    vector<string> a(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout << "Initial state: " << endl;
    for (string var : a)
    {
        cout << var << endl;
    }

    cout << endl;

    sort(a.begin(), a.end(), cmp);

    cout << "After sort: " << endl;
    for (string var : a)
    {
        cout << var << endl;
    }
    cout << endl;

#endif

#if TASK_NUMBER == 2
    string ar[] = { "Vika","Bob","Steve","Katerina","Ann" };
    vector<string> b(ar, ar + sizeof(ar) / sizeof(ar[0]));
    cout << "Initial state: " << endl;
    for (string var : b)
    {
        cout << var << endl;
    }
    cout << endl;
    sort(b.begin(), b.end(), Cmp());

    cout << "After sort: " << endl;
    for (string var : b)
    {
        cout << var << endl;
    }
    cout << endl;

#endif
    return 0;
}


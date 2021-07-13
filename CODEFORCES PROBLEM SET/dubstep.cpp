#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>
#include<regex>

using namespace std;

#define pb     push_back
#define nn     endl
#define pll    pair<int,int>
#define ll     long long int
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie


int main()
{
string s;
cin>>s;
regex p("WUB");
cout<<regex_replace(s,p," ");
}
//string removeWord(string str, string word)
//{
//    // Check if the word is present in string
//    // If found, remove it using removeAll()
//    if (str.find(word) != string::npos)
//    {
//        size_t p = -1;
//
//        // To cover the case
//        // if the word is at the
//        // beginning of the string
//        // or anywhere in the middle
//        string tempWord = word + " ";
//        while ((p = str.find(word)) != string::npos)
//            str.replace(p, tempWord.length(), "");
//
//        // To cover the edge case
//        // if the word is at the
//        // end of the string
//        tempWord = " " + word;
//        while ((p = str.find(word)) != string::npos)
//            str.replace(p, tempWord.length(), "");
//    }
//
//    // Return the resultant string
//    return str;
//}
//
//// Driver Code
//int main(int argc, char const *argv[])
//{
//    string s;
//    cin>>s;
//    string w="WAB";
//    // Test Case 1:
//    // If the word is in the middle
////    string string1 = "Geeks for Geeks.";
////    string word1 = "for";
////
////    // Test Case 2:
////    // If the word is at the beginning
////    string string2 = "for Geeks Geeks.";
////    string word2 = "for";
////
////    // Test Case 3:
////    // If the word is at the end
////    string string3 = "Geeks Geeks for.";
////    string word3 = "for";
////
////    // Test Case 4:
////    // If the word is not present
////    string string4 = "A computer Science Portal.";
////    string word4 = "Geeks";
////
//    // Test case 1
//    cout<< removeWord(s, w) << endl;
//
//    // Test case 2
////    cout << "\nString: " << string2 << "\nWord: "
////         << word2 << "\nResult String: "
////         << removeWord(string2, word2) << endl;
////
////    // Test case 3
////    cout << "\nString: " << string3 << "\nWord: "
////         << word3 << "\nResult String: "
////         << removeWord(string3, word3) << endl;
////
////    // Test case 4
////    cout << "\nString: " << string4 << "\nWord: "
////         << word4 << "\nResult String: "
////         << removeWord(string4, word4) << endl;
//    return 0;
//}
//

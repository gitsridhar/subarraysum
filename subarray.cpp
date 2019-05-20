#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    bool foundanswer = false;

    while(t--) {
        int n, s;
        cin >> n >> s;
        //cout << "N and S are " << n << " " << s << endl;

        int sum = 0;
        int startindex = 0;
        vector<int> values;
      
        for (int i=0; i < n; i++) {
           int temp;
           cin >> temp;
           values.push_back(temp);
        }

        for(int i=startindex; i < n; i++) {
           sum = sum + values[i];
           //cout << "Value : " << values[i] << endl;

           if (sum > s) {
               startindex++;
               //cout << "Resetting... " << sum << endl;
               i = startindex - 1;
               sum = 0;
           }

           if (sum == s) {
               //cout << "Found." << endl;
               //for(int j=startindex; j<=i; j++) {
               //    cout << values[j] << " ";
               //}
               cout << startindex+1 << " " << i+1 << endl;
               foundanswer = true;
               break;
           }

        } 
        if (foundanswer == false) {
            cout << -1 << endl;
        }
    }
    return 0;
}

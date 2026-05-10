#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to build suffix array
vector<string> buildSuffixArray(string genome) {
    vector<string> suffixes;
    
    for (int i = 0; i < genome.length(); i++) {
        suffixes.push_back(genome.substr(i));
    }

    sort(suffixes.begin(), suffixes.end());
    return suffixes;
}

// Binary search for pattern
vector<string> searchPattern(vector<string>& suffixes, string pattern) {
    vector<string> matches;
    int left = 0, right = suffixes.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        // Compare prefix of suffix with pattern
        if (suffixes[mid].substr(0, pattern.length()) == pattern) {
            // Found match → collect all matches
            int i = mid;

            // Check left side
            while (i >= 0 && suffixes[i].substr(0, pattern.length()) == pattern) {
                matches.push_back(suffixes[i]);
                i--;
            }

            // Check right side
            i = mid + 1;
            while (i < suffixes.size() && suffixes[i].substr(0, pattern.length()) == pattern) {
                matches.push_back(suffixes[i]);
                i++;
            }
            break;
        }
        else if (suffixes[mid] < pattern) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return matches;
}

int main() {
    string genome, pattern;

    cout << "Enter Genome Sequence: ";
    cin >> genome;

    cout << "Enter Pattern to Search: ";
    cin >> pattern;

    // Build suffix array
    vector<string> suffixes = buildSuffixArray(genome);

    // Search pattern
    vector<string> result = searchPattern(suffixes, pattern);

    // Output
    if (result.empty()) {
        cout << "Pattern not found ❌" << endl;
    } else {
        cout << "Pattern found in suffixes: ✅\n";
        for (string s : result) {
            cout << s << endl;
        }
        cout << "Frequency: " << result.size() << endl;
    }

    return 0;
}                                                               

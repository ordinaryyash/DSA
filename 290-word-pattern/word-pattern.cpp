class Solution {
public:
    bool wordPattern(string pattern, string s) {
    istringstream iss(s);
    vector<string> words;
    string word;

    // Split the string into words
    while (iss >> word) {
        words.push_back(word);
    }

    // If lengths differ, can't match
    if (words.size() != pattern.size()) return false;

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        string w = words[i];

        // Check char-to-word mapping
        if (charToWord.count(c)) {
            if (charToWord[c] != w) return false;
        } else {
            charToWord[c] = w;
        }

        // Check word-to-char mapping
        if (wordToChar.count(w)) {
            if (wordToChar[w] != c) return false;
        } else {
            wordToChar[w] = c;
        }
    }

    return true;
}
    
};
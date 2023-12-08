class Solution {
public:
    string reverseWords(string s) {

        int i = 0, length = s.size();

        string sol = "", word = "";

        while (i < length)
        {

            if (s[i] != ' ')
            {
                word += s[i];
            }
            else if (s[i] == ' ')
            {
                if (sol != "") sol = word + " " + sol;
                else sol = word;
                word = "";
            }

            i++;
        }

        if (word != "")
        {
            if (sol != "") sol = word + " " + sol;
            else sol = word;
        }

        return sol;
    }
};

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first)
     {
    vector <int> n;
        n.push_back(first);
           
            for(int i=0;i<encoded.size();i++)
            {
               n.push_back(n[i]^encoded[i]);
            }
        return n;
    }
};
class Solution {
public:
    int acc{};
    void message_handle(vector<string>& e, vector<int>& m, vector<int>& t) {
        int timestamp = stoi(e[1]);
        vector<string> v;
        string s;
        for (int i{}; i <= e[2].size(); ++i) {
            if (e[2][i] == ' ' || i == e[2].size()) {
                v.push_back(s);
                s = "";
            } else {
                s += e[2][i];
            }
        }
        for (string& s : v) {
            if (s == "ALL") {
                ++acc;
            } else if (e[2] == "HERE") {
                for (int i{}; i < m.size(); ++i) {
                    if (t[i] == 0 || t[i] + 60 <= timestamp) {
                        m[i]++;
                    }
                }
            } else {
                int id = stoi(s.substr(2));
                m[id]++;
            }
        }
    }
    void offline_handle(vector<string>& e, vector<int>& t) {
        int timestamp = stoi(e[1]);
        int id = stoi(e[2]);
        t[id] = timestamp;
    }
    vector<int> countMentions(int numberOfUsers,
                              vector<vector<string>>& events) {
        vector<int> mentions(numberOfUsers), timeline(numberOfUsers);
        sort(events.begin(), events.end(),
             [](const vector<string>& a, const vector<string>& b) {
                 int aT = stoi(a[1]), bT = stoi(b[1]);
                 return (aT == bT) ? b[0] < a[0] : aT < bT;
             });
        for (auto& event : events) {
            if (event[0] == "MESSAGE") {
                message_handle(event, mentions, timeline);
            } else {
                offline_handle(event, timeline);
            }
        }
        for (int i{}; i < mentions.size(); ++i) {
            mentions[i] += acc;
        }
        return mentions;
    }
};

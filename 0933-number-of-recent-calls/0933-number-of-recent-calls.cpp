class RecentCounter {
private:
    std::vector<int>record;
    int start;
public:
    RecentCounter(): start(0) {}
    
    
    int ping(int t) {
        record.push_back(t);
        while(record[start]<t-3000){
            start++;
        }
        return record.size()-start;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
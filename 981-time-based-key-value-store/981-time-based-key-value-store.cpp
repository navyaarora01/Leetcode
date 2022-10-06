#define pair pair<int,string>
class TimeMap {
public:
            map<pair,string> mp;

    TimeMap() {
        
        // create a map to store key , value and timstamp
        
    }
    
    void set(string key, string value, int timestamp) {
        
        mp[{timestamp,key}] = value;
        
    }
    
    string get(string key, int timestamp) {
        
        while(1)
        {
            if(timestamp == 0)break;
            if(mp.find( {timestamp,key} ) != mp.end()) return mp[{timestamp,key}];
            timestamp--;
        }
        return "";
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
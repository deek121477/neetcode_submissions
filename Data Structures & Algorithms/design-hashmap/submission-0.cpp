class MyHashMap {
public:
vector<list<pair<int,int>>> arr;
int size;
    MyHashMap() {
        size=1000;
        arr.resize(size);
    }
    
    void put(int key, int value) {
        int index=key%size;
     
     for(auto &it:arr[index])
     {
        if(it.first==key)
        {
            it.second=value;
            return;
        }
     }
   arr[index].push_back({key,value});

    }
    
    int get(int key) {
      int index=key%size;
      for(auto &it:arr[index])
      {
        if(it.first==key)
         return it.second;
       
      }
return -1;
    }
    
    void remove(int key) {
        int index=key%size;
        for(auto it=arr[index].begin();it!=arr[index].end();it++)
        {
            if(it->first==key)
            arr[index].erase(it);
            return ;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
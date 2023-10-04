#include <vector>
#include <algorithm>

class MyHashMap {
public:
    MyHashMap() {
    }

    void put(int key, int value) {
        auto it = std::find(keys.begin(), keys.end(), key);
        if (it != keys.end()) {
            // Key already exists, update the corresponding value
            int index = std::distance(keys.begin(), it);
            values[index] = value;
        } else {
            // Key doesn't exist, add a new key-value pair
            keys.push_back(key);
            values.push_back(value);
        }
    }

    int get(int key) {
        auto it = std::find(keys.begin(), keys.end(), key);
        if (it != keys.end()) {
            int index = std::distance(keys.begin(), it);
            return values[index];
        } else {
            // Key not found, you can return a default value or handle it differently
            return -1; // -1 indicates key not found
        }
    }

    void remove(int key) {
        auto it = std::find(keys.begin(), keys.end(), key);
        if (it != keys.end()) {
            int index = std::distance(keys.begin(), it);
            keys.erase(keys.begin() + index);
            values.erase(values.begin() + index);
        }
    }

private:
    std::vector<int> keys;
    std::vector<int> values;
};

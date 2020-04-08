/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    queue<int> result;
    NestedIterator(vector<NestedInteger> &nestedList) {
        add(nestedList);
    }
    
    void add(vector<NestedInteger> &nestedList){
        for(NestedInteger i : nestedList){
            if(i.isInteger())
                result.push(i.getInteger());
            else{
                add(i.getList());
            }
        }
        return;
    }
    
    int next() {
        int res = result.front();
        result.pop();
        return res;
    }
    
    bool hasNext() {
        return (!result.empty());
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
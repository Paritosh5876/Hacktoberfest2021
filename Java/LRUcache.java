/*
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.

get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

The cache is initialized with a positive capacity.

Follow up:
Could you do both operations in O(1) time complexity?

Example:

LRUCache cache = new LRUCache( 2 /* capacity */ );

//cache.put(1, 1);
//cache.put(2, 2);
//cache.get(1);       // returns 1
//cache.put(3, 3);    // evicts key 2
//cache.get(2);       // returns -1 (not found)
//cache.put(4, 4);    // evicts key 1
//cache.get(1);       // returns -1 (not found)
//cache.get(3);       // returns 3
//cache.get(4);       // returns 4
*/


//Code Implementation 1

class LRUCache {
    HashMap<Integer,Node> map= new HashMap<>();;
    int count,capacity;
    Node head,tail;

    public LRUCache(int capacity) {
        this.capacity = capacity;
        head = new Node(0,0);
        tail = new Node(0,0);
        head.next = tail;
        tail.prev = head;
        head.prev = null;
        tail.next = null;
        count= 0;
    }
    public void deleteNode(Node node){
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }
    public void addToHead(Node node){
        node.next=head.next;
        node.next.prev = node;
        node.prev = head;
        head.next = node;
    }
    public int get(int key) {
        if(map.get(key)!=null){
            Node node = map.get(key);
            int result = node.value;
            deleteNode(node);
            addToHead(node);
            return result;
        }
        return -1;
    }
    
    public void put(int key, int value) {
        if(map.get(key)!=null){
           Node node = map.get(key);
            node.value = value;
            deleteNode(node);
            addToHead(node);
        } else {
            Node node = new Node(key,value);
            map.put(key,node);
            if(count<capacity){
                count++;
                addToHead(node);
            } else {
                map.remove(tail.prev.key);
                deleteNode(tail.prev);
                addToHead(node);
            }
        }
    }
}





// Code Implementation 2 



import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

class LRUCache {
    Map<Integer, Integer> dict;
    LinkedList<Integer> queue;
    int cap;
    
    public LRUCache(int capacity) {
        dict = new HashMap<>();
        queue = new LinkedList<>();
        this.cap = capacity;
    }
    
    public int get(int key) {
        if (dict.containsKey(key)){
            queue.remove(new Integer(key));
            queue.addFirst(key);
            return dict.get(key);
        }
        return -1;
    }
    
    public void put(int key, int value) {
        if (dict.containsKey(key)){
            queue.remove(new Integer(key));
            queue.addFirst(key);
            dict.put(key, value);
        }
        else{
            dict.put(key, value);
            if (dict.size() > cap){
                int k = queue.removeLast();
                dict.remove(k);
            }
            queue.addFirst(key);
        }
    }
}

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;


class SeatManager {
    private:
        priority_queue<int, vector<int>, greater<int>> seats;
    public:
        SeatManager(int n) {
          for (int i = 1; i < n+1; i++) {
            seats.push(i);
          }
        }
    
        int reserve() {
            int r = seats.top();
            seats.pop();
            return r;
        }
    
        void unreserve(int seatNumber) {
            seats.push(seatNumber);
        }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */

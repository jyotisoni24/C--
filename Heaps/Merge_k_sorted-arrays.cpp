class Solution {
public:
    // Struct to represent an element from a 2D array
    struct triple {
        int val, ind, arr_ind;
        triple(int a, int b, int c) : val(a), ind(b), arr_ind(c) {}
    };

    // Comparator for min-heap (priority queue)
    struct cmp {
        bool operator()(const triple& a, const triple& b) {
            return a.val > b.val; // Min-heap based on value
        }
    };

    // Function to merge k sorted arrays
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        priority_queue<triple, vector<triple>, cmp> pq;

        // Initialize the heap with the first element of each array
        for (int i = 0; i < K; i++) {
            pq.push(triple(arr[i][0], 0, i));
        }

        vector<int> ans;

        // Process elements in the priority queue
        while (!pq.empty()) {
            triple t = pq.top();
            pq.pop();
            ans.push_back(t.val);

            // If there are more elements in the same array, push the next element
            if (t.ind + 1 < arr[t.arr_ind].size()) {
                pq.push(triple(arr[t.arr_ind][t.ind + 1], t.ind + 1, t.arr_ind));
            }
        }

        return ans;
    }
};


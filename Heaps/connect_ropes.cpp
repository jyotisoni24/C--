int Solution::solve(vector<int> &A) {
    // Min-heap (priority_queue with greater<int>)
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push all elements into the priority queue
    for (int i = 0; i < A.size(); i++) {
        pq.push(A[i]);
    }

    int totalSum = 0;

    // Combine elements pairwise
    while (pq.size() > 1) {
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();
        int sum = first + second;
        totalSum += sum;
        pq.push(sum);
    }

    return totalSum;
}
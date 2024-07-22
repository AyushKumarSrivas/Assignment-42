Queue
1. Print all elements of a queue in C++ STL
2. Create a railways ticket counter and allot ticket to first come first take using c++ STL
3. Check if a queue is empty or not using queue::size() function
4. Manage a queue for multiple input and store in ascending order of his first character
5. Schedule a interview by using applicant's reaching time using c++ STL
6. In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
elements arrangement i.e. the elements which insert first will be removed first. In the
queue, elements are inserted at one end known as "back" and are deleted from
another end known as "front".empty() and size() function of the queue with the
Example.
7. Exchange the contents of two queues but the queues must be of the same data type,
although sizes may differ.
8. Insert a new element into the queue container, the new element is added to the end
of the queue
9. Adds the element ‘g’ at the end of the queue.
10. Deletes the first element of the queue.

Solution:-

1. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
    }

    std::cout << "Queue elements: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}

2. #include <iostream>
#include <queue>

int main() {
    std::queue<int> ticketQueue;
    int ticketNumber = 1;
    
    // Allot tickets to 5 people
    for (int i = 0; i < 5; ++i) {
        ticketQueue.push(ticketNumber++);
    }

    std::cout << "Allotting tickets to first come first served:" << std::endl;
    while (!ticketQueue.empty()) {
        std::cout << "Ticket Number: " << ticketQueue.front() << std::endl;
        ticketQueue.pop();
    }

    return 0;
}

3. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    std::cout << "Is queue empty? " << (q.size() == 0 ? "Yes" : "No") << std::endl;

    q.push(1);
    std::cout << "Is queue empty after pushing an element? " << (q.size() == 0 ? "Yes" : "No") << std::endl;

    return 0;
}

4. #include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main() {
    std::queue<std::string> q;
    q.push("Apple");
    q.push("Banana");
    q.push("Cherry");
    q.push("Avocado");
    
    // Convert queue to vector to sort
    std::vector<std::string> v;
    while (!q.empty()) {
        v.push_back(q.front());
        q.pop();
    }
    std::sort(v.begin(), v.end());

    // Print sorted elements
    std::cout << "Sorted elements: ";
    for (const auto& item : v) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

5. #include <iostream>
#include <queue>

struct Applicant {
    std::string name;
    int arrivalTime;
    
    bool operator<(const Applicant& other) const {
        return arrivalTime > other.arrivalTime; // Min-heap based on arrival time
    }
};

int main() {
    std::priority_queue<Applicant> pq;
    pq.push({"Alice", 10});
    pq.push({"Bob", 5});
    pq.push({"Charlie", 15});

    std::cout << "Interview schedule based on arrival time:" << std::endl;
    while (!pq.empty()) {
        std::cout << "Applicant: " << pq.top().name << " at time " << pq.top().arrivalTime << std::endl;
        pq.pop();
    }

    return 0;
}

6. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    std::cout << "Queue empty? " << (q.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Queue size: " << q.size() << std::endl;

    q.push(1);
    q.push(2);

    std::cout << "Queue empty? " << (q.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Queue size: " << q.size() << std::endl;

    return 0;
}

7. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    for (int i = 1; i <= 3; ++i) {
        q1.push(i);
    }
    for (int i = 4; i <= 6; ++i) {
        q2.push(i);
    }

    std::cout << "Queue 1 before exchange: ";
    while (!q1.empty()) {
        std::cout << q1.front() << " ";
        q1.pop();
    }
    std::cout << std::endl;

    std::cout << "Queue 2 before exchange: ";
    while (!q2.empty()) {
        std::cout << q2.front() << " ";
        q2.pop();
    }
    std::cout << std::endl;

    // Exchange contents
    std::swap(q1, q2);

    std::cout << "Queue 1 after exchange: ";
    while (!q1.empty()) {
        std::cout << q1.front() << " ";
        q1.pop();
    }
    std::cout << std::endl;

    std::cout << "Queue 2 after exchange: ";
    while (!q2.empty()) {
        std::cout << q2.front() << " ";
        q2.pop();
    }
    std::cout << std::endl;

    return 0;
}

8. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    
    q.push(3); // Insert new element

    std::cout << "Queue elements after insertion: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}

9. #include <iostream>
#include <queue>

int main() {
    std::queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    
    q.push('g'); // Add element 'g'

    std::cout << "Queue elements after adding 'g': ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}

10. #include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    std::cout << "Queue elements before deletion: ";
    std::queue<int> temp = q;
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    q.pop(); // Delete the first element

    std::cout << "Queue elements after deletion: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}

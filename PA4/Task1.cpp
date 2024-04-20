#include <iostream>
#include <vector>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
using namespace std;

// Define structure for a node in the PDC lane
struct Node
{
    int priority; // Priority of the task
    Node *next;   // Pointer to the next node
};

class PDCLaneManager
{
private:
    Node *head; // Pointer to the head of the linked list

public:
    PDCLaneManager() : head(nullptr) {}

    // Function to insert a new node with given priority
    void insertNode(int priority)
    {
        // Implement insertion logic here
    }

    // Function to remove a node with lowest priority
    void removeNode()
    {
        // Implement removal logic here
    }

    // Function to sort the linked list based on priority
    void sortLanes()
    {
        // Implement sorting algorithm here (e.g., Merge Sort, Quick Sort, etc.)
    }

    // Function to reverse the sorted linked list
    void reverseLanes()
    {
        // Implement reversal logic here
    }

    // Function to detect loops in the linked list
    bool detectLoop()
    {
        // Implement loop detection algorithm here (e.g., Floyd's Cycle Detection Algorithm)
        return false; // Placeholder
    }

    // Function to remove loops from the linked list
    void removeLoop()
    {
        // Implement loop removal logic
        // You might find it helpful to call detectLoop() here
    }

    // Function to display the PDC lanes
    vector<int> displayLanes()
    {
        // Implement display logic here
        // Push all the priorities of nodes in the linked list in a vector and return it
        // If list is empty, return empty vector
    }

    // DO NOT EDIT THIS
    void makeLoop()
    {
        if (head == nullptr)
        {
            return;
        }
        else
        {
            Node *curr = head;
            Node *hold = head->next->next;
            while (curr->next)
            {
                curr = curr->next;
            }
            curr->next = hold;
        }
    }
};

// DO NOT CHANGE CODE BELOW

bool checkVectors(vector<int> v1, vector<int> v2)
{
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != v2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    PDCLaneManager pdcManager;
    int marks = 0;
    // Test case 1: Insert nodes with different priorities
    pdcManager.insertNode(3);
    pdcManager.insertNode(1);
    pdcManager.insertNode(5);
    pdcManager.insertNode(2);
    pdcManager.insertNode(4);
    pdcManager.insertNode(5);

    // Test case 2: Display the lanes to check insertion
    vector<int> priorities = pdcManager.displayLanes();
    int arr[] = {3, 1, 5, 2, 4};
    vector<int> trueVector;
    for (int i = 0; i < 5; i++)
    {
        trueVector.push_back(arr[i]);
    }
    bool check = checkVectors(trueVector, priorities);
    if (check)
    {
        marks += 5;
        cout << endl
             << GREEN << "Node Insertion Passed 5/5";
    }
    else
    {
        cout << endl
             << RED << "Node Insertion Failed 0/5";
    }

    // Test case 3: Sort the lanes
    pdcManager.sortLanes();

    // Test case 4: Display the sorted lanes
    priorities = pdcManager.displayLanes();
    int arr1[] = {5, 4, 3, 2, 1};
    vector<int> sortedvec;
    for (int i = 0; i < 5; i++)
    {
        sortedvec.push_back(arr1[i]);
    }
    check = checkVectors(sortedvec, priorities);
    if (check)
    {
        marks += 10;
        cout << endl
             << GREEN << "Sorting Passed 10/10";
    }
    else
    {
        cout << endl
             << RED << "Sorting Failed 0/10";
    }

    // Test case 5: Reverse the sorted lanes
    pdcManager.reverseLanes();

    // Test case 6: Display the reversed lanes
    priorities = pdcManager.displayLanes();
    int arr2[] = {1, 2, 3, 4, 5};
    vector<int> revvec;
    for (int i = 0; i < 5; i++)
    {
        revvec.push_back(arr2[i]);
    }
    check = checkVectors(revvec, priorities);
    if (check)
    {
        marks += 10;
        cout << endl
             << GREEN << "Reversal Passed 10/10";
    }
    else
    {
        cout << endl
             << RED << "Reversal Failed 0/10";
    }

    // Test case 7: Remove a node with lowest priority
    pdcManager.removeNode();
    priorities = pdcManager.displayLanes();
    int arr3[] = {2, 3, 4, 5};
    vector<int> remvec;
    for (int i = 0; i < 4; i++)
    {
        remvec.push_back(arr3[i]);
    }
    check = checkVectors(remvec, priorities);
    if (check)
    {
        marks += 3;
        cout << endl
             << GREEN << "Remove Node Passed 3/3";
    }
    else
    {
        cout << endl
             << RED << "Remove Node Failed 0/3";
    }
    pdcManager.insertNode(6);
    pdcManager.insertNode(11);
    pdcManager.insertNode(8);
    pdcManager.insertNode(12);
    pdcManager.insertNode(10);
    pdcManager.makeLoop();
    // Test case 9: Detect loop in the lanes (if applicable)
    bool hasLoop = pdcManager.detectLoop();
    if (hasLoop)
    {
        marks += 5;
        cout << endl
             << GREEN << "Loop Detection Passed 5/5";
    }
    else
    {
        cout << endl
             << RED << "Loop Detection Failed 0/5";
    }

    // Test case 10: Remove loop (if detected)
    if (hasLoop)
    {
        pdcManager.removeLoop();

        priorities = pdcManager.displayLanes();
        int arr4[] = {2, 3, 4, 5, 6, 8, 10, 11, 12};
        vector<int> vec;
        for (int i = 0; i < 9; i++)
        {
            vec.push_back(arr4[i]);
        }
        check = checkVectors(vec, priorities);
        if (check)
        {
            marks += 7;
            cout << endl
                 << GREEN << "Loop Removal Passed 7/7";
        }
        else
        {
            cout << endl
                 << RED << "Loop Removal Failed 0/7";
        }
    }

    cout << endl
         << endl
         << CYAN << "TOTAL MARKS " << marks << "/40";
    if (marks == 40)
    {
        cout << endl
             << MAGENTA << "WOHOO!! Take a break and go to the next task.";
    }

    return 0;
}
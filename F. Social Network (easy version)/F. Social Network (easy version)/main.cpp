/*#include <iostream>
#include<set>
#include<deque>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    deque <int>dq;
    set<int>sett;
    for(int i=0;i<n;i++)
    {
        int id;
        cin>>id;
        //if id isnot in the screen
        if(sett.find(id)==sett.end())
        {
            if(dq.size()==k)
            {
                sett.erase(dq.back());
                dq.pop_back();
            }
        }
        dq.push_front(id);
        sett.insert(id);
    }
    cout<<dq.size()<<endl;
    for(int id:dq)
    {
        cout<<id<<" ";
    }
    cout<<endl;

    return 0;
}
*/
#include <iostream>
#include <set>
#include <deque>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Read the number of messages and the maximum number of conversations
    deque<int> dq; // To store the order of conversations
    set<int> sett; // To track which conversations are currently displayed

    for (int i = 0; i < n; i++) {
        int id;
        cin >> id; // Read the ID of the friend sending the message

        // If the conversation with id is not currently displayed
        if (sett.find(id) == sett.end()) {
            // If the deque is full, remove the last conversation
            if (dq.size() == k) {
                sett.erase(dq.back()); // Remove from the set
                dq.pop_back(); // Remove from the deque
            }
            // Add the new conversation to the front
            dq.push_front(id);
            sett.insert(id); // Add to the set
        }
    }

    // Output the results
    cout << dq.size() << endl; // Print the number of conversations displayed
    for (int id : dq) {
        cout << id << " "; // Print the IDs of the displayed conversations
    }
    cout << endl;

    return 0;
}

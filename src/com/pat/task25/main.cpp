#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    string address;
    string next;

    friend ostream& operator<<(ostream& out, const Node node)
    {
        out << node.address << " " << node.data << " " << node.next;
        return out;
    }
};

int main() // 本题注意点：1.不是所有输入的节点都是在链表里的 2.因为1的存在，所以最后一个节点的next不一定是-1，需要检测设置；
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string head;
    int N, K;
    cin >> head >> N >> K;
    Node* inputArr = new Node[N];
    for (int i = 0; i < N; i++)
    {
        Node node;
        cin >> node.address >> node.data >> node.next;
        inputArr[i] = node;
    }
    vector<Node> originalArr;
    string tmpPointer = head;
    int index = 0;
    while (tmpPointer != "-1")
    {
        for (int i = 0; i < N; i++)
            if (inputArr[i].address == tmpPointer)
            {
                originalArr.push_back(inputArr[i]);
                tmpPointer = inputArr[i].next;
            }
    }

    delete[] inputArr;

    N = originalArr.size();

    int times = N / K;

    for (int i = 0; i < times; i++)
        reverse(originalArr.begin() + i * K, originalArr.begin() + (i + 1) * K);

    for (int i = 0; i < N; i++)
    {
        if (i != N - 1) originalArr[i].next = originalArr[i + 1].address;
        else originalArr[i].next = "-1";
        cout << originalArr[i];
        if (i != N - 1)
            cout << endl;
    }
    return 0;
}

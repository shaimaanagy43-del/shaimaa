//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Node
{
public:
    int Value;
    Node * next;
};

//short FindNumberAlgorhim1(short arr1[10], short Number)
//
//{
//    int n = 10;
//    short pos = -1;
//
//    for (int i = 0; i <= n; i++)
//    {
//        if (arr1[i] == Number)
//        {
//            pos = i;
//        }
//    }
//
//    return pos;
//
//}
//
//short FindNumberAlgorhim2(short arr1[10], short Number)
//
//{
//    int n = 10;
//
//    for (int i = 0; i <= n; i++)
//    {
//        if (arr1[i] == Number)
//        {
//            return i;
//        }
//    }
//
//    return -1;
//
//}

int main()
{
    Node* head;

    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->Value = 1;
    Node2->Value = 2;
    Node3->Value = 3;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    head = Node1;
    while (head != NULL)
    {
        cout << head->Value<<endl;
        head = head->next;
    }






    //short arr1[10] = { 10,20,30,40,50,60,70,80,90,100 };

    //cout << FindNumberAlgorhim1(arr1, 30) << "\n";
    //cout << FindNumberAlgorhim2(arr1, 30) << "\n";

    //stack<int>Mystack1;
    //stack<int>Mystack2;

    //Mystack1.push(10);
    //Mystack1.push(20);
    //Mystack1.push(30);
    //Mystack1.push(40);

    //Mystack2.push(50);
    //Mystack2.push(60);
    //Mystack2.push(70);
    //Mystack2.push(80);

    //Mystack1.swap(Mystack2);
    //
    //cout << "Mystack1 = ";
    //while (!Mystack1.empty())
    //{
    //    cout << Mystack1.top() << " ";
    //    Mystack1.pop();
    //}
    //cout <<endl<< "Mystack2 = ";
    //while (!Mystack2.empty())
    //{
    //    cout << Mystack2.top() << " ";
    //    Mystack2.pop();
    //}


    //cout << "Count= " << stkNumbers.size() << endl;

    //cout << "Number are:\n";
    //while (!stkNumbers.empty())
    //{
    //    cout << stkNumbers.top() << "\n";
    //    stkNumbers.pop();
    //}
    /*queue<int>MyQueue;
    queue<int>MyQueue2;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);


    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);
    MyQueue.swap(MyQueue2);


    cout << "\nCount: " << MyQueue.size();
    cout << "\nFront: " << MyQueue.front();
    cout << "\nBack: " << MyQueue.back();

    cout << "\nMyQueue = ";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }
    cout << "\nMyQueue2 = ";
    while (!MyQueue2.empty())
    {
        cout << MyQueue2.front() << " ";
        MyQueue2.pop();
    }*/


    system("pause>0");
    return 0;
}

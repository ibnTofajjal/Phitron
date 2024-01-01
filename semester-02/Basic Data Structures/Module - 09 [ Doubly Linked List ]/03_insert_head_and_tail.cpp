

#include <bits/stdc++.h>
using namespace std;

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃             NODE 🎉             ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃             GET SIZE            ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃         PRINT NORMAL WAY        ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
void print_normal_way(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃        PRINT REVERSE WAY        ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

void print_reverse_way(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->prev;
    }
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃       INSERT AT POSSITION       ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

void insert_at_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++) // get the exect position
    {
        tmp = tmp->next;
    }

    /*
    ┃   NULL | 10 | NEXT          10 | 20 | 30          20 | 30 | 40        30 | 40 | NULL
    ┃   NEW_NODE = 100
    */

    newNode->next = tmp->next; // 100->30
    tmp->next = newNode;       // 20 -> 100

    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = tmp;           // 20<-100
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃          INSERT AT HEAD         ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃          INSERT AT TAIL         ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; // Update the tail pointer to point to the new node
}

/*
    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    ┃             MAIN 🎉             ┃
    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;

    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0) // THEN INSERT THE NODE AT HEAD
    {
        cout << "inserting at head:" << endl;
        insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else // INSERT THE NODE AT THE POSITION
    {

        cout << "inserting in position " << pos << endl;
        insert_at_pos(head, pos, val);
    }
    cout << "Print Normal Way \n_______________" << endl;
    print_normal_way(head);
    cout << "Print Reverse Way \n_______________" << endl;
    print_reverse_way(tail);

    return 0;
}

/*




                                                       bbbbbbbb
DDDDDDDDDDDDD                                          b::::::b            lllllll
D::::::::::::DDD                                       b::::::b            l:::::l
D:::::::::::::::DD                                     b::::::b            l:::::l
DDD:::::DDDDD:::::D                                     b:::::b            l:::::l
  D:::::D    D:::::D    ooooooooooo   uuuuuu    uuuuuu  b:::::bbbbbbbbb     l::::lyyyyyyy           yyyyyyy
  D:::::D     D:::::D oo:::::::::::oo u::::u    u::::u  b::::::::::::::bb   l::::l y:::::y         y:::::y
  D:::::D     D:::::Do:::::::::::::::ou::::u    u::::u  b::::::::::::::::b  l::::l  y:::::y       y:::::y
  D:::::D     D:::::Do:::::ooooo:::::ou::::u    u::::u  b:::::bbbbb:::::::b l::::l   y:::::y     y:::::y
  D:::::D     D:::::Do::::o     o::::ou::::u    u::::u  b:::::b    b::::::b l::::l    y:::::y   y:::::y
  D:::::D     D:::::Do::::o     o::::ou::::u    u::::u  b:::::b     b:::::b l::::l     y:::::y y:::::y
  D:::::D     D:::::Do::::o     o::::ou::::u    u::::u  b:::::b     b:::::b l::::l      y:::::y:::::y
  D:::::D    D:::::D o::::o     o::::ou:::::uuuu:::::u  b:::::b     b:::::b l::::l       y:::::::::y
DDD:::::DDDDD:::::D  o:::::ooooo:::::ou:::::::::::::::uub:::::bbbbbb::::::bl::::::l       y:::::::y
D:::::::::::::::DD   o:::::::::::::::o u:::::::::::::::ub::::::::::::::::b l::::::l        y:::::y
D::::::::::::DDD      oo:::::::::::oo   uu::::::::uu:::ub:::::::::::::::b  l::::::l       y:::::y
DDDDDDDDDDDDD           ooooooooooo       uuuuuuuu  uuuubbbbbbbbbbbbbbbb   llllllll      y:::::y
                                                                                        y:::::y  dddddddd
LLLLLLLLLLL               iiii                   kkkkkkkk                              y:::::y   d::::::d     LLLLLLLLLLL               iiii                            tttt
L:::::::::L              i::::i                  k::::::k                             y:::::y    d::::::d     L:::::::::L              i::::i                        ttt:::t
L:::::::::L               iiii                   k::::::k                            y:::::y     d::::::d     L:::::::::L               iiii                         t:::::t
LL:::::::LL                                      k::::::k                           yyyyyyy      d:::::d      LL:::::::LL                                            t:::::t
  L:::::L               iiiiiiinnnn  nnnnnnnn     k:::::k    kkkkkkk eeeeeeeeeeee        ddddddddd:::::d        L:::::L               iiiiiii     ssssssssss   ttttttt:::::ttttttt
  L:::::L               i:::::in:::nn::::::::nn   k:::::k   k:::::kee::::::::::::ee    dd::::::::::::::d        L:::::L               i:::::i   ss::::::::::s  t:::::::::::::::::t
  L:::::L                i::::in::::::::::::::nn  k:::::k  k:::::ke::::::eeeee:::::ee d::::::::::::::::d        L:::::L                i::::i ss:::::::::::::s t:::::::::::::::::t
  L:::::L                i::::inn:::::::::::::::n k:::::k k:::::ke::::::e     e:::::ed:::::::ddddd:::::d        L:::::L                i::::i s::::::ssss:::::stttttt:::::::tttttt
  L:::::L                i::::i  n:::::nnnn:::::n k::::::k:::::k e:::::::eeeee::::::ed::::::d    d:::::d        L:::::L                i::::i  s:::::s  ssssss       t:::::t
  L:::::L                i::::i  n::::n    n::::n k:::::::::::k  e:::::::::::::::::e d:::::d     d:::::d        L:::::L                i::::i    s::::::s            t:::::t
  L:::::L                i::::i  n::::n    n::::n k:::::::::::k  e::::::eeeeeeeeeee  d:::::d     d:::::d        L:::::L                i::::i       s::::::s         t:::::t
  L:::::L         LLLLLL i::::i  n::::n    n::::n k::::::k:::::k e:::::::e           d:::::d     d:::::d        L:::::L         LLLLLL i::::i ssssss   s:::::s       t:::::t    tttttt
LL:::::::LLLLLLLLL:::::Li::::::i n::::n    n::::nk::::::k k:::::ke::::::::e          d::::::ddddd::::::dd     LL:::::::LLLLLLLLL:::::Li::::::is:::::ssss::::::s      t::::::tttt:::::t
L::::::::::::::::::::::Li::::::i n::::n    n::::nk::::::k  k:::::ke::::::::eeeeeeee   d:::::::::::::::::d     L::::::::::::::::::::::Li::::::is::::::::::::::s       tt::::::::::::::t
L::::::::::::::::::::::Li::::::i n::::n    n::::nk::::::k   k:::::kee:::::::::::::e    d:::::::::ddd::::d     L::::::::::::::::::::::Li::::::i s:::::::::::ss          tt:::::::::::tt
LLLLLLLLLLLLLLLLLLLLLLLLiiiiiiii nnnnnn    nnnnnnkkkkkkkk    kkkkkkk eeeeeeeeeeeeee     ddddddddd   ddddd     LLLLLLLLLLLLLLLLLLLLLLLLiiiiiiii  sssssssssss              ttttttttttt

*/

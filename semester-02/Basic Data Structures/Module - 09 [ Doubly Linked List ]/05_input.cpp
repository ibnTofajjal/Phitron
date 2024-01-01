#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
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
    tail = tail->next;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_normal(head);
    print_reverse(tail);
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

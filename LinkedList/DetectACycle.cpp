#include<bits/stdc++.h>
bool detectCycle(Node *head)

{

    if(head==NULL | head->next== NULL)

    return false;

    Node* temp=head;

    unordered_map<Node*,bool>visited;

    while(temp!=NULL){

        if(visited[temp]==true)

        return true;

        visited[temp]=true;

        temp=temp->next;

    }

    return false;

}
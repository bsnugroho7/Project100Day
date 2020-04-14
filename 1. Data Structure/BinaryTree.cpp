#include <iostream>
using namespace std;

class Node
{
	public:
		int iData;
		Node* pLeftChild;
		Node* pRightChild;
		
		Node(){iData=0; pLeftChild =0; pRightChild =0;}

		Node(int x){iData=x; pLeftChild =0; pRightChild =0;}

		void display(){
			cout << iData <<" ";
		}
};
int i=0;
class Tree
{
	private:
		Node* pRoot;
        
	
	public:
		Tree(){ pRoot=NULL;}
		
	Node* find(int key, Node* pCurrent){
		if(pCurrent->iData==key)
			return pCurrent;
		else if(pCurrent==NULL)
			return NULL;
		else if(pCurrent->iData<key)
			return find(key, pCurrent->pRightChild);
		else
			return find(key, pCurrent->pLeftChild);
	}
	
	Node* find(int key){
		return find(key, pRoot);
	}
	
	int findMin(Node* pCurrent){
		if(pCurrent->pLeftChild==NULL)
			return pCurrent->iData;
		else
			return findMin(pCurrent->pLeftChild);
	}
	
	int findMin(){
		return findMin(pRoot);
	}
	
	int findMax(Node* pCurrent){
		if(pCurrent->pRightChild==NULL)
			return pCurrent->iData;
		else
			return findMax(pCurrent->pRightChild);
	}
	
	int findMax(){
		return findMax(pRoot);
	}
	
	void insert(int x, Node* &p){
		if(p==NULL) {
			Node* temp = new Node(x);
			temp->pLeftChild=NULL;
			temp->pRightChild=NULL;
            cout<<p<<endl;
			p=temp;
            cout<<"ptemp : "<<p<<endl;
			return;
		} else if(x < p->iData) 
		   insert(x, p->pLeftChild);
		  else 
		   insert(x, p->pRightChild);
	}	
		
	void insert(int x){
        
		insert(x, pRoot);
        cout<<"pRoot: "<<"("<<i<<")"<<pRoot<<endl;
        i++;
	}
	
	void inOrder(Node* p){
		if(p!=NULL){
			inOrder(p->pLeftChild);
			p->display();
			inOrder(p->pRightChild);
		}
	}

	void inOrder(){
		cout << "Inorder: ";
		inOrder(pRoot);
		cout << endl;
	}

	void preOrder(Node* p){
		if(p!=NULL){
			p->display();
			preOrder(p->pLeftChild);
			preOrder(p->pRightChild);
		}
	}

	void preOrder(){
		cout << "Preorder: ";
		preOrder(pRoot);
		cout << endl;
	}

	void postOrder(Node* p){
		if(p!=NULL){
			postOrder(p->pLeftChild);
			postOrder(p->pRightChild);
			p->display();
		}
	}

	void postOrder(){
		cout << "Postorder: ";
		postOrder(pRoot);
		cout << endl;
	}
	
	int count(Node* pCurrent){
		if(pCurrent==NULL)
			return 0;
		else 
			return 1 +  count(pCurrent->pLeftChild)
					 +  count(pCurrent->pRightChild);
	}
	
	int count(){
		return count(pRoot);
	}
};

int main(){
	Tree* bst=new Tree();
	bst->insert(90);
	bst->insert(40);
	bst->insert(120);
	bst->insert(60);
	bst->insert(30);
	bst->insert(190);
	bst->inOrder();
	bst->preOrder();
	bst->postOrder();
	cout << "Min value: "<<bst->findMin() << endl;
	cout << "Max value: "<<bst->findMax() << endl;
	cout << "Number of nodes:" << bst->count() << endl;
	return 0;
}

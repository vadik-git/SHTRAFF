#include "Fine.h"





void Fine::setName(const string & name)
{
	this->name = name;

}

const string & Fine::GetName()
{
	return name;
}

void Fine::setDate(const string & date)
{
	this->date = date;

}

const string & Fine::GetDate()
{
	return date;
}

void Fine::setSum(float & sum)
{
	this->sum = sum;
}

float Fine::GetSum()
{
	return sum;
}

bool CarNode::isEmpty() const
{
	return node ==nullptr;
}

void CarNode::AddNode(int numb, Fine * fine)
{
	Node*tmp = new Node{ numb };
	if (isEmpty()) {
		tmp->fines.push_back(fine);
		node = tmp;
		return;
	}
	Node*Tmp = node;
	bool error = false;
	while (!error) {
		if (numb == Tmp->number) {
			Tmp->fines.push_back(fine);
			error = true;
		}
		if (numb < Tmp->number) {
			if (tmp->left == nullptr) {
				Tmp->left = tmp;
				tmp->fines.push_back(fine);
				tmp->parent = Tmp;
				error = true;
			}
			else {
				Tmp = Tmp->left;
			}
		}
		else if (numb > Tmp->number) {
			if (Tmp->right == nullptr) {
				Tmp->right = tmp;
				tmp->fines.push_back(fine);
				tmp->parent = Tmp;
				error = true;
			}
			else {
				Tmp = Tmp->right;
			}
		}
	}
}

void CarNode::print() const
{
	Prints(node);
}
auto CarNode::finNode(Node * node, int tmp)
{
	if (node == nullptr) {
		return (Node*)nullptr;
	}
	if (node->number == tmp)
		return node;

	if (tmp < node->number) {
		return finNode(node->left, tmp);
	}
	else {
		return finNode(node->right, tmp);
	}
}

void CarNode::printNumber(int number)
{
	if (isEmpty()) {
		cout << "Fine not found" << endl;
	}
	cout << "Numb >>" << number << endl;
	finNode(node, number)->show();
}

void CarNode::deleteNumber(int number)
{
	if (node == nullptr) {
		cout << "Not found" << endl;
		return;
	}
	else {
		delete finNode(node, number);
	}

}

void CarNode::Prints(Node * node) const
{
	if (node != nullptr) {
		Prints(node->left);
		cout << "numb >>" << node->number << endl;
		node->show();
		Prints(node->right);
    }
}




